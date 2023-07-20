[Rainmeter]
Update=0
DefaultUpdateDivider=-1
AccurateText=1
SkinWidth=#SCREENAREAWIDTH#
SkinHeight=#SCREENAREAHEIGHT#
OnRefreshAction=[#RefreshAction[#NoAnimationNum]][!WriteKeyValue Droptop\Other\Startup Active 0 "%APPDATA%\Rainmeter\Rainmeter.ini"]

[Variables]

NoAnimationNum=0

AnimationControl0=
AnimationControl1=#@#GlobalVar\Control.inc

AnimationUserSettings0=
AnimationUserSettings1=#@#GlobalVar\UserSettings.inc

AnimationLanguage0=
AnimationLanguage1=#@#GlobalVar\Languages\[#Language[#LanguageNum]].inc

@IncludeControl=[#AnimationControl[#NoAnimationNum]]
@IncludeUserSettings=[#AnimationUserSettings[#NoAnimationNum]]
@IncludeLanguage=[#AnimationLanguage[#NoAnimationNum]]

RefreshAction0=[!CommandMeasure LoadActions "Execute 1"][!ClickThrough 1][!Delay 2000][!ShowMeter ErrorString]
RefreshAction1=[!CommandMeasure LoadActions "Execute 1"][!ClickThrough 0]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[BackArrow:S]
FontFace=icomoon
Text=" [\xea40] "
X=(30*#Scale#)
Y=(30*#Scale#)
W=(28*#Scale#)
FontSize=(20*#Scale#)
FontColor=255,255,255,128
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables Page (#Page#-1)][!Refresh][!Zpos 1]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255,128"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=Container

[Image:BG]
FontFace=icomoon
StringAlign=CenterCenter
FontColor=255,255,255,10
FontSize=(450*#Scale#)
Y=((#Sec.H#*(1-#TweenNode2#))+(#Sec.H#-([#CURRENTSECTION#:H]/2)))
X=((+#Sec.W#)/2)
DynamicVariables=1
AntiAlias=1
Group=Tweenable
Container=Container

[String:S]
AntiAlias=1
FontFace=SF Pro Rounded
Clipstring=2
Container=Container

[Header:S]
W=((+#Sec.W#)*0.8)
H=(110*#Scale#)
FontSize=(30*#Scale#)
FontWeight=800
Clipstring=1
FontColor=255,255,255
Container=Container

[Header2:S]
FontFace=SF Pro Rounded
FontSize=(15*#Scale#)
FontColor=255,255,255

[Text:S]
FontFace=SF Pro Rounded
FontSize=(14*#Scale#)
FontColor=255,255,255

[LoadActions]
ActionList2=Rewind1 | Rewind0 | Wait 1250 | NextPage
Start0=[!ShowMeter Shape][!CommandMeasure Tween:M "Start(0)"]
Start1=[!CommandMeasure Tween:M "Start(1)"]
Start2=[!CommandMeasure Tween:M "Start(2)"]
Start3=[!CommandMeasure Tween:M "Start(3)"]
Start4=[!CommandMeasure Tween:M "Start(4)"]
Start5=[!CommandMeasure Tween:M "Start(5)"]
Rewind3=[!CommandMeasure Tween:M "Rewind(3)"]
Rewind2=[!CommandMeasure Tween:M "Rewind(2)"]
Rewind1=[!CommandMeasure Tween:M "Rewind(1)"]
Rewind0=[!CommandMeasure Tween:M "Rewind(0)"]
StartAll=[!CommandMeasure Tween:M "Start('All')"]
RewindAll=[!CommandMeasure Tween:M "Rewind('All')"]
NextPage=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]
Custom1=
Custom2=
ExportVars=[!CommandMeasure PSRM "Export-Vars"]
Deactivate=[!HideFade][!Delay 500]#FinishSetup#
Exit=[!HideFade][!Delay 500][!DeactivateConfig]
Intro=
ClickOn=[!ClickThrough 0]

[MeasureRegistry]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop\WindowMetrics
RegValue=AppliedDPI
UpdateDivider=-1

[Input:FontSize]
Measure=Calc
Formula=((14-(((14*(((ROUND(([MeasureRegistry]/100)/0.25)))*0.25))-14)/2))-((14-(((14*(((ROUND(([MeasureRegistry]/100)/0.25)))*0.25))-14)/2))%1))
DynamicVariables=1

[Input:M]
Measure=Plugin
Plugin=InputText.dll
SolidColor=43,43,43
FontColor=255,255,255
FontFace=SF Pro Rounded
FontSize=([Input:FontSize]*#Scale#)
StringAlign=LeftCenter
W=(380*#Scale#-#Sec.P#)
H=(30*#Scale#)
DynamicVariables=1
Password=0
; DefaultValue="[##Editing#]"
OnDismissAction=[!SetOptionGroup InputBox StrokeColor "Stroke Color 55,55,55"][!UpdateMeterGroup InputBox][!Redraw]
Command1=[!SetVariable #Editing# "$UserInput$"][!EnableMeasure SaveAndLoad:M][!UpdateMeasure SaveAndLoad:M][!SetOptionGroup InputBox StrokeColor "Stroke Color 55,55,55"][!ShowMeter #Editing#.Text][!UpdateMeterGroup InputBox][!Redraw]

[SaveAndLoad:M]
Measure=Calc
DynamicVariables=1
OnUpdateAction=[!WriteKeyValue Variables #Editing# "[##Editing#]" "#Sec.SaveLocation#"][!SetVariable #Editing# "[##Editing#]"][!UpdateMeasure #Editing#.Measure][!UpdateMeter *][!Redraw]
Disabled=1
