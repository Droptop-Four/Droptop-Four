function New-Cache {
    return [PSCustomObject]@{
        Skins      = [pscustomobject]@{ };
        Installed  = [pscustomobject]@{ };
        Updateable = [pscustomobject]@{ };
    }
}

function Get-Cache {
    $Cache = New-Cache
    if (Test-Path -Path $MetersOnDemand.CacheFile) {
        $Cache = Get-Content -Path $MetersOnDemand.CacheFile | ConvertFrom-Json
    }

    $Cache = Get-InstalledSkins -Cache $Cache

    $CurrentDate = Get-Date -Format "MM-dd-yy"
    if ($Cache.LastChecked -ne $CurrentDate) {
        $Cache = Update-SkinList -Cache $Cache
        return $Cache
    }

    Save-Cache -Cache $Cache -Quiet
    return $Cache

}

function Update-SkinList {
    param (
        [Parameter(Mandatory)]
        [PSCustomObject]
        $Cache,
        [Parameter()]
        [switch]
        $SkipInstalled,
        [Parameter()]
        [switch]
        $Force,
        [Parameter()]
        [switch]
        $Quiet,
        [Parameter()]
        [switch]
        $SkipSave
    )

    $response = $false
    try {
        $response = Get-Request $MetersOnDemand.Api.Endpoints.Skins
    }
    catch {
        if (!$Quiet) {
            Write-Exception $_
            Write-Exception "Couldn't reach API, using cache..."
        }
    }
    if (!$response) {
        if (!$SkipInstalled) { 
            $Cache = Get-InstalledSkins -Cache $Cache
            if (!$SkipSave) {
                Save-Cache -Cache $Cache -Quiet
            }
        }
        return $Cache
    }

    $SkinsArray = $response.Content | ConvertFrom-Json
    # PSCustomObject bullshit
    $Skins = [PSCustomObject]@{ }
    $SkinsArray | % {
        $Skins | Add-Member -MemberType NoteProperty -Name "$($_.full_name)" -Value $_
    }

    $Cache | Add-Member -MemberType NoteProperty -Name 'Skins' -Value $Skins -Force
    $Cache | Add-Member -MemberType NoteProperty -Name 'LastChecked' -Value $CurrentDate -Force

    if (-not $Cache.Installed) { $Cache | Add-Member -MemberType NoteProperty -Name 'Installed' -Value ([PSCustomObject] @{ }) -Force }
    if (-not $Cache.Updateable) { $Cache | Add-Member -MemberType NoteProperty -Name 'Updateable' -Value ([PSCustomObject] @{ }) -Force }

    $Cache = Get-InstalledSkins -Cache $Cache
    if (!$SkipSave) {
        Save-Cache -Cache $Cache -Quiet
    }
    if (!$Quiet) {
        return $Cache
    }
}

function Get-InstalledSkins {
    param (
        [Parameter()]
        [pscustomobject]
        $Cache
    )

    if (!$Cache) {
        $Cache = $MetersOnDemand.Cache
    }

    $Skins = $Cache.Skins
    $SkinPath = $Cache.SkinPath
    $Installed = $Cache.Installed
    $Updateable = [PSCustomObject]@{ }

    if (!(Test-Path -Path $SkinPath)) {
        throw "SkinPath ($SkinPath) does not exist"
    }

    $NewInstalled = ([PSCustomObject] @{ })
    $skinFolders = Get-ChildItem -Path "$($SkinPath)" -Directory 
    $IteratableSkins = ToIteratable -Object $Skins
    foreach ($skinFolder in $skinFolders) {
        foreach ($Entry in $IteratableSkins) {
            $Skin = $Entry.Value
            if ($Skin.skin_name -notlike $skinFolder.name) { continue }
            $full_name = $Skin.full_name
            $existing = $Installed.$full_name
            $latest = $Skin.latest_release.tag_name
            if ($existing) {
                $NewInstalled | Add-Member -MemberType NoteProperty -Name "$full_name" -Value $existing
                if ($existing -ne $latest) { 
                    $Updateable | Add-Member -MemberType NoteProperty -Name "$full_name" -Value $latest
                }
            }
            else { 
                $NewInstalled | Add-Member -MemberType NoteProperty -Name "$full_name" -Value $latest
            }
        }
    }

    $Cache | Add-Member -MemberType noteproperty -Name 'Installed' -Value $NewInstalled -Force
    $Cache | Add-Member -MemberType noteproperty -Name 'Updateable' -Value $Updateable -Force

    return $Cache

}

function Save-Cache {
    param (
        [Parameter(ValueFromPipeline, Mandatory, Position = 0)]
        [PSCustomObject]
        $Cache,
        [Parameter()]
        [switch]
        $Quiet
    )
    $MetersOnDemand.Cache = $Cache
    $Cache | ConvertTo-Json -Depth 4 | Out-File -FilePath $MetersOnDemand.CacheFile
    if (!$Quiet) {
        return $Cache
    }
}
