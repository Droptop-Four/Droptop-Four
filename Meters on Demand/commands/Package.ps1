function New-Package {
    param (
        [Parameter(Mandatory)]
        [string]
        $RootConfig
    )

    $Cache = $MetersOnDemand.Cache
    $SkinPath = $Cache.SkinPath
    $SettingsPath = $Cache.SettingsPath
    $RainmeterDirectory = $Cache.RainmeterDirectory

    if ($OutDirectory -and !(Test-Path -Path "$($OutDirectory)")) {
        throw "Invalid -OutputDirectory" 
    }
    if ($OutPath -and ($OutPath -notmatch "\\|\/")) { $OutPath = ".\$($OutPath)" }
    if ($OutPath -and !(Test-Path -Path "$(Split-Path $OutPath)")) {
        throw "Invalid -Output"
    }

    # Find rootconfig
    $RootConfigPath = "$($SkinPath)\$($RootConfig)"
    if (!(Test-Path -Path $RootConfigPath)) { 
        throw "RootConfigPath '$($RootConfigPath)' does not exist." 
    }
    Write-Host "Found ROOTCONFIG at " -NoNewline -ForegroundColor Gray 
    Write-Host "$RootConfigPath" -ForegroundColor White

    # Get skin information
    $RMSKIN = Get-SkinInfo -RootConfig "$RootConfig"
    Write-Host "`nSkin information:" -ForegroundColor Blue
    # $RMSKIN

    # Temp path
    $temp = "$($SkinPath)\$($MetersOnDemand.TempDirectory)"
    Clear-Temp

    # Create RMSKIN.ini
    $ini = @"
[rmskin]
Name=$($RMSKIN.SkinName)
"@

    $ignoredOptions = @("Ignore", "HeaderImage", "SkinName")
    foreach ($option in $RMSKIN.GetEnumerator()) {
        if (("$($option.Name)" -notin $ignoredOptions) -and ($option.Value)) {
            $append = "$($option.Name)=$($option.Value)"
            Write-Host $append
            $ini += "`n$append"
        }
    }
    $ini | Out-File -FilePath "$($temp)\RMSKIN.ini"

    # Copy the skin
    $__ = New-Item -ItemType Directory -Path "$($temp)\Skins"
    $__ = New-Item -ItemType Directory -Path "$($temp)\Skins\$($RootConfig)"

    # Exclude files
    $excluded = @(".git", ".gitignore")
    if ($RMSKIN.Exclude) {
        "$($RMSKIN.Exclude)" -split ",|\|" | % { $excluded += "$($_)".Trim() }
    }
    Copy-Item -Path "$($RootConfigPath)\*" -Destination "$($temp)\Skins\$($RootConfig)" -Exclude $excluded -Recurse
    # Write-Host "`nCopied '$($RootConfig)' skin files"
    
    # Get plugins
    $plugins = Get-Plugins -RootConfig "$RootConfig"
    Write-Host "`nDetected plugins used in skin:" -ForegroundColor Blue
    Write-Host $plugins.Keys

    # Copy the plugins
    $__ = New-Item -ItemType Directory -Path "$($temp)\Plugins"
    $__ = New-Item -ItemType Directory -Path "$($temp)\Plugins\32bit"
    $__ = New-Item -ItemType Directory -Path "$($temp)\Plugins\64bit"
    if ($plugins.Length) {
        Write-Host "`nCollecting plugins for package..." -ForegroundColor Blue
    }
    foreach ($plugin in $plugins.Keys) {
        $latest = Get-LatestPlugin -Plugin $plugin
        if ($latest) {
            Copy-Item -Path "$($latest.x86)\*" -Destination "$($temp)\Plugins\32bit\" -Recurse -Include *.dll
            Copy-Item -Path "$($latest.x64)\*" -Destination "$($temp)\Plugins\64bit\" -Recurse -Include *.dll
            Write-Host "Copied $plugin $($latest.Version)"
        }
    }

    # Copy the header image
    $header = $RMSKIN.HeaderImage
    if ($header -match "^$RootConfig") {
        $header = "$($SkinPath)\$($header)"
    }
    if ($header) {
        Copy-Item -Path $header -Destination "$($temp)\RMSKIN.bmp"
        Write-Host "`nCopied header image to RMSKIN.bmp"
    }

    # Copy the layout
    if ("$($RMSKIN.LoadType)".ToLower() -eq "layout") {
        $layoutname = $RMSKIN.Load
        $layout = "$($SettingsPath)\Layouts\$($layoutname)"
        if (!(Test-Path -Path "$layout")) { throw "Layout '$($layoutname)' doesn't exist" }
        $__ = New-Item -ItemType Directory -Path "$($temp)\Layouts"
        Copy-Item -Path "$layout" -Recurse -Destination "$($temp)\Layouts"
        Write-Host "Included the '$($layoutname)' layout"
    }

    # Override output name
    $filename = "$($RMSKIN.SkinName)"
    if ($RMSKIN.Version) { $filename += " $($RMSKIN.Version)" }
    if ($OutFile) { $filename = $OutFile -replace ".rmskin$", "" }
    $filename += ".rmskin"

    $archive = "$($temp)\skin.zip"
    Write-Host "`nCreating .zip archive..."
    Compress-Archive -CompressionLevel Optimal -Path "$($temp)\*" -DestinationPath $archive
    Add-RMfooter -Target $archive
    Write-Host "`nSkin package created!" -ForegroundColor Green

    # Override output directory
    $dir = "$($env:USERPROFILE)\Desktop"
    if ($OutDirectory) {
        $dir = $OutDirectory -replace "\\$", ""
    }

    # Override entire output path
    if ($OutPath) {
        $dir = Split-Path $OutPath
        $filename = ("$(Split-Path $OutPath -Leaf)" -replace ".rmskin$", "") + ".rmskin"
    }

    $OutputPath = "$($dir)\$($filename)"

    Move-Item -Path "$($temp)\skin.rmskin" -Destination $OutputPath -Force

    Clear-Temp

    Write-Host "Final output at: " -NoNewline
    Write-Host "'$($OutputPath)'" -ForegroundColor White

}
