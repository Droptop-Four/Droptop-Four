function Get-SkinObject {
    [CmdletBinding()]
    param (
        [Parameter(ValueFromPipeline, Mandatory, Position = 0)]
        [string]
        $FullName
    )
    $Cache = $MetersOnDemand.Cache
    $Skin = $Cache.Skins.$FullName
    if (-not $Skin) { throw "No skin named $($FullName) found" }
    return $Skin
}

function Get-Request {
    param(
        [Parameter(Position = 0)]
        [string]
        $Uri
    )
    $response = Invoke-WebRequest -Uri $Uri -UseBasicParsing
    return $response
}

function RemovedDirectory {
    $removedDirectory = "$($Cache.SkinPath)\$($MetersOnDemand.Removed)"
    if (-not(Test-Path -Path $removedDirectory)) {
        New-Item -Path $removedDirectory -ItemType Directory
    }
    return $removedDirectory
}

function ToIteratable {
    param(
        [Parameter(Mandatory, Position = 1, ValueFromPipeline)]
        [pscustomobject]
        $Object
    )
    $Members = $Object.psobject.Members | Where-Object membertype -like 'noteproperty'
    return $Members
}

function Get-MondInc {
    param (
        [Parameter(Mandatory)]
        [string]
        $RootConfig
    )
    $SkinPath = $Cache.SkinPath
    $RootConfigPath = "$($SkinPath)\$($RootConfig)"
    if (Test-Path "$($RootConfigPath)\mond.inc") {
        return "$($RootConfigPath)\mond.inc"
    }
    if (Test-Path "$($RootConfigPath)\@Resources\mond.inc") {
        return "$($RootConfigPath)\@Resources\mond.inc"
    }
    return $False
}

function Clear-Temp {
    $SkinPath = $Cache.SkinPath
    $temp = "$($SkinPath)\$($MetersOnDemand.TempDirectory)"
    if (!(Test-Path -Path "$temp")) {
        $__ = New-Item -ItemType Directory -Path $temp 
    }
    $__ = Remove-Item -Path "$temp\*" -Recurse
}

function Get-SkinInfo {
    param (
        [Parameter(Mandatory)]
        [string]
        $RootConfig
    )

    $SkinPath = $Cache.SkinPath

    $Overrides = @{
        Author           = "$Author"
        Version          = "$PackageVersion"
        LoadType         = "$LoadType"
        Load             = "$Load"
        VariableFiles    = "$VariableFiles"
        MinimumRainmeter = "$MinimumRainmeter"
        MinimumWindows   = "$MinimumWindows"
        HeaderImage      = "$HeaderImage"
        Exclude          = "$Exclude"
    }

    $RMSKIN = @{
        SkinName         = $RootConfig
        Author           = $null
        Version          = $null
        LoadType         = $null
        Load             = $null
        VariableFiles    = $null
        MinimumRainmeter = "4.5.17"
        MinimumWindows   = "5.1"
        HeaderImage      = $null
        Exclude          = ""
        MergeSkins       = $null
    }

    $mondinc = Get-MondInc -RootConfig "$RootConfig"
    
    if ($mondinc) {
        Get-Content -Path $mondinc | ForEach-Object {
            $s = $_ -split "="
            $option = "$($s[0])".Trim().ToLower()
            $value = "$($s[1])".Trim()
            if ($option -in @("variablefiles", "headerimage")) {
                $value = $value -replace "#@#\\", "$($RootConfig)\@Resources\"
                $value = $value -replace "#@#", "$($RootConfig)\@Resources\"
            }
            if ($option -in $RMSKIN.Keys) {
                $RMSKIN[$option] = $value
            }
        }
    }

    foreach ($option in $Overrides.GetEnumerator()) {
        if ($option.Value) {
            $RMSKIN[$option.Name] = $option.Value
        }
    }

    # Handle MergeSkins
    if ($MergeSkins) { $RMSKIN["MergeSkins"] = 1 }
    if ($RMSKIN.MergeSkins) { $RMSKIN.Remove("VariableFiles") }

    return $RMSKIN
}

