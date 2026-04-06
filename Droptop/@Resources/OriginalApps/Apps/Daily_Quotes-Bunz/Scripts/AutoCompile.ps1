# AutoCompile.ps1 will run automatically when your app rmskin is generated from the Droptop settings menu.
# Use this script to make special changes to the application before it is turned into an installable rmskin.

# Included variables w/ example values
# 
# $appname    = Sample_App-Cariboudjan
# $newappname = Sample App - Cariboudjan
# $appauthor  = Cariboudjan
# $skinspath  = #SKINSPATH#

# Example: Removes all .png files inside of the "Icons" folder of your app from the .rmskin installation file.
# Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\AppTemplate\Skins\Droptop Community Apps\Apps\$appname\Icons\*.png" -Recurse

# Example: Automatically creates a backup of your app in the #SKINSPATH# directory.
# Copy-Item -Path ".\Droptop Community Apps\Apps\$appname" -Destination ".\$appname backup" -Recurse

# Example: Rename an item. Can also be used to change the file extension.
# Rename-Item -Path ".\Droptop Community Apps\Apps\$appname\Images\Image1.png" -NewName ".\Droptop Community Apps\Apps\$appname\Images\Image1.zip" -Force -ErrorAction Stop