$ErrorActionPreference= 'silentlycontinue'

New-Item -ItemType "directory" -Path "$skinspath\Droptop Folders\Other files\@Rmskins\Droptop Themes"
Remove-Item -Path "$skinspath\Droptop Folders\Other files\@Rmskins\Droptop Themes\$themename - $themeauthor (Droptop Theme).rmskin" -Recurse
Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.rmskin" -Recurse
Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.zip" -Recurse
Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Fonts\*" -Recurse
Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Community Apps\@Resources\Fonts\*" -Recurse
Copy-Item "$skinspath\Droptop\@Resources\Themes\99.inc" -Destination "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Themes" -Recurse
Copy-Item "$skinspath\Droptop\@Resources\Themes\99Settings.inc" -Destination "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Themes" -Recurse

# Get-ChildItem -Path "$skinspath\Droptop Folders\Other files\Themes\*" -Include ('*.ttf', '*.otf') -Exclude ('Community Font - *') -Recurse | Rename-Item -NewName {"Community Font - " + $_.Name}

Copy-Item "$skinspath\Droptop Folders\Other files\Themes\*" -Destination "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes" -Recurse
Copy-Item "$skinspath\Droptop Folders\Other files\Themes\*.ttf" -Destination "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Fonts" -Recurse
Copy-Item "$skinspath\Droptop Folders\Other files\Themes\*.otf" -Destination "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Fonts" -Recurse
Copy-Item "$skinspath\Droptop Folders\Other files\Themes\*.ttf" -Destination "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Community Apps\@Resources\Fonts" -Recurse
Copy-Item "$skinspath\Droptop Folders\Other files\Themes\*.otf" -Destination "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Community Apps\@Resources\Fonts" -Recurse

# Removes wallpaper from rmskin if not needed (Does not remove original file)
# If ($includewallpaper -eq "0")
# {
    # Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes\Wallpaper1.*" -Recurse
# }

# Removes measures from rmskin if not needed (Does not remove original file)
If ($includemeasures -eq "0")
{
	Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes\ThemeMeasures.inc" -Recurse
	New-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes\ThemeMeasures.inc"
}

[System.IO.Directory]::CreateDirectory("$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins") | Out-Null
Write-Host $skinspath\Droptop\@Resources\Scripts\AppBuilder

Get-ChildItem -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\" -rec -file *.* | Where-Object { $_.LastWriteTime -lt (Get-Date).AddYears(-20) } | ForEach-Object { try { $_.LastWriteTime = '01/01/2020 00:00:00' } catch {} }

Compress-Archive -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\*" -DestinationPath "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\ThemeTemplate.zip" -CompressionLevel Optimal -Force -ErrorAction Stop
Rename-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\ThemeTemplate.zip" -NewName "ThemeTemplate.rmskin" -Force -ErrorAction Stop
&"$skinspath\Droptop\@Resources\Scripts\AppBuilder\AddRmFooter" "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\ThemeTemplate.rmskin"



Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Fonts\*" -Recurse
Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop Folders\Other files\Themes\*" -Recurse

# Remove-Item -Path "$skinspath\Redistributables\Droptop-Community-Themes\$themename - $themeauthor (Droptop Theme).rmskin" -Recurse
# Copy-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\ThemeTemplate.rmskin" -Destination "$skinspath\Redistributables\Droptop-Community-Themes" -Recurse
# Rename-Item -Path "$skinspath\Redistributables\Droptop-Community-Themes\ThemeTemplate.rmskin" -NewName "$themename - $themeauthor (Droptop Theme).rmskin" -Force -ErrorAction Stop
Move-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\ThemeTemplate.rmskin" -Destination "$skinspath\Droptop Folders\Other files\@Rmskins\Droptop Themes\$themename - $themeauthor (Droptop Theme).rmskin"

Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\ThemeTemplate\Skins\Droptop\@Resources\Themes\*" -Recurse
Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.zip" -Recurse

Start-Process -FilePath "$programpath" -ArgumentList "!CommandMeasure", "LoadingTimer", '"Execute 2"'

Invoke-Item "$skinspath\Droptop Folders\Other files\@Rmskins\Droptop Themes"