$ErrorActionPreference= 'silentlycontinue'

$exclude = @('*.rmskin','*.md','Variables.inc','*.org')

New-Item -ItemType "directory" -Path "${skinsPath}Droptop Folders\Other files\@Rmskins\Droptop Apps"
Remove-Item -Path "${skinsPath}Droptop Folders\Other files\@Rmskins\Droptop Apps\$newappname - $appauthor (Droptop App).rmskin" -Recurse
Remove-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.rmskin" -Recurse
Remove-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.zip" -Recurse

Copy-Item -Path "${skinsPath}Droptop Community Apps\Apps\$appname" -Destination "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\" -Recurse -Exclude $exclude

Remove-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\.git" -Recurse -Force
Copy-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\Plugins\32bit\*" -Destination "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Plugins\32bit\" -Recurse
Copy-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\Plugins\64bit\*" -Destination "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Plugins\64bit\" -Recurse
Copy-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\Images\RMSKIN.bmp" -Destination "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\" -Recurse

# ${skinsPath}Droptop\@Resources\Scripts\AppBuilder\start-process -FilePath "${skinsPath}Droptop Community Apps\Apps\$appname\Scripts\AutoCompile.ps1"

# & "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\MakeRmSkin.ps1"

$skins = (Get-ChildItem -Directory).Name.ToLower()
#if ($Skin.ToLower() -notin $skins) {
#    Write-Output "$Skin is not a valid template!"
#    return
#}

[System.IO.Directory]::CreateDirectory("${skinsPath}Droptop\@Resources\Scripts\AppBuilder\@Rmskins") | Out-Null
Write-Host ${skinsPath}Droptop\@Resources\Scripts\AppBuilder

Get-ChildItem -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\" -rec -file *.* | Where-Object { $_.LastWriteTime -lt (Get-Date).AddYears(-20) } | ForEach-Object { try { $_.LastWriteTime = '01/01/2020 00:00:00' } catch {} }

Compress-Archive -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\*" -DestinationPath "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\@Rmskins\AppTemplate.zip" -CompressionLevel Optimal -Force -ErrorAction Stop
Rename-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\@Rmskins\AppTemplate.zip" -NewName "AppTemplate.rmskin" -Force -ErrorAction Stop
&"${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AddRmFooter" "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\@Rmskins\AppTemplate.rmskin"


Move-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\@Rmskins\AppTemplate.rmskin" -Destination "${skinsPath}Droptop Folders\Other files\@Rmskins\Droptop Apps\$newappname - $appauthor (Droptop App).rmskin"
# Copy-Item -Path "${skinsPath}Droptop Folders\Other files\@Rmskins\Droptop Apps\$newappname - $appauthor (Droptop App).rmskin" -Destination "${skinsPath}Redistributables\Droptop-Community-Apps\Apps" -Recurse

Remove-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\*" -Recurse
Remove-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Plugins\32bit\*" -Recurse
Remove-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Plugins\64bit\*" -Recurse
Remove-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.zip" -Recurse

if ($gitinit -eq 1)
{
    git init "${skinsPath}Droptop Community Apps\Apps\$appname"
	Rename-Item -Path "${skinsPath}Droptop Community Apps\Apps\$appname\README.md" -NewName "README (Backup).md" -Force -ErrorAction Stop
	Copy-Item -Path "${skinsPath}Droptop\@Resources\Scripts\AppBuilder\README.md" -Destination "${skinsPath}Droptop Community Apps\Apps\$appname" -Recurse
	(Get-Content "${skinsPath}Droptop Community Apps\Apps\$appname\README.md") -replace "Your App Name - Author Name","$newappname - $appauthor" | out-file "${skinsPath}Droptop Community Apps\Apps\$appname\README.md"
	Set-Content -NoNewline -Encoding OEM "${skinsPath}Droptop Community Apps\Apps\$appname\README.md" -Value (Get-Content -Raw -Encoding 'utf8' "${skinsPath}Droptop Community Apps\Apps\$appname\README.md")
}

Start-Process -FilePath "$programpath" -ArgumentList "!CommandMeasure", "LoadingTimer", '"Execute 2"', '"Droptop\Other\WindowMenu"'

Start-Sleep -Seconds 3

Invoke-Item "${skinsPath}Droptop Folders\Other files\@Rmskins\Droptop Apps"
