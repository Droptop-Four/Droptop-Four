﻿Add-Type -AssemblyName System.Drawing
$path = "$filePath$fileName$extension"

$fontFiles = Get-ChildItem $path

$fontCollection = new-object System.Drawing.Text.PrivateFontCollection

$fontFiles | ForEach-Object {
    $fontCollection.AddFontFile($_.fullname)
    $fontCollection.Families[-1].Name
    $fontName = $fontCollection.Families[-1].Name
}

Rename-Item -Path "$path" -NewName ${fontName}"$extension" -Force

Remove-Item -Path "${skinsPath}Droptop Folders\Other files\Themes\*.ttf" -Recurse
Remove-Item -Path "${skinsPath}Droptop Folders\Other files\Themes\*.otf" -Recurse

Copy-Item "$filePath$fontName$extension" -Destination "${skinsPath}Droptop\@Resources\Fonts" -Recurse
Copy-Item "$filePath$fontName$extension" -Destination "${skinsPath}Droptop Community Apps\@Resources\Fonts" -Recurse
Copy-Item "$filePath$fontName$extension" -Destination "${skinsPath}Droptop Folders\Other files\Themes" -Recurse

Remove-Item -Path "${skinsPath}Droptop Folders\Other files\Themes\*.*tf" -Recurse

Copy-Item "${skinsPath}Droptop\@Resources\Fonts\${fontName}.*" "${skinsPath}Droptop Folders\Other files\Themes"

Start-Process -FilePath "`"$programPath`"" -ArgumentList "!WriteKeyValue","Variables","FontName0","`"$fontName`"","`"${skinspath}Droptop\@Resources\Themes\${themeNum}Settings.inc`""
Start-Process -FilePath "`"$programPath`"" -ArgumentList "!WriteKeyValue","Variables","FontName1","`"$fontName`"","`"${skinspath}Droptop\@Resources\Themes\${themeNum}Settings.inc`""
Start-Process -FilePath "`"$programPath`"" -ArgumentList "!RefreshGroup","DroptopSuite"