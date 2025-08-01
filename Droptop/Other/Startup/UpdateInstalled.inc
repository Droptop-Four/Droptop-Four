[Rainmeter]
OnCloseAction=[!ActivateConfig "Droptop\DropdownBar"][!Zpos 1][!KeepOnScreen 0][!Draggable 1]

[Variables]

ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!DeactivateConfig]

@IncludeControl=#@#GlobalVar\Control.inc
@IncludeSupporter=#@#GlobalVar\Supporter.inc
@IncludeUserSettings=#@#GlobalVar\UserSettings.inc

LastFocusedApp="[#***LastFocusedApp***]"

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[SkinVersionTime]
Measure=Time
Format=%y.%m%d
DynamicVariables=1

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Update | Update2 | Wait 2000 | Show | ExportVars | Start0 | Wait 1500 | Start1 | Wait 750 | Start2 | ClickOn
ActionList2=Start3 | Rewind2 | Rewind1 | Wait 1000 | ExitUpdate
Update=[!Hide][!CommandMeasure RunCommand.Update "Run"][!WriteKeyValue Variables PreviousSkinVersionTime "[SkinVersionTime]" "#@#GlobalVar\UserSettings.inc"]
Update2=
Show=[!ShowFade]
ExitUpdate=[!HideFade][!Delay 500][!Hide][!CommandMeasure PSRM.ExcludeDefender "Run"][!Show "Droptop\DropdownBar"][!ActivateConfig "Droptop\DropdownBar"][!WriteKeyValue Variables CombinedAppSubstitutions """"#DefaultAppSubstitutions#","#MyAppSubstitutions#","^(.{18})(.{19,})":"\1"""" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables DroptopSize "[#DroptopSize[#*DroptopSizeNum*]]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID1# 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID2# 2 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID3# 3 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID4# 4 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID5# 5 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID6# 6 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID7# 7 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID8# 8 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID9# 9 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables #CustomAppID10# 10 "#@#GlobalVar\UserSettings.inc"][!DeactivateConfig][!RefreshGroup DroptopSuite]

[Func]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Scripts\Powershell\Func.ps1

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=7
Fetch1=UpdateTitleA|Des
Fetch2=UpdateTextA|Des2
Fetch3=UpdateTitleB|Des3
Fetch4=UpdateTextB|Des4
Fetch5=UpdateButtonTextA|ButtonText
Fetch6=SayContinue|Button2Text
Fetch7=SayPowershell|Button2Note

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
TweenGroup=Tweenable
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 1500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 750
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 750
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 750
Optional0=Easing InOutExpo
Optional1=Easing OutExpo
Optional2=Easing OutExpo
Optional3=Easing OutExpo
UpdateDivider=1

[RunCommand.Update]
Measure=Plugin
Plugin=RunCommand
Parameter=taskkill /f /im "Droptop.exe" & xcopy /y /c /h "#SKINSPATH#Droptop\@Resources\OriginalFolders\Other files\DroptopData.ini" "#SKINSPATH#Droptop Folders\Other files" & xcopy /y /c /h "#SKINSPATH#Droptop\@Resources\OriginalFolders\Other files\Droptop.ahk" "#SKINSPATH#Droptop Folders\Other files" & xcopy /y /c /h "#SKINSPATH#Droptop\@Resources\OriginalFolders\Other files\Droptop.exe" "#SKINSPATH#Droptop Folders\Other files" & xcopy /y /c /h "#SKINSPATH#Droptop Folders\Other files\Themes\*.ttf" "#SKINSPATH#Droptop\@Resources\Fonts" & xcopy /y /c /h "#SKINSPATH#Droptop Folders\Other files\Themes\*.otf" "#SKINSPATH#Droptop\@Resources\Fonts" & xcopy /y /c /h "#SKINSPATH#Droptop\@Resources\Fonts" "#SKINSPATH#Droptop Community Apps\@Resources\Fonts" & xcopy /y /c /h "#SKINSPATH#Droptop Community Apps\@Resources\Fonts" "#SKINSPATH#Droptop\@Resources\Fonts" & xcopy /y /c /h "#SKINSPATH#Droptop Community Apps\@Resources\Fonts" "#SKINSPATH#Droptop\@Resources\Fonts" & attrib -s -h /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*" & xcopy /y /c /h "#SKINSPATH#Droptop\@Resources\Scripts\AppBuilder\Sample Apps\Sample_App-Cariboudjan" "#SKINSPATH#Droptop Community Apps\Apps" & xcopy /y /c /h "#SKINSPATH#Droptop\@Resources\Scripts\AppBuilder\Sample Apps\Sample_WebView-Cariboudjan" "#SKINSPATH#Droptop Community Apps\Apps"
State=Hide
OutputType=ANSI
OutputFile=

[RunCommand.WinButton]
Measure=Plugin
Plugin=RunCommand
Parameter=xcopy /y /c /h /i "#SKINSPATH#Droptop\@Resources\OriginalFolders\Other files\WinButton\*.png" "#SKINSPATH#Droptop Folders\Other files\WinButton"
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
Disabled=1

[MeasureOSVersion]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_VERSION
Substitute=".*Windows 10.*":"1",".*Windows 11.*":"2"
RegExpSubstitute=1
IfMatch=1
IfMatchAction=[!WriteKeyValue Variables OSVERSION 10 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Win10Apps 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SysIconSizeNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables LegacyAppDrawer 1 "#@#GlobalVar\UserSettings.inc"]
IfMatch2=2
IfMatchAction2=[!WriteKeyValue Variables OSVERSION 11 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Win10Apps 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SysIconSizeNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables LegacyAppDrawer 2 "#@#GlobalVar\UserSettings.inc"]

[VersionChangeMods]
Measure=Calc
IfCondition=#PreviousSkinVersionTime# < 23.0801
IfTrueAction=[!WriteKeyValue Variables DPIOverride 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables DPIRescaleOFF 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize "Medium" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!SetVariable TopIconSize Medium "Droptop\DropdownBar"][!SetVariable TopIconWH 32 "Droptop\DropdownBar"][!WriteKeyValue Variables BarXposOffset "[#BarXposOffset[#*BarXposOffsetNum*]]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopHeight "(([#TopHeight[#*ThemeNum*]]*[#*DroptopSize*])-(([#TopHeight[#*ThemeNum*]]*[#*DroptopSize*])%1))" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables PlayerNum 6 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables PlayerTypeNum 1 "#@#GlobalVar\UserSettings.inc"]
IfCondition2=#PreviousSkinVersionTime# < 23.0617
IfTrueAction2=[!CommandMeasure RunCommand.WinButton "Run"]
IfCondition3=#PreviousSkinVersionTime# < 23.1111
IfTrueAction3=["powershell.exe" cd '#SKINSPATH#'; New-Item -ItemType "directory" -Path '.\Droptop Folders\Other files\PaperclipShortcuts']
IfCondition4=24.0101
IfTrueAction4=[!WriteKeyValue Rainmeter SkinPath "%USERPROFILE%\Documents\Rainmeter\Skins\" "#@#Scripts\Other\Layouts\Droptop\Rainmeter.ini"][!WriteKeyValue Variables SideAppSlotName1 "#*SideAppName1*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName2 "#*SideAppName2*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName3 "#*SideAppName21*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName4 "#*SideAppName22*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName5 "#*SideAppName5*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName6 "#*SideAppName6*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName7 "#*SideAppName7*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName8 "#*SideAppName8*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName9 "#*SideAppName14*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName10 "#*SideAppName15*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName11 "#*SideAppName11*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName12 "#*SideAppName12*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName13 "#*SideAppName13*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName14 "#*SideAppName9*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName15 "#*SideAppName10*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName16 "#*SideAppName16*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName17 "#*SideAppName17*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName18 "#*SideAppName18*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName19 "#*SideAppName19*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName20 "#*SideAppName20*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName21 "#*SideAppName3*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlotName22 "#*SideAppName4*#" "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot1 1 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot2 2 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot3 21 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot4 22 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot5 5 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot6 6 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot7 7 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot8 8 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot9 14 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot10 15 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot11 11 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot12 12 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot13 13 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot14 9 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot15 10 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot16 16 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot17 17 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot18 18 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot19 19 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot20 20 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot21 3 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppSlot22 4 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosNewDesktop 1 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosTime 2 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosAlarm 21 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosVolume 22 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosMail 5 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosWeather 6 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosBattery 7 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosWifi 8 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosDownloads 14 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosRecent 15 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCopy 11 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosAppDrawer 12 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp1 13 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp2 9 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp3 10 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp4 16 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp5 17 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp6 18 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp7 19 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp8 20 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp9 3 "#@#GlobalVar\TopBarPos.inc"][!WriteKeyValue Variables SideAppPosCustomApp10 4 "#@#GlobalVar\TopBarPos.inc"]
IfCondition5=#PreviousSkinVersionTime# < 24.0901
IfTrueAction5=[!WriteKeyValue Variables TopHeight """(([#TopHeight[#*ThemeNum*]]*[#*DroptopSize*])-(([#TopHeight[#*ThemeNum*]]*[#*DroptopSize*])%1))""" "#@#GlobalVar\UserSettings.inc"]
IfCondition6=#PreviousSkinVersionTime# < 24.1224
IfTrueAction6=[!WriteKeyValue Variables MicaAvailable 0 "#@#Themes\99.inc"][!WriteKeyValue Variables UseMicaBlur 0 "#@#Themes\99Settings.inc"]
IfCondition7=#PreviousSkinVersionTime# < 25.0228
IfTrueAction7=[!WriteKeyValue Variables HotkeyModeZ (#AlwaysShowSkin#=1?0:(#AutohideTopBar#=1?1:-2)) "#SKINSPATH#Droptop Folders\Other files\DroptopData.ini"]
IfCondition8=#PreviousSkinVersionTime# < 25.0716
IfTrueAction8=[xcopy /y /c /h "#@#Scripts\Other\Temp\25.0716\10Settings.inc" "#SKINSPATH#Droptop\@Resources\Themes"]

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Container]
Meter=String

[Shape]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)*#TweenNode1#)
Y=(((#SCREENAREAHEIGHT#/2-#Sec.H#/2)*#TweenNode1#)+(20*#Scale#))
Shape=Rectangle 0,0,(#SCREENAREAWIDTH#*(1-#TweenNode1#)+#Sec.W#*#TweenNode1#),(28+(#Sec.H#-(395*#Scale#)-28)*#TweenNode1#),(7*#Scale#) | StrokeWidth 0 | Stroke Color 34,34,34 | Fill Color 31,31,31
Group=Tweenable
DynamicVariables=1

[Slider:C]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)-50*#Scale#*(1-#TweenNode2#))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,#Sec.W#,(#Sec.H#-(355*#Scale#)),(10*#Scale#) | StrokeWidth 0 | Fill Color 255,255,255,(#TweenNode2#*255)
Group=Tweenable
DynamicVariables=1

[Title2]
Meter=String
Text=droptop four
X=(#Sec.P#+(13*#Scale#))
Y=(#Sec.p#+(20*#Scale#))
FontSize=(22*#Scale#)
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S
Container=Slider:C

[Des]
Meter=String
Text=Droptop has been updated to version #SkinVersion#.#SkinVersionMini#
X=r
Y=(#Sec.P#+(83*#Scale#))
H=(43*#Scale#)
FontSize=(22*#Scale#)
InlineSetting=Shadow | 0 | 1 | 1 | 0,0,0,150
MeterStyle=String:S | Header:S
Container=Slider:C

[Des2]
Meter=String
Text=See the 📣╏announcements channel on Discord to read change notes.
X=r
Y=R
W=(700*#Scale#)
MeterStyle=String:S | Text:S
Container=Slider:C
InlinePattern=📣╏announcements
InlinePattern2=📣╏announcements
InlineSetting=Color | 56,250,138
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting2 "Underline"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting2 ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["https://discord.com/channels/800124057923485728/801785532035760138"][!Zpos 1][!KeepOnScreen 0][!Draggable 1][!ShowMeter Title2][!HideMeter Title][!CommandMeasure LoadActions "Execute 2"]

[Des3]
Meter=String
FontSize=(26*#Scale#)
Text=Have you paid for the Supporter Version?
X=r
Y=(80*#Scale#)R
H=(70*#Scale#)
InlineSetting=Shadow | 0 | 1 | 1 | 0,0,0,150
MeterStyle=String:S | Header:S
Container=Slider:C
Group=BottomText
Hidden=1

[Des4]
Meter=String
FontSize=(16*#Scale#)
Text=Help keep Droptop up-to-date by paying $X to the Droptop development team.
Postfix=" ❤"
X=r
Y=(-24*#Scale#)R
H=(50*#Scale#)
FontColor=56,250,138
InlineSetting=Shadow | 0 | 1 | 1 | 0,0,0,150
MeterStyle=String:S | Header:S
Container=Slider:C
Group=BottomText
Hidden=1

[Button2]
Meter=Shape
X=(#Sec.P#+(13*#Scale#))
Y=(245*#Scale#)
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 35,135,255
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 60,175,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 35,135,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Zpos 1][!KeepOnScreen 0][!Draggable 1][!ShowMeter Title2][!HideMeter Title][!CommandMeasure LoadActions "Execute 2"]
Container=Slider:C

[Button2Text]
Meter=String
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
Text=Continue
StringAlign=CenterCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C

[Button2Note]
Meter=String
StringAlign=LeftCenter
X=(100*#Scale#)r
Y=r
FontSize=(15*#Scale#)
Text=Please accept permissions for PowerShell script
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C

; --------------------------------- Section 2 -------------------------------- ;

; [Image]
; Meter=Image
; ImageName=#@#Images\Setup\Update.png
; X=0
; W=(#Sec.W#)
; H=(#Sec.H#-450)
; PreserveAspectRatio=1
; ImageAlpha=(255*#TweenNode3#)
; Container=Slider2:C
; Group=Tweenable
; DynamicVariables=1
