function Upgrade {
    param (
        [Parameter(Mandatory, Position = 0)]
        [string]
        $FullName,
        [Parameter()]
        [switch]
        $Force
    )

    $Cache = $MetersOnDemand.Cache
    $Skin = Get-SkinObject $FullName
    $installed = $Cache.Installed.($Skin.full_name)

    if (!$installed) {
        throw "$($FullName) is not installed"
    }
    if (!$Force -and !($Cache.Updateable.($Skin.full_name))) {
        throw "$($FullName) $($installed) is the latest version"
    }

    Install -FullName $FullName -Force

}
