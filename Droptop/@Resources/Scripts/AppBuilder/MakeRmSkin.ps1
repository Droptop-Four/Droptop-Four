[CmdletBinding()]
param (
    [Parameter()]
    [string]
    $Skin
)

$skins = (Get-ChildItem -Directory).Name.ToLower()
if ($Skin.ToLower() -notin $skins) {
    Write-Output "$Skin is not a valid template!"
    return
}

$currDir = $PWD
[System.IO.Directory]::CreateDirectory("$currDir\@Rmskins") | Out-Null
Write-Host $currDir

Get-ChildItem -Path "$currDir\$Skin\" -rec -file *.* | Where-Object { $_.LastWriteTime -lt (Get-Date).AddYears(-20) } | ForEach-Object { try { $_.LastWriteTime = '01/01/2020 00:00:00' } catch {} }

Compress-Archive -Path "$currDir\$Skin\*" -DestinationPath "$currDir\@Rmskins\$Skin.zip" -CompressionLevel Optimal -Force -ErrorAction Stop
Rename-Item -Path "$currDir\@Rmskins\$Skin.zip" -NewName "$Skin.rmskin" -Force -ErrorAction Stop
&"$currDir\AddRmFooter" "$currDir\@Rmskins\$Skin.rmskin"