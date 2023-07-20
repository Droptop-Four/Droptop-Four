$themename=$args[0]
$themeauthor=$args[1]
$fontname=$args[2]
$skinspath=$args[3]
$includemeasures=$args[4]
$programpath=$args[5]

$ErrorActionPreference= 'silentlycontinue'

cd "$skinspath"

New-Item -ItemType "directory" -Path ".\Droptop Folders\Other files\@Rmskins\Droptop Themes"
Remove-Item -Path ".\Droptop Folders\Other files\@Rmskins\Droptop Themes\$themename - $themeauthor (Droptop Theme).rmskin" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.rmskin" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.zip" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Fonts\*" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Community Apps\@Resources\Fonts\*" -Recurse
Copy-Item ".\Droptop\@Resources\Themes\99.inc" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Themes" -Recurse
Copy-Item ".\Droptop\@Resources\Themes\99Settings.inc" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Themes" -Recurse

# Get-ChildItem -Path ".\Droptop Folders\Other files\Themes\*" -Include ('*.ttf', '*.otf') -Exclude ('Community Font - *') -Recurse | Rename-Item -NewName {"Community Font - " + $_.Name}

Copy-Item ".\Droptop Folders\Other files\Themes\*" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes" -Recurse
Copy-Item ".\Droptop Folders\Other files\Themes\*.ttf" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Fonts" -Recurse
Copy-Item ".\Droptop Folders\Other files\Themes\*.otf" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Fonts" -Recurse
Copy-Item ".\Droptop Folders\Other files\Themes\*.ttf" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Community Apps\@Resources\Fonts" -Recurse
Copy-Item ".\Droptop Folders\Other files\Themes\*.otf" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Community Apps\@Resources\Fonts" -Recurse

# Removes wallpaper from rmskin if not needed (Does not remove original file)
# If ($includewallpaper -eq "0")
# {
    # Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes\Wallpaper1.*" -Recurse
# }

# Removes measures from rmskin if not needed (Does not remove original file)
If ($includemeasures -eq "0")
{
    Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes\ThemeMeasures.inc" -Recurse
	New-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes\ThemeMeasures.inc"
}

cd .\Droptop\@Resources\Scripts\AppBuilder
.\MakeRmSkin.ps1 -Skin ThemeTemplate
Remove-Item -Path ".\ThemeTemplate\Skins\Droptop\@Resources\Fonts\*" -Recurse
Remove-Item -Path ".\ThemeTemplate\Skins\Droptop Folders\Other files\Themes\*" -Recurse
cd "$skinspath"
Move-Item -Path '.\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\ThemeTemplate.rmskin' -Destination ".\Droptop Folders\Other files\@Rmskins\Droptop Themes\$themename - $themeauthor (Droptop Theme).rmskin"
cd .\Droptop\@Resources\Scripts\AppBuilder
Remove-Item -Path ".\ThemeTemplate\Skins\Droptop\@Resources\Themes\*" -Recurse
Remove-Item -Path ".\@Rmskins\*.zip" -Recurse

Start-Process -FilePath "$programpath" -ArgumentList "!CommandMeasure", "LoadingTimer", '"Execute 2"'