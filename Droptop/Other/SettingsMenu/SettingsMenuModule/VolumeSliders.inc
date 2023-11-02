[Rainmeter]

[Variables]

SettingsMenuNumber=1.6.8.3

; -------------------------

Slider1=1
Slider2=2
Slider3=3
Slider4=4

SliderText1=1
SliderText2=2
SliderText3=3
SliderText4=4

; -------------------------

SliderColorMode1=1
SliderColorMode2=1
SliderColorMode3=1
SliderColorMode4=0

SliderColorMode=0

; -------------------------

SliderMin3.1=0
SliderMin3.2=0
SliderMin3.3=0
SliderMin3.4=50

; -------------------------

Selected=1

Color3.1=NowPlayingColor
Color3.2=BLANK
Color3.3=BLANK
Opacity3.1=NowPlayingOpacity
Opacity3.2=BLANK
ColorOpac3.WriteLoc=#@#GlobalVar\UserSettings.inc

; -------------------------

SliderPartition1=[RedPartitionCalc]
SliderPartition2=[GreenPartitionCalc]
SliderPartition3=[BluePartitionCalc]

SliderPartition4=[#[#Opacity[#SettingsMenuIndex].1]]

SliderC1=Red
SliderC2=Green
SliderC3=Blue

ScrollTrack1=
ScrollTrack2=
ScrollTrack3=

; -------------------------

SliderOutput1=[#*SliderPartition1*],[#*SliderPartition2*],[#*SliderPartition3*]
SliderOutput2=[#*SliderPartition1*],[#*SliderPartition2*],[#*SliderPartition3*]
SliderOutput3=[#*SliderPartition1*],[#*SliderPartition2*],[#*SliderPartition3*]

SliderOutput4=[SliderMouseXCalc]

; -------------------------

SliderColor1=255,0,0
SliderColor2=0,255,0
SliderColor3=0,0,255

SliderColor4=200,200,200

; -------------------------

SliderActive=0

; ---

SliderColorAction0=[!SetVariableGroup [#Opacity[#SettingsMenuIndex].1] [#*SliderPartition4*] "DroptopSuite"][!SetVariableGroup [#Opacity[#SettingsMenuIndex].2] [#*SliderPartition4*] "DroptopSuite"][!WriteKeyValue Variables [#Opacity[#SettingsMenuIndex].1] [#*SliderPartition4*] "[#ColorOpac[#SettingsMenuIndex].WriteLoc]"][!WriteKeyValue Variables [#Opacity[#SettingsMenuIndex].2] [#*SliderPartition4*] "[#ColorOpac[#SettingsMenuIndex].WriteLoc]"][!UpdateGroup DroptopSuite]

SliderColorAction1=[!SetVariableGroup [#Color[#SettingsMenuIndex].1] "[#SliderOutput[#*Selected*]]" "DroptopSuite"][!SetVariableGroup [#Color[#SettingsMenuIndex].2] "[#SliderOutput[#*Selected*]]" "DroptopSuite"][!SetVariableGroup [#Color[#SettingsMenuIndex].3] "[#SliderOutput[#*Selected*]]" "DroptopSuite"][!WriteKeyValue Variables [#Color[#SettingsMenuIndex].1] "[#SliderOutput[#*Selected*]]" "[#ColorOpac[#SettingsMenuIndex].WriteLoc]"][!WriteKeyValue Variables [#Color[#SettingsMenuIndex].2] "[#SliderOutput[#*Selected*]]" "[#ColorOpac[#SettingsMenuIndex].WriteLoc]"][!WriteKeyValue Variables [#Color[#SettingsMenuIndex].3] "[#SliderOutput[#*Selected*]]" "[#ColorOpac[#SettingsMenuIndex].WriteLoc]"][!UpdateGroup DroptopSuite]

; ---

SliderDeactivateAction0=[!SetOption [#*CURRENTSECTION*] FillColor "Fill Color [#SliderColor[##*CURRENTSECTION*#]],75"][!SetOption [#*CURRENTSECTION*] KnobColor "Fill Color 255,255,255,185"]

; SliderDeactivateAction1=#OptionChanged.Suite#[!SetVariable SliderActive 0][#SliderColorAction[#*SliderColorMode*]][!DisableMeasure SliderMouseXCalc]
SliderDeactivateAction1=[!SetVariable SliderActive 0][#SliderColorAction[#*SliderColorMode*]][!DisableMeasure SliderMouseXCalc][!SetVariable NowPlayingCustomColor 1 "Droptop\DropdownBar"][!WriteKeyValue Variables NowPlayingCustomColor 1 "#@#GlobalVar\UserSettings.inc"][!UpdateMeter * "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

W=20
U=

; -------------------------

ChangeAction3=[!Refresh "Droptop\DropdownBar"]

[ScrollTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 500|Write
Write=[#SliderDeactivateAction1]

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=0

; -------------------------

[RedPartition]
Measure=String
String=[#[#Color[#SettingsMenuIndex].1]]
RegExpSubstitute=1
Substitute="^(.*),(.*),(.*)$":"\1"
OnChangeAction=[!UpdateMeasure RedPartitionCalc]
Group=ColorVars | MouseMove

[GreenPartition]
Measure=String
String=[#[#Color[#SettingsMenuIndex].1]]
RegExpSubstitute=1
Substitute="^(.*),(.*),(.*)$":"\2"
OnChangeAction=[!UpdateMeasure GreenPartitionCalc]
Group=ColorVars | MouseMove

[BluePartition]
Measure=String
String=[#[#Color[#SettingsMenuIndex].1]]
RegExpSubstitute=1
Substitute="^(.*),(.*),(.*)$":"\3"
OnChangeAction=[!UpdateMeasure BluePartitionCalc]
Group=ColorVars | MouseMove

;---

[RedPartitionCalc]
Measure=Calc
Formula=([RedPartition]>255?255:([RedPartition]<0?0:[RedPartition]))
DynamicVariables=1
UpdateDivider=-1
Group=ColorVars | MouseMove
MaxValue=255

[GreenPartitionCalc]
Measure=Calc
Formula=([GreenPartition]>255?255:([GreenPartition]<0?0:[GreenPartition]))
DynamicVariables=1
UpdateDivider=-1
Group=ColorVars | MouseMove

[BluePartitionCalc]
Measure=Calc
Formula=([BluePartition]>255?255:([BluePartition]<0?0:[BluePartition]))
DynamicVariables=1
UpdateDivider=-1
Group=ColorVars | MouseMove

;---

[MeasureMouseX]
Measure=Plugin
Plugin=MouseXY
Dimension=X
Group=MouseMove

[SliderMouseXCalc]
Measure=Calc
Formula=Round(Clamp(((MeasureMouseX-[#CURRENTCONFIGX]-#DropdownHLOffsetX#-#DropdownItemHeight#-2)/(((#DropdownMenuWidth#-((#DropdownItemHeight#+#DropdownHLOffsetX#+2)*2))/255))),[#SliderMin[#SettingsMenuIndex].[#Selected]],255),0)
OnUpdateAction=[!SetVariable SliderPartition#Selected# [#CURRENTSECTION#]][!SetOption SliderText#Selected# Text "[#CURRENTSECTION#]"][!SetVariable [#[#Color[#SettingsMenuIndex].1]] "[#SliderOutput[#Selected]]"][!SetVariable [#[#Color[#SettingsMenuIndex].2]] "[#SliderOutput[#Selected]]"][!SetVariable [#[#Color[#SettingsMenuIndex].3]] "[#SliderOutput[#Selected]]"][!SetOption #SettingsMenuIndex#Icon ImageTint "#SliderPartition1#,#SliderPartition2#,#SliderPartition3#" "Droptop\Other\SettingsMenu\SettingsMenu3"][!Delay 10][!UpdateMeasureGroup MouseMove][!UpdateMeterGroup MouseMove][!UpdateMeter #SettingsMenuIndex#Icon "Droptop\Other\SettingsMenu\SettingsMenu3"][!Redraw "Droptop\Other\SettingsMenu\SettingsMenu3"][!Redraw]
DynamicVariables=1
Disabled=1
Group=MouseMove

; -------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+(1.5*#DroptopSize#)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+(1.5*#DroptopSize#)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,255 | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
DynamicVariables=1
MouseLeaveAction=[!SetOptionGroup SliderBar FillColor ""][!SetOptionGroup SliderBar KnobColor ""][!UpdateMeterGroup SliderBar][!Redraw]

[InfoStyle]
StringAlign=CenterCenter
FontColor=0,0,0,185
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
InlineSetting=
FontWeight=#FontWeight#
Padding=0,0,0,0
AntiAlias=#DropdownAntiAlias#
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=
DynamicVariables=1
ClipString=1
X=((#DropdownMenuCutout#+#DropdownHLOffsetX#)+((#DropdownMenuWidth#-((#DropdownMenuCutout#+#DropdownHLOffsetX#)*2)-(#DropdownItemHeight#*2))*([#SliderPartition[##CURRENTSECTION#]]/255))+#DropdownItemHeight#)
Y=([Slider[##CURRENTSECTION#]:Y]+(#DropdownItemHeight#/2))
W=(#DropdownItemHeight#*2)
H=#DropdownItemHeight#
FontColor=0,0,0,185
Text=[#SliderPartition[##CURRENTSECTION#]]
Group=MouseMove | SliderText
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)

[InfoStyleB]
StringAlign=#TextDirection#Center
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#
Text=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#Icon]]
LeftMouseDownAction=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#Icon].Action]
X=(1+(#DropdownMenuWidth#*#RTLText#))
Y=R
W=(#DropdownMenuWidth#-#DropdownArrowHighlightW#-(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#))
H=#DropdownItemHeight#
FontWeight=#FontWeight#
Padding=[#Padding[#RTLText]B]
AntiAlias=#DropdownAntiAlias#
MouseOverAction=[!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!Delay [#FolderMouseOverTime[#FolderMouseOverTimeNum]]][#ActivateSubFolder[#[##CURRENTSECTION#]FolderActive][#FolderMode]]
MouseLeaveAction=[!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
MiddleMouseDownAction=#ResetActiveFolders#[!SetVariable NotificationText "#NotificationAdded#" "Droptop\DropdownBar"][!CommandMeasure MeasureActionTimer "Execute 1" "Droptop\DropdownBar"][!UpdateMeter Notification "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetClip "[\x0060][#SettingsDirectoryCopy[#SettingsMenuBlock]] >> [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[#CurrentFolder]][\x0060]"]
DynamicVariables=1
ClipString=1
Group=Items

[SliderStyle]
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | StrokeWidth 1 | Stroke Color 0,0,0,55 | Extend FillColor
Shape2=Rectangle ((#DropdownMenuCutout#+#DropdownHLOffsetX#)+((#DropdownMenuWidth#-((#DropdownMenuCutout#+#DropdownHLOffsetX#)*2)-(#DropdownItemHeight#*2))*([#SliderPartition[##CURRENTSECTION#]]/255))+1),1,((#DropdownItemHeight#*2)-2),(#DropdownItemHeight#-2),#DropdownHighlightCorner# | StrokeWidth 1 | Stroke Color 0,0,0,55 | Extend KnobColor
FillColor=Fill Color [#SliderColor[##CURRENTSECTION#]],75
KnobColor=Fill Color 255,255,255,185
; MouseScrollUpAction=[!SetVariable Selected [##CURRENTSECTION#]][!SetVariable [#[#Color[#SettingsMenuIndex].[##CURRENTSECTION#]]] ([#[#Color[#SettingsMenuIndex].[##CURRENTSECTION#]]]+1)][!SetOption SliderText[##CURRENTSECTION#] Text [#[#Color[#SettingsMenuIndex].[##CURRENTSECTION#]]]]        [!WriteKeyValue Variables [#Color[#SettingsMenuIndex].1] "[#[#Color[#SettingsMenuIndex].[##CURRENTSECTION#]]]" "[#ColorOpac[#SettingsMenuIndex].WriteLoc]"][!WriteKeyValue Variables [#Color[#SettingsMenuIndex].2] "[#[#Color[#SettingsMenuIndex].[##CURRENTSECTION#]]]" "[#ColorOpac[#SettingsMenuIndex].WriteLoc]"][!WriteKeyValue Variables [#Color[#SettingsMenuIndex].3] "[#[#Color[#SettingsMenuIndex].[##CURRENTSECTION#]]]" "[#ColorOpac[#SettingsMenuIndex].WriteLoc]"]       [!SetOption #SettingsMenuIndex#Icon ImageTint "#SliderPartition1#,#SliderPartition2#,#SliderPartition3#" "Droptop\Other\SettingsMenu\SettingsMenu4"][!Delay 10][!UpdateMeter #SettingsMenuIndex#Icon "Droptop\Other\SettingsMenu\SettingsMenu4"][!Redraw "Droptop\Other\SettingsMenu\SettingsMenu4"][!UpdateMeasure *][!UpdateMeter *][!Redraw]
; MouseScrollUpAction=[!SetVariable Selected [##CURRENTSECTION#]][!SetVariable SliderPartition[#Selected] ([#SliderPartition[#Selected]]+1)][!SetVariable ScrollTrack[#Selected] ([#ScrollTrack[#Selected]]+1)][!SetOption SliderText[#Selected] Text [#ScrollTrack[#Selected]]]               [!SetOption #SettingsMenuIndex#Icon ImageTint "#SliderPartition1#,#SliderPartition2#,#SliderPartition3#" "Droptop\Other\SettingsMenu\SettingsMenu4"][!Delay 10][!UpdateMeter #SettingsMenuIndex#Icon "Droptop\Other\SettingsMenu\SettingsMenu4"][!Redraw "Droptop\Other\SettingsMenu\SettingsMenu4"][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseScrollUpAction=[!CommandMeasure ScrollTimer "Stop 1"][!CommandMeasure ScrollTimer "Execute 1"][!SetVariable Selected [##CURRENTSECTION#]][!SetVariable SliderColorMode [#SliderColorMode[#Selected]]][!SetVariable SliderPartition[#Selected] ([#SliderPartition[#Selected]]+([#SliderPartition[#Selected]]>=255?0:1))][!SetOption SliderText[#Selected] Text [#SliderPartition[#Selected]]]               [!SetOption #SettingsMenuIndex#Icon ImageTint "#SliderPartition1#,#SliderPartition2#,#SliderPartition3#" "Droptop\Other\SettingsMenu\SettingsMenu4"][!Delay 10][!UpdateMeter #SettingsMenuIndex#Icon "Droptop\Other\SettingsMenu\SettingsMenu4"][!Redraw "Droptop\Other\SettingsMenu\SettingsMenu4"][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseScrollDownAction=[!CommandMeasure ScrollTimer "Stop 1"][!CommandMeasure ScrollTimer "Execute 1"][!SetVariable Selected [##CURRENTSECTION#]][!SetVariable SliderColorMode [#SliderColorMode[#Selected]]][!SetVariable SliderPartition[#Selected] ([#SliderPartition[#Selected]]-([#SliderPartition[#Selected]]<=[#SliderMin[#SettingsMenuIndex].[#Selected]]?0:1))][!SetOption SliderText[#Selected] Text [#SliderPartition[#Selected]]]               [!SetOption #SettingsMenuIndex#Icon ImageTint "#SliderPartition1#,#SliderPartition2#,#SliderPartition3#" "Droptop\Other\SettingsMenu\SettingsMenu4"][!Delay 10][!UpdateMeter #SettingsMenuIndex#Icon "Droptop\Other\SettingsMenu\SettingsMenu4"][!Redraw "Droptop\Other\SettingsMenu\SettingsMenu4"][!UpdateMeasure *][!UpdateMeter *][!Redraw]
LeftMouseDownAction=[!SetVariable SliderActive 1][!SetVariable Selected [##CURRENTSECTION#]][!SetVariable SliderColorMode [#SliderColorMode[##CURRENTSECTION#]]][!EnableMeasure SliderMouseXCalc][!UpdateMeasureGroup MouseMove][!UpdateMeterGroup MouseMove][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[#SliderDeactivateAction[#SliderActive]][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[#SliderDeactivateAction[#SliderActive]][!UpdateMeter #CURRENTSECTION#]
MouseOverAction=[!SetOptionGroup SliderBar FillColor ""][!SetOptionGroup SliderBar KnobColor ""][!SetOption #CURRENTSECTION# FillColor "Fill Color [#SliderColor[##CURRENTSECTION#]],255"][!UpdateMeter #CURRENTSECTION#][!SetOption #CURRENTSECTION# KnobColor "Fill Color 255,255,255,245"][!UpdateMeterGroup SliderBar][!Redraw]
DynamicVariables=1
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)
X=1
Y=R
Group=MouseMove | SliderBar

; -------------------------

[1]
FontColor=0,0,0,0

[2]
FontColor=0,0,0,0

[3]
FontColor=0,0,0,0

[4]
FontColor=0,0,0,0

; -------------------------

[Slider1]
Meter=Shape
MeterStyle=SliderStyle
X=1
Y=[1:Y]

[Slider2]
Meter=Shape
MeterStyle=SliderStyle

[Slider3]
Meter=Shape
MeterStyle=SliderStyle

; -------------------------

[4]
Y=(#DividerSpace#*2)R

[4Icon]
Y=(#DividerSpace#*2)R

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*3)+2)

[Slider4]
Meter=Shape
MeterStyle=SliderStyle
Y=(#DividerSpace#*2)R

; -------------------------

[SliderText1]
Meter=String
MeterStyle=InfoStyle

[SliderText2]
Meter=String
MeterStyle=InfoStyle

[SliderText3]
Meter=String
MeterStyle=InfoStyle

[SliderText4]
Meter=String
MeterStyle=InfoStyle

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*4)+2)

[5]
MeterStyle=InfoStyleB
Y=(#DividerSpace#*2)R

[5Icon]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*4)+#DividerHeight#+(#DropdownItemHeight#*4)+2)

