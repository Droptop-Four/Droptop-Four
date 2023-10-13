# AutoCompile.ps1 will run automatically when your app rmskin is generated from the Droptop settings menu.
# Use this script to make special changes to the application before it is turned into an installable rmskin.

Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\Icons" -Recurse

