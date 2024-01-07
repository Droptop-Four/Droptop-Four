function Install {
    param (
        [Parameter(Mandatory, Position = 0)]
        [string]
        $FullName,
        [Parameter()]
        [switch]
        $Force,
        [Parameter()]
        [Switch]
        $FirstMatch
    )

    $Cache = $MetersOnDemand.Cache

    try {
        $Skin = Get-SkinObject -FullName $FullName
    }
    catch {
        if (!$FirstMatch) { throw $_ }
    }

    if (!$Skin -and $FirstMatch) {
        $Matched = Search -Query $FullName -Quiet
        if ($Matched.Length -gt 1) { throw "Too many results, use a more specific query" }
        if ($Matched.Length -eq 0) { throw "No results" }
        $FullName = $Matched[0].full_name
    }

    $installedVersion = $Cache.Installed.$FullName
    if ($installedVersion -and (-not $Force)) {
        return Write-Host "$($FullName) is already installed. Use -Force to reinstall." -ForegroundColor Yellow
    }

    $Skin = Get-SkinObject -FullName $FullName
    $latest = $Skin.latest_release.tag_name

    $Installed = $Cache.Installed
    if ($installedVersion -ne $latest) {
        $Installed | Add-Member -MemberType NoteProperty -Name "$FullName" -Value $latest -Force
        $Cache | Add-Member -MemberType NoteProperty -Name "Installed" -Value $Installed -Force
        $Cache.Updateable.psobject.properties.Remove($FullName)
        Save-Cache $Cache -Quiet
    }

    Download -FullName $FullName
    Start-Process -FilePath $MetersOnDemand.SkinFile

}
