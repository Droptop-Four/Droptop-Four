Add-Type -AssemblyName System.Drawing
$path = "$filePath$fileName$extension"

$fontFiles = Get-ChildItem $path

$fontCollection = new-object System.Drawing.Text.PrivateFontCollection

$fontFiles | ForEach-Object {
    $fontCollection.AddFontFile($_.fullname)
    $fontCollection.Families[-1].Name
    $fontName = $fontCollection.Families[-1].Name
}

Rename-Item -Path "$path" -NewName ${fontName}"$extension" -Force

cd "$skinsPath"

Remove-Item -Path ".\Droptop Folders\Other files\Themes\*.ttf" -Recurse
Remove-Item -Path ".\Droptop Folders\Other files\Themes\*.otf" -Recurse

Copy-Item "$filePath$fontName$extension" -Destination ".\Droptop\@Resources\Fonts" -Recurse
Copy-Item "$filePath$fontName$extension" -Destination ".\Droptop Community Apps\@Resources\Fonts" -Recurse
Copy-Item "$filePath$fontName$extension" -Destination ".\Droptop Folders\Other files\Themes" -Recurse

cd "${skinsPath}Droptop Folders\Other files\Themes"

Remove-Item -Path ".\*.*tf" -Recurse

cd "${skinsPath}Droptop\@Resources\Fonts"

Copy-Item "${fontName}.*" "${skinsPath}Droptop Folders\Other files\Themes"

Start-Process -FilePath "$programPath" -ArgumentList "!WriteKeyValue","Variables","FontName0","$fontName","${skinspath}Droptop\@Resources\Themes\${themeNum}Settings.inc"
Start-Process -FilePath "$programPath" -ArgumentList "!WriteKeyValue","Variables","FontName1","$fontName","${skinspath}Droptop\@Resources\Themes\${themeNum}Settings.inc"
Start-Process -FilePath "$programPath" -ArgumentList "!RefreshGroup","DroptopSuite"