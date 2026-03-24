[Rainmeter]
DefaultUpdateDivider=-1
AccurateText=1
SkinWidth=#SCREENAREAWIDTH#
SkinHeight=#SCREENAREAHEIGHT#
OnRefreshAction=[!Move 0 0][!Delay 2000][!ShowFade][!CommandMeasure MeasureActionTimer "Execute 1"][!WriteKeyValue Droptop\Other\Startup Active 0 "%APPDATA%\Rainmeter\Rainmeter.ini"][!Clickthrough 0]

[Variables]

NoAnimationNum=0

AnimationControl0=
AnimationControl1=#@#GlobalVar\Control.inc

AnimationUserSettings0=
AnimationUserSettings1=#@#GlobalVar\UserSettings.inc

AnimationLanguage0=
AnimationLanguage1=#@#GlobalVar\Languages\[#Language[#LanguageNum]].inc

W=20
U=[!UpdateMeasure MeasureActionTimer][!UpdateMeterGroup Animation.1][!UpdateMeterGroup Animation.2][!UpdateMeterGroup Animation.3][!UpdateMeterGroup Animation.4][!UpdateMeterGroup Animation.5][!Redraw]

@IncludeControl=#@#GlobalVar\Control.inc
@IncludeUserSettings=#@#GlobalVar\UserSettings.inc
@IncludeLanguage=#@#GlobalVar\Languages\[#Language[#LanguageNum]].inc

DISCOUNTCODE=VLH9T5A
DroptopSalePrice=5
DroptopSaleDiscount=4
DroptopSalePercent=20



U.1=[!UpdateMeasureGroup Animation.1][!UpdateMeterGroup Animation.1][!Redraw]
U.2=[!UpdateMeasureGroup Animation.2][!UpdateMeterGroup Animation.2][!Redraw]
U.3=[!UpdateMeasureGroup Animation.3][!UpdateMeterGroup Animation.3][!Redraw]
U.4=[!UpdateMeasureGroup Animation.4][!UpdateMeterGroup Animation.4][!Redraw]
U.5=[!UpdateMeasureGroup Animation.5][!UpdateMeterGroup Animation.5][!Redraw]

TweenDirection1=1
TweenDirection2=1
TweenDirection3=1
TweenDirection4=1
TweenDirection5=1

TweenLinear1=0
TweenLinear2=0
TweenLinear3=0
TweenLinear4=0
TweenLinear6=0

TweenNode1=0
TweenNode2=0
TweenNode3=0
TweenNode4=0
TweenNode5=0

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[BackArrow:S]
FontFace=icomoon
Text=" [\xea40] "
X=(30*#Scale#)
Y=(30*#Scale#)
W=(56*#Scale#)
FontSize=(20*#Scale#)
FontColor=255,255,255,128
AntiAlias=1
LeftMouseUpAction=[!WriteKeyValue Variables Page (#Page#-1)][!Refresh]
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
Group=Tweenable | Animation.2
Container=Container

[String:S]
AntiAlias=1
FontFace=Urbanist
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
FontFace=Urbanist
FontSize=(15*#Scale#)
FontColor=255,255,255

[Text:S]
FontFace=Urbanist
FontSize=(14*#Scale#)
FontColor=255,255,255

[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=TweenNode1.Start|Repeat TweenNode1,#W#,40|TweenNode1.End
ActionList2=TweenNode2.Start|Repeat TweenNode2,#W#,40|TweenNode2.End
ActionList3=TweenNode3.Start|Repeat TweenNode3,#W#,40|TweenNode3.End
ActionList4=TweenNode4.Start|Repeat TweenNode4,#W#,40|TweenNode4.End
ActionList5=TweenNode5.Start|Repeat TweenNode5,#W#,40|TweenNode5.End
;----------------
ActionList6=TweenNode1R.Start|Repeat TweenNode1R,#W#,50|TweenNode1R.End
;----------------
TweenNode1.Start=
TweenNode1=[!SetVariable TweenLinear1 "(Clamp((#TweenLinear1#+0.025),0,1))"][!SetVariable TweenNode1 "(1-(1-#TweenLinear1#)**5)"]#U.1#
TweenNode1.End=[!CommandMeasure MeasureActionTimer "Execute 2"]
;----------------
TweenNode2.Start=
TweenNode2=[!SetVariable TweenLinear2 "(Clamp((#TweenLinear2#+0.025),0,1))"][!SetVariable TweenNode2 "(1-(1-#TweenLinear2#)**5)"]#U.2#
TweenNode2.End=[!CommandMeasure MeasureActionTimer "Execute 3]
;----------------
TweenNode3.Start=
TweenNode3=[!SetVariable TweenLinear3 "(Clamp((#TweenLinear3#+0.025),0,1))"][!SetVariable TweenNode3 "(1-(1-#TweenLinear3#)**5)"]#U.3#
TweenNode3.End=[!CommandMeasure MeasureActionTimer "Execute 4"]
;----------------
TweenNode4.Start=
TweenNode4=[!SetVariable TweenLinear4 "(Clamp((#TweenLinear4#+0.025),0,1))"][!SetVariable TweenNode4 "(1-(1-#TweenLinear4#)**5)"]#U.4#
TweenNode4.End=[!CommandMeasure MeasureActionTimer "Execute 5"]
;----------------
TweenNode5.Start=
TweenNode5=[!SetVariable TweenLinear5 "(Clamp((#TweenLinear5#+0.025),0,1)),0,1),0,1))"][!SetVariable TweenNode5 "(1-(1-#TweenLinear5#)**5)"]#U.5#
TweenNode5.End=#AnimationFinishAction#
;-------------------------------------------
TweenNode1R.Start=[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 2"][!CommandMeasure MeasureActionTimer "Stop 3"][!CommandMeasure MeasureActionTimer "Stop 4"][!CommandMeasure MeasureActionTimer "Stop 5"][!SetVariable TweenNode1 1][!SetVariable TweenNode2 1][!SetVariable TweenNode3 1][!SetVariable TweenNode4 1][!SetVariable TweenNode5 1]#U#
TweenNode1R=[!SetVariable TweenLinear1 "(Clamp((#TweenLinear1#-0.025),0,1))"][!SetVariable TweenNode1 "(1-(1-#TweenLinear1#)**5)"][!SetVariable TweenLinear2 "(Clamp((#TweenLinear2#-0.025),0,1))"][!SetVariable TweenNode2 "(1-(1-#TweenLinear2#)**5)"][!SetVariable TweenLinear3 "(Clamp((#TweenLinear3#-0.025),0,1))"][!SetVariable TweenNode3 "(1-(1-#TweenLinear3#)**5)"][!SetVariable TweenLinear4 "(Clamp((#TweenLinear4#-0.025),0,1))"][!SetVariable TweenNode4 "(1-(1-#TweenLinear4#)**5)"][!SetVariable TweenLinear5 "(Clamp((#TweenLinear5#-0.025),0,1))"][!SetVariable TweenNode5 "(1-(1-#TweenLinear5#)**5)"]#U#
TweenNode1R.End=#NextPage#
DynamicVariables=1
IgnoreWarnings=1
Group=Animation | Animation.1 | Animation.2 | Animation.3 | Animation.4 | Animation.5
Disabled=1

; [LoadActions]
; ActionList2=Rewind1 | Rewind0 | Wait 1250 | NextPage
; Start0=[!ShowMeter Shape][!CommandMeasure Tween:M "Start(0)"]
; Start1=[!CommandMeasure Tween:M "Start(1)"]
; Start2=[!CommandMeasure Tween:M "Start(2)"]
; Start3=[!CommandMeasure Tween:M "Start(3)"]
; Start4=[!CommandMeasure Tween:M "Start(4)"]
; Start5=[!CommandMeasure Tween:M "Start(5)"]
; Rewind3=[!CommandMeasure Tween:M "Rewind(3)"]
; Rewind2=[!CommandMeasure Tween:M "Rewind(2)"]
; Rewind1=[!CommandMeasure Tween:M "Rewind(1)"]
; Rewind0=[!CommandMeasure Tween:M "Rewind(0)"]
; StartAll=[!CommandMeasure Tween:M "Start('All')"]
; RewindAll=[!CommandMeasure Tween:M "Rewind('All')"]
; NextPage=[!WriteKeyValue Variables Page (#Page#+1)][!Refresh]
; Custom1=
; Custom2=
; ExportVars=[!CommandMeasure PSRM "Export-Vars"]
; Deactivate=[!HideFade][!Delay 500]#FinishSetup#
; Exit=[!HideFade][!Delay 500][!DeactivateConfig]
; Intro=
; ClickOn=[!ClickThrough 0]

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
FontFace=Urbanist
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
