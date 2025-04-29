
@echo Exiting Droptop...

@echo off
taskkill /f /im "reg.exe" 2>nul
taskkill /f /im "regedit.exe" 2>nul
taskkill /f /im "convert.exe" 2>nul
taskkill /f /im "mogrify.exe" 2>nul
taskkill /f /im "droptop.exe" 2>nul