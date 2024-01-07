function Search {
    param (
        [Parameter(Position = 0)]
        [string]
        $Query,
        [Parameter(Position = 1)]
        [string]
        $Property,
        [Parameter()]
        [Switch]
        $Quiet
    )

    $Skins = $MetersOnDemand.Cache.Skins

    if (!$Query) { $Query = ".*" }
    if (!$Property) { $Property = "full_name" }
    if (!$Quiet) { Write-Host "Searching for `"$Query`"" }

    $Results = @()
    foreach ($Entry in ToIteratable -Object $Skins ) {
        $Skin = $Entry.Value
        if ($Skin.$Property -match $Query) { $Results += $Skin }
    }

    if ($Quiet) {
        return $Results
    }
    else {
        if (!$Results) { return Write-Host "No skins found." }
        Write-Host "Found $($Results.length) skins:" -ForegroundColor Green
        Format-SkinList -Skins $Results -Description
    }

}
