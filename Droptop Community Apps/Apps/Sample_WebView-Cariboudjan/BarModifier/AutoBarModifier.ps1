# This script automatically duplicates BarModifier1.inc and replaces all instances of "CustomApp1" and "AppButton1" with their respective slot numbers (Eg. "CustomApp2", "CustomApp3")

# May require "Set-ExecutionPolicy -ExecutionPolicy RemoteSigned" to be enabled (Use command in PowerShell as Administrator)

$ErrorActionPreference= 'silentlycontinue'

Copy-Item -Path ".\BarModifier1.inc" -Destination ".\BarModifier2.inc" -Recurse
Copy-Item -Path ".\BarModifier1.inc" -Destination ".\BarModifier3.inc" -Recurse
Copy-Item -Path ".\BarModifier1.inc" -Destination ".\BarModifier4.inc" -Recurse
Copy-Item -Path ".\BarModifier1.inc" -Destination ".\BarModifier5.inc" -Recurse

$path = ".\BarModifier2.inc"
(Get-Content $path) -replace "CustomApp1","CustomApp2" | out-file $path

$path = ".\BarModifier3.inc"
(Get-Content $path) -replace "CustomApp1","CustomApp3" | out-file $path 

$path = ".\BarModifier4.inc"
(Get-Content $path) -replace "CustomApp1","CustomApp4" | out-file $path 

$path = ".\BarModifier5.inc"
(Get-Content $path) -replace "CustomApp1","CustomApp5" | out-file $path 



$path = ".\BarModifier2.inc"
(Get-Content $path) -replace "AppButton1","AppButton2" | out-file $path

$path = ".\BarModifier3.inc"
(Get-Content $path) -replace "AppButton1","AppButton3" | out-file $path 

$path = ".\BarModifier4.inc"
(Get-Content $path) -replace "AppButton1","AppButton4" | out-file $path 

$path = ".\BarModifier5.inc"
(Get-Content $path) -replace "AppButton1","AppButton5" | out-file $path 