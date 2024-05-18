function Test-DevCommand {
    $Cache = $MetersOnDemand.Cache

    switch ($Command) {
        "dir" { 
            Start-Process -FilePath "explorer.exe" -ArgumentList "$($Cache.SkinPath)\$($MetersOnDemand.Directory)"
            return 
        }
        "cache" {
            return $Cache
        }
        "open" {
            $RootConfig = Assert-RootConfig
            $p = "$($Cache.SkinPath)\$($RootConfig)"
            if (Test-Path -Path $p) {
                Start-Process -FilePath "$($Cache.ConfigEditor)" -ArgumentList "`"$p`""
                return
            }
        }
        Default {}
    }

    if ($MetersOnDemand.$Command) {
        return $MetersOnDemand.$Command
    }
    if ($Cache.$Command) {
        return $Cache.$Command
    }

    Write-Host "$Command" -ForegroundColor Red -NoNewline
    Write-Host " is not a command! Use" -NoNewline 
    Write-Host " MonD help " -ForegroundColor Blue -NoNewline
    Write-Host "to see available commands!"

}

function Config {

    $Cache = $MetersOnDemand.Cache

    $skinsCount = ($Cache.Skins | ToIteratable | Measure-Object).Count
    $installedCount = ($Cache.Installed | ToIteratable | Measure-Object).Count

    $Cache.Skins = "@{ `"meters-on-demand/cli`": @{ ... }, $($skinsCount - 1) more items... }"
    $Cache.Installed = "@{ `"meters-on-demand/cli`": `"$($MetersOnDemand.Version)`", $($installedCount - 1) more items... }"
    Write-Host "`n`$MetersOnDemand.Cache" -ForegroundColor Green
    $Cache

    $MetersOnDemand.Cache = "@{ ... } (see above)"
    Write-Host "`n`$MetersOnDemand" -ForegroundColor Green
    $MetersOnDemand

}

function New-Skin {
    [CmdletBinding()]
    param (
        [Parameter()]
        [string]
        $SkinName
    )

    $Cache = $MetersOnDemand.Cache
    $ConfigPath = "$($Cache.SkinPath)\$($SkinName)"
    $ResourcesPath = "$($ConfigPath)\@Resources"

    if (Test-Path -Path $ConfigPath) {
        throw "Skin already exists."
    }

    $o = New-Item -ItemType Directory -Path $ConfigPath
    $o = New-Item -ItemType Directory -Path $ResourcesPath

    # Create Mond.inc
    @"
[MonD]
Author=
PreviewImage=
ProfilePicture=
Description=

SkinName=$($SkinName)
LoadType=Skin
Load=$($SkinName)\$($SkinName).ini
Version=v1.0.0
HeaderImage=
"@ | Out-File -FilePath "$($ResourcesPath)\Mond.inc"

    # Create the variables file
    @"
[Variables]

"@ | Out-File -FilePath "$($ResourcesPath)\Variables.inc"

    # Create the skin
    @"
[Rainmeter]
DefaultUpdateDivider=-1
@IncludeVariables=#@#Variables.inc

[Metadata]
Name=$($SkinName)
Author=
Information=
Version=1.0.0
License=Creative Commons Attribution-Non-Commercial-Share Alike 3.0

[Variables]
Scale=1

[ummy]
Meter=Image

"@ | Out-File -FilePath "$($ConfigPath)\$($SkinName).ini"

    Write-Host "Created $($SkinName)" -NoNewline
    # Open the created skin in the default config editor 
    Start-Process -FilePath "$($Cache.ConfigEditor)" -ArgumentList "$ConfigPath"

}

function Refresh {
    $Cache = $MetersOnDemand.Cache
    Start-Process -FilePath "$($Cache.ProgramPath)" -ArgumentList "[!ActivateConfig `"$($MetersOnDemand.Installer.SkinName)`"]"
}

function New-Lock {
    param (
        [Parameter(Mandatory)]
        [string]
        $RootConfig
    )

    $Cache = $MetersOnDemand.Cache
    $SkinPath = $Cache.SkinPath
    $RainmeterDirectory = $Cache.RainmeterDirectory

    $plugins = Get-Plugins -RootConfig $RootConfig

    $outputFile = "$($SkinPath)\$($RootConfig)\.lock.inc"

    $output = "[Plugins]"

    foreach ($plugin in $plugins.Keys) {
        $latest = Get-LatestPlugin -Plugin $plugin
        if ($latest) {
            $output += "`n$($plugin)=$($latest.Version)"
        }
    }

    $output | Out-File -FilePath $outputFile

}

function Assert-RootConfig {
    if ($Parameter -and !$Skin) {
        $Skin = $Parameter
    }

    $Cache = $MetersOnDemand.Cache
    $SkinPath = $Cache.SkinPath

    $workingParent = Split-Path -Path $pwd
    if (("$workingParent" -notlike "$($SkinPath)*") -and (!$Skin)) {
        throw "You must be in '$($SkinPath)\<config>' to use package without specifying the -Skin parameter!"
    }

    $workingName = Split-Path -Path $pwd -Leaf
    $RootConfig = $workingName
    if ($Skin) { $RootConfig = $Skin }

    return $RootConfig
}

function Limit-PowerShellVersion {

    $PowerShellVersion = $PSVersionTable.PSVersion
    if ($PowerShellVersion.Major -lt 5) {
        Write-Warning "`nYou are running PowerShell $($PowerShellVersion) which might have issues packaging skins. PowerShell 7 is recommended.`n"
    }

}
