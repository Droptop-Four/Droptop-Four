[Variables]
LastFocusedApp="[#***LastFocusedApp***]"

[SkinVersionMini]
Measure=Calc
Formula=((#SkinVersionMini#+1)>999?0:(#SkinVersionMini#+1))
Substitute=

[SkinVersionTime]
Measure=Time
Format=%y.%m%d
DynamicVariables=1

[CheckConnection]
Measure=Plugin
Plugin=SysInfo
SysInfoType=INTERNET_CONNECTIVITY
SysInfoData=1
UpdateDivider=1
IfEqualValue=-1
IfEqualAction=[!SetOption 8 PostFix "*"][!SetOption 8 LeftMouseDownAction """#CloseSettingsMenu#[!DeactivateConfigGroup Folders][!CommandMeasure RunCommand.Attrib "Run"]["Wscript.exe" "#SKINSPATH#Droptop\@Resources\Scripts\IconsColor1.vbs" "#SKINSPATH#"]"""][!UpdateMeter 8][!Redraw]
IfAboveValue=-1
IfAboveAction=[!DisableMeasure #CURRENTSECTION#]

[CheckUsernames]
Measure=String
String=%USERNAME%
IfMatch=Carib|thomas.whittaker|Mike.Boynton|mkboy|alebu|KazukiGames82
IfMatchAction=[!SetVariable NumberOfItems 10][!ShowMeterGroup 10][!UpdateMeter *][!Redraw]

[PSRM.ReplaceInFile]
Measure=Plugin
Plugin=PowershellRM
Line=$replace1 = 'C:\\Users\\.*?\\'; $replace2 = '%USERPROFILE%\'; $path = "$env:USERPROFILE\Documents\Rainmeter\Skins\Droptop\@Resources\Scripts\Other\DroptopWorkspace"; $encoding = 'utf8'
Line2=function Run() { iwr -useb "#GitPS1Loc#ReplaceInFile.ps1" | iex }
OnChangeAction=
UpdateDivider=-1

[PSRM.TranslationEncoding]
Measure=Plugin
Plugin=PowershellRM
Line=$parentFolderPath = "#SKINSPATH#Droptop\@Resources\GlobalVar"
Line2=function Run() { iwr -useb "#GitPS1Loc#TranslationEncoding.ps1" | iex }
OnChangeAction=
UpdateDivider=-1

[RunCommand.Attrib]
Measure=Plugin
Plugin=RunCommand
Parameter=attrib -h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib -s /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini"
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1

[10]
LeftMouseDoubleClickAction=#CloseSettingsMenu#[!CommandMeasure PSRM.TranslationEncoding "Run"][!SetClip "# :Four:  **#SkinVersion#.[SkinVersionMini]** (Beta) Change log:#CRLF##CRLF### :New: New features#CRLF#- No new features#CRLF### :Caution: Modifications#CRLF#- No modifications#CRLF### :Mosquito: Bug fixes#CRLF#- No bug fixes#CRLF##CRLF## :arrow_down:  :arrow_down:  :arrow_down:  :arrow_down:  :arrow_down:  :arrow_down:  :arrow_down:#CRLF##  :blobdance: **[Download v#SkinVersion#.[SkinVersionMini] now](https://github.com/Droptop-Four/Beta-Update/releases/download/v#SkinVersion#.[SkinVersionMini]/Droptop_Beta_Update.rmskin)**#CRLF## :arrow_up:  :arrow_up:  :arrow_up:  :arrow_up:  :arrow_up:  :arrow_up:  :arrow_up:#CRLF##CRLF### :newspaper:  Need an older version? [View archive](https://github.com/Droptop-Four/Beta-Update/tags).#CRLF##CRLF#### Please let us know of any issues you may encounter by posting them to the [#Preview-Chat](https://discord.com/channels/800124057923485728/1073307684234874900) channel.#CRLF##CRLF### :face_with_spiral_eyes:  *Beta causing trouble?* #CRLF#Your version of Droptop can be downgraded to the **[most-recent stable release](https://github.com/Droptop-Four/Droptop-Four/releases/latest/download/Droptop_Update.rmskin)** release at any time."][!SetVariable MyAppSubstitutions """"(?is)^mspaint$":"Paint","(?is)^SearchUI$":"[#*LastFocusedApp*]","(?is)^msedge$":"Microsoft Edge","(?is)^ShellExperienceHost$":"[#*LastFocusedApp*]","(?is)^LogiOverlay$":"[#*LastFocusedApp*]","(?is)^Un$$":"[#*LastFocusedApp*]","(?is)^StartMenuExperienceHost$":"[#*LastFocusedApp*]","(?is)^msteams$":"[#*LastFocusedApp*]","(?is)^PMA$":"[#*LastFocusedApp*]","(?is)^LockApp$":"[#*LastFocusedApp*]","(?is)^MusNotificationUx$":"[#*LastFocusedApp*]","(?is)^ListWindows$":"[#*LastFocusedApp*]","(?is)^ScreenClippingHost$":"[#*LastFocusedApp*]","(?is)^steamwebhelper$":"Steam","(?is)^AutoHotkey$":"[#*LastFocusedApp*]","(?is)^SearchApp$":"[#*LastFocusedApp*]","(?is)^SearchUI$":"[#*LastFocusedApp*]","(?is)^SearchHost$":"[#*LastFocusedApp*]","(?is)^GoogleDriveSync$":"[#*LastFocusedApp*]","(?is)^Nexus$":"[#*LastFocusedApp*]","(?is)^PowerLauncher$":"[#*LastFocusedApp*]","(?is)^WINWORD$":"Word","(?is)^EXCEL$":"Excel","(?is)^POWERPNT$":"PowerPoint","(?is)^OUTLOOK$":"Outlook","(?is)^olk$":"Outlook","(?is)^ONENOTE$":"OneNote","(?is)^MSACCESS$":"Access","(?is)^Widgets$":"[#*LastFocusedApp*]","(?is)^Notepad$":"Notepad","(?is)^soffice$":"OpenOffice","(?is)^iTunes$":"[\x200B]iTunes","(?is)^Gimp.*$":"GIMP","(?is)^devenv$":"Visual Studio","(?is)^WindowsTerminal$":"Terminal","(?is)^Ui32$":"Wallpaper Engine","(?is)^Synology Surveillance Station Client$":"Surveillance Station","(?is)^PowerToys\.Settings$":"PowerToys","(?is)^PowerToys\.ColorPickerUI$":"PowerToys Color Picker","(?is)^PowerToys\.FancyZonesEditor$":"PowerToys FancyZones","(?is)^PowerToys\.Peek\.UI$":"PowerToys Peek","(?is)^PowerToys\.PowerRename$":"PowerToys PowerRename","(?is)^PowerToys\.ImageResizer$":"PowerToys ImageResizer","(?is)^PowerToys\.KeyboardManagerEditor$":"PowerToys Keyboard Manager","(?is)^PowerToys\.PowerLauncher$":"PowerToys PowerLauncher","(?is)^PowerToys\.RegistryPreview$":"PowerToys RegistryPreview","(?is)^PowerToys\.MeasureToolUI$":"PowerToys MeasureTool","(?is)^PowerToys\.ShortcutGuide$":"PowerToys ShortcutGuide","(?is)^PowerToys\.PowerOCR$":"PowerToys Text Extractor","(?is)^u$":"Ultrasurf VPN""""][!WriteKeyValue Variables LanguageSubstitutionA "#LanguageSubstitutionA#" "#SKINSPATH#Droptop\Other\Startup\Language.inc"][!WriteKeyValue Variables LanguageSubstitutionB "#LanguageSubstitutionB#" "#SKINSPATH#Droptop\Other\Startup\Language.inc"][!WriteKeyValue Variables CombinedAppSubstitutions """"#DefaultAppSubstitutions#",[#MyAppSubstitutions],"^(.{18})(.{19,})":"\1"""" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables MyAppSubstitutions """[#MyAppSubstitutions]""" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables FolderLoc5 "[\x0025]USERPROFILE[\x0025]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables DownloadsLoc "[\x0025]USERPROFILE[\x0025]\Downloads" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables USER "[\x0025]USERNAME[\x0025]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables UserTimeFormat "[\x0025]a, [\x0025]#d [\x0025]b [\x0025]Y [\x0025]H:[\x0025]M" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SkinVersionMini "[SkinVersionMini]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables SkinNewVersion "#SkinVersion#" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables SkinVersionTime "[SkinVersionTime]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables SupporterVersion "#SkinVersion#" "#SKINSPATH#Droptop\Other\Startup\SupporterInstalled.inc"][!WriteKeyValue Variables SkinVersion "#SkinVersion#" "#SKINSPATH#Droptop\Other\Startup\UpdateInstalled.inc"][!WriteKeyValue Variables SkinVersionMini "[SkinVersionMini]" "#SKINSPATH#Droptop\Other\Startup\UpdateInstalled.inc"][!WriteKeyValue Variables SkinVersionTime "[SkinVersionTime]" "#SKINSPATH#Droptop\Other\Startup\UpdateInstalled.inc"][!WriteKeyValue Variables PreviousSkinVersionTime "[SkinVersionTime]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue rmskin Version "#SkinVersion#.[SkinVersionMini]" "#SKINSPATH#Redistributables\Basic-Version\RMSKIN.ini"][!WriteKeyValue rmskin Version "#SkinVersion#.[SkinVersionMini]" "#SKINSPATH#Redistributables\Supporter-Version\RMSKIN.ini"][!WriteKeyValue rmskin Version "#SkinVersion#.[SkinVersionMini]" "#SKINSPATH#Redistributables\Update\RMSKIN.ini"][!WriteKeyValue rmskin Version "#SkinVersion#.[SkinVersionMini]" "#SKINSPATH#Redistributables\Beta-Update\RMSKIN.ini"]["#@#Scripts\Other\CompileDroptop.bat" #SkinVersion#.#SkinVersionMini# #SkinVersion#.[SkinVersionMini] [&SkinVersionTime] "#PROGRAMPATH#Rainmeter.exe" "#SKINSPATH#]