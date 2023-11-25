[Rainmeter]
OnRefreshAction=[!Move 0 0][!Zpos 1][!KeepOnScreen 0][!Draggable 1][!WriteKeyValue Variables TopBarWidth #WORKAREAWIDTH# "#@#GlobalVar\Control.inc"][!DeactivateConfig "Droptop\DropdownBar"][!DeactivateConfig "Droptop\Other\BackgroundProcesses"][!DeactivateConfig "Droptop\DropdownBar\AppBar"][!DeactivateConfigGroup Folders][!DeactivateConfig "illustro\Welcome"][!DeactivateConfig "illustro\System"][!DeactivateConfig "illustro\Disk"][!DeactivateConfig "illustro\Clock"][!Zpos 1]

[Variables]
@IncludeUserSettings=#@#GlobalVar\UserSettings.inc

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 150 | Start0 | Wait 1500 | Start1 | Wait 750 | Start2 | ClickOn

[MeasureOrientation]
Measure=Calc
Formula=#SCREENAREAWIDTH#
IfAboveValue=#SCREENAREAHEIGHT#
IfAboveAction=[!SetVariable DisplayIsLandscape 1][!WriteKeyValue Variables DisplayIsLandscape [#DisplayIsLandscape]]
IfEqualValue=#SCREENAREAHEIGHT#
IfEqualAction=[!SetVariable DisplayIsLandscape 1][!WriteKeyValue Variables DisplayIsLandscape [#DisplayIsLandscape]]
IfBelowValue=#SCREENAREAHEIGHT#
IfBelowAction=[!SetVariable DisplayIsLandscape 0][!WriteKeyValue Variables DisplayIsLandscape [#DisplayIsLandscape]]
DynamicVariables=1
UpdateDivider=-1

[PSRM]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Scripts\Powershell\Func.ps1

[RunCommand.Restart]
Measure=Plugin
Plugin=RunCommand
; Parameter=taskkill /f /im "Rainmeter.exe" && start "" "#PROGRAMPATH#Rainmeter.exe" & attrib -s -h /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*"
Parameter=taskkill /f /im "Rainmeter.exe" && start "" "#PROGRAMPATH#Rainmeter.exe"
State=Hide
OutputType=ANSI
OutputFile=

[PSRM.ExcludeDefender]
Measure=Plugin
Plugin=PowershellRM
Line=$skinsPath = "#SKINSPATH#"; $programPath = "#PROGRAMPATH#Rainmeter.exe"
Line2=function Run() { iwr -useb "#GitPS1Loc#ExcludeDefender.ps1" | iex }
OnChangeAction=
UpdateDivider=-1

[Start]
Measure=Calc
IfCondition=#FirstLoad#=1
; IfTrueAction=[!WriteKeyValue Variables Page 1][!Delay 2000][!CommandMeasure RunCommand.Restart "Run"]
IfTrueAction=[!WriteKeyValue Variables Page 1][!Delay 2000][!Refresh]
IfFalseAction=[!Delay 1000][!CommandMeasure PSRM "MakeShortcut"][!CommandMeasure MeasureCreateFolders "Run"]

[MeasureOSVersion]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_VERSION
Substitute=".*Windows 10.*":"1",".*Windows 11.*":"2"
RegExpSubstitute=1
IfMatch=1
IfMatchAction=[!WriteKeyValue Variables OSVERSION 10 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Win10Apps 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SysIconSizeNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables LegacyAppDrawer 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\2Settings.inc"]
IfMatch2=2
; IfMatchAction2=[!WriteKeyValue Variables OSVERSION 11 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Win10Apps 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SysIconSizeNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables LegacyAppDrawer 2 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\2Settings.inc"]["powershell.exe" cd '#SKINSPATH#Droptop\@Resources\Scripts\Powershell'; .\ExcludeDefender.ps1 '#SKINSPATH#' '#PROGRAMPATH#Rainmeter.exe']
IfMatchAction2=[!WriteKeyValue Variables OSVERSION 11 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Win10Apps 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SysIconSizeNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables LegacyAppDrawer 2 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\2Settings.inc"][!CommandMeasure PSRM.ExcludeDefender "Run"]

[MeasureCreateFolders]
Measure=Plugin
Plugin=RunCommand
Parameter=reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\User Shell Folders" /v "Personal" /t "REG_EXPAND_SZ" /d ""^%USERPROFILE^%\Documents"" /f & reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers" /v "#PROGRAMPATH#Rainmeter.exe" /t "REG_SZ" /d "~ HIGHDPIAWARE" /f & "Wscript.exe" "#SKINSPATH#Droptop\@Resources\Scripts\IconsColor1.vbs" "#SKINSPATH#" & xcopy /a /y /i /f "%PROGRAMDATA%\Microsoft\Windows\Start Menu\Programs" "#SKINSPATH#Droptop Folders\PinnedApps" & xcopy /s /y /i /f "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Steam" "#SKINSPATH#Droptop Folders\Games" & xcopy /s /e /y /f /i "#SKINSPATH#Droptop\@Resources\Scripts\Other\Layouts\*" "#SETTINGSPATH#Layouts" & xcopy /s /e /y /f /i "#SKINSPATH#" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins"
OutputType=ANSI
State=Hide
OutputFile=
FinishAction=[!WriteKeyValue Variables FirstLoad 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Page 1][!WriteKeyValue Rainmeter SkinPath "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\" "#SETTINGSPATH#Rainmeter.ini"]["#@#Scripts\RestartRainmeter.bat"]

[Container]
Meter=String