function Add-RMfooter {
    param (
        [Parameter()]
        [string]
        $Target
    )

    $AsByteStream = $True
    if ($PSVersionTable.PSVersion.Major -lt 6) {
        $AsByteStream = $False
    }    

    # Yoinked from https://github.com/brianferguson/auto-rmskin-package/blob/master/.github/workflows/release.yml
    Write-Output "Writing security flags..."
    $size = [long](Get-Item $Target).length
    $size_bytes = [System.BitConverter]::GetBytes($size)
    if ($AsByteStream) {
        Add-Content -Path $Target -Value $size_bytes -AsByteStream
    }
    else {
        Add-Content -Path $Target -Value $size_bytes -Encoding Byte
    }

    $flags = [byte]0

    if ($AsByteStream) {
        Add-Content -Path $Target -Value $flags -AsByteStream
    }
    else {
        Add-Content -Path $Target -Value $flags -Encoding Byte
    }

    $rmskin = [string]"RMSKIN`0"
    Add-Content -Path $Target -Value $rmskin -NoNewLine -Encoding ASCII

    Write-Output "Renaming .zip to .rmskin..."
    Rename-Item -Path $Target -NewName ([io.path]::ChangeExtension($Target, '.rmskin'))
    $Target = $Target.Replace(".zip", ".rmskin")
}

# https://github.com/ThePoShWolf/Utilities/blob/master/Misc/Set-PathVariable.ps1
# Added |^$ to filter out empty items in $arrPath
# Removed the $Scope param and added a static [System.EnvironmentVariableTarget]::User
function Set-PathVariable {
    param (
        [string]$AddPath,
        [string]$RemovePath
    )

    $Scope = [System.EnvironmentVariableTarget]::User

    $regexPaths = @()
    if ($PSBoundParameters.Keys -contains 'AddPath') {
        $regexPaths += [regex]::Escape($AddPath)
    }
    
    if ($PSBoundParameters.Keys -contains 'RemovePath') {
        $regexPaths += [regex]::Escape($RemovePath)
    }
        
    $arrPath = [System.Environment]::GetEnvironmentVariable('PATH', $Scope) -split ';'
    foreach ($path in $regexPaths) {
        $arrPath = $arrPath | Where-Object { $_ -notMatch "^$path\\?| ^$" }
    }
    $value = ($arrPath + $addPath) -join ';'
    [System.Environment]::SetEnvironmentVariable('PATH', $value, $Scope)
}

function Write-Exception {
    [CmdletBinding()]
    param (
        [Parameter(Mandatory, Position = 0, ValueFromPipeline)]
        [object]
        $Exception,
        [Parameter()]
        [switch]
        $Breaking
    )
    if (!$RmApi) { return Write-Error $Exception }
    if ($Exception -is [System.Management.Automation.ErrorRecord]) {
        $RmApi.LogWarning($Exception.ScriptStackTrace)
    }
    $RmApi.LogError($Exception)
    if ($Breaking) {
        $RmApi.Bang("[!About][!DeactivateConfig]")
        exit
    }
}

function Format-SkinList {
    [CmdletBinding()]
    param (
        [Parameter(Mandatory)]
        [PSCustomObject]
        $Skins,
        [Parameter()]
        [Switch]
        $NewLine,
        [Parameter()]
        [Switch]
        $Description
    )

    $Skins | Sort-Object -Property "full_name" | ForEach-Object {
        Write-Host $_.full_name -ForegroundColor Blue -NoNewline
        $current = $_.latest_release.tag_name
        $versionColor = "Gray"
        $installed = $Cache.Installed.($_.full_name)
        $updateable = $Cache.Updateable.($_.full_name)
        if ($installed) {
            $current = $installed
            $versionColor = "Green"
        }
        Write-Host " $($current)" -ForegroundColor $versionColor -NoNewline

        if ($updateable) { Write-Host " ($($updateable) available)" -ForegroundColor Yellow }
        else { Write-Host "" }

        if ($Description) { Write-Host "$($_.description)" }
        if ($NewLine) { Write-Host "" }
    }
}

function Download {
    param (
        [Parameter(ValueFromPipeline, Mandatory, Position = 0)]
        [string]
        $FullName,
        [Parameter()]
        [switch]
        $Quiet
    )

    $Skin = Get-SkinObject $FullName

    if (!$Quiet) {
        Write-Host "Downloading $($Skin.full_name)"
    }

    Invoke-WebRequest -Uri $Skin.latest_release.browser_download_url -OutFile $MetersOnDemand.SkinFile

    return $MetersOnDemand.SkinFile
}
