$appname=$args[0]
$appauthor=$args[1]
$newappname=$args[2]
$skinspath=$args[3]
$gitinit=$args[4]
$programpath=$args[5]

$exclude = @('*.rmskin','*.md','Variables.inc','*.org')

$ErrorActionPreference= 'silentlycontinue'

cd "$skinspath"
New-Item -ItemType "directory" -Path ".\Droptop Folders\Other files\@Rmskins\Droptop Apps"
Remove-Item -Path ".\Droptop Folders\Other files\@Rmskins\Droptop Apps\$newappname - $appauthor (Droptop App).rmskin" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.rmskin" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.zip" -Recurse

Copy-Item -Path ".\Droptop Community Apps\Apps\$appname" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\" -Recurse -Exclude $exclude

Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\.git" -Recurse -Force
Copy-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\Plugins\32bit\*" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Plugins\32bit\" -Recurse
Copy-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\Plugins\64bit\*" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Plugins\64bit\" -Recurse
Copy-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\Images\RMSKIN.bmp" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\" -Recurse

&".\Droptop Community Apps\Apps\$appname\Scripts\AutoCompile.ps1"

cd "$skinspath"
cd .\Droptop\@Resources\Scripts\AppBuilder
.\MakeRmSkin.ps1 -Skin AppTemplate
cd "$skinspath"

Move-Item -Path '.\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\AppTemplate.rmskin' -Destination ".\Droptop Folders\Other files\@Rmskins\Droptop Apps\$newappname - $appauthor (Droptop App).rmskin"
Copy-Item -Path ".\Droptop Folders\Other files\@Rmskins\Droptop Apps\$newappname - $appauthor (Droptop App).rmskin" -Destination ".\Redistributables\Droptop Community Apps\Apps" -Recurse

Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\*" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Plugins\32bit\*" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Plugins\64bit\*" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.zip" -Recurse

if ($gitinit -eq 1)
{
    git init ".\Droptop Community Apps\Apps\$appname"
	Rename-Item -Path ".\Droptop Community Apps\Apps\$appname\README.md" -NewName "README (Backup).md" -Force -ErrorAction Stop
	Copy-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\README.md" -Destination ".\Droptop Community Apps\Apps\$appname" -Recurse
	(Get-Content ".\Droptop Community Apps\Apps\$appname\README.md") -replace "Your App Name - Author Name","$newappname - $appauthor" | out-file ".\Droptop Community Apps\Apps\$appname\README.md"
	Set-Content -NoNewline -Encoding OEM ".\Droptop Community Apps\Apps\$appname\README.md" -Value (Get-Content -Raw -Encoding 'utf8' ".\Droptop Community Apps\Apps\$appname\README.md")
}

Start-Process -FilePath "$programpath" -ArgumentList "!CommandMeasure", "LoadingTimer", '"Execute 2"'

