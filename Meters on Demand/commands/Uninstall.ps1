function Uninstall {
    param (
        [Parameter(Mandatory, Position = 0)]
        [string]
        $FullName,
        [Parameter()]
        [switch]
        $Force,
        [Parameter()]
        [switch]
        $Quiet
    )

    $Cache = $MetersOnDemand.Cache
    $installed = $Cache.Installed.$FullName
    if (-not $installed) { 
        if ($Force) { return }
        throw "Skin $FullName is not installed"
    }

    $skinPath = $Cache.SkinPath
    $skinName = $Cache.Skins.$FullName.skin_name

    $removedDirectory = RemovedDirectory
    $path = "$($skinPath)\$($skinName)"
    $target = "$($removedDirectory)\$($skinName)"
    if (Test-Path -Path "$($target)") {
        Remove-Item -Path "$($target)" -Recurse -Force
    }
    Move-Item -Path "$($path)" -Destination $removedDirectory

    # Update cache
    $Cache.Installed.psobject.properties.Remove($FullName)
    $Cache.Updateable.psobject.properties.Remove($FullName)
    Save-Cache $Cache -Quiet

    # Report results
    if (!$Quiet) {
        Write-Host "Uninstalled $($FullName)"
        Write-Host "Use 'mond restore $($FullName)' to restore"
    }

}
