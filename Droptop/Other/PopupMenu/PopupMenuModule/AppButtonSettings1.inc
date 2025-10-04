[Rainmeter]

[Variables]
NumberOfItems=4
NumberOfDividers=1

4Icon=1
5Icon=2
6Icon=3

[MeasureAppName]
Measure=String
String=[#AppName[#PopupModuleIndex]]
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
DynamicVariables=1

[1]
Text=#PopupMenuContext3.1#
LeftMouseDownAction=[!SetVariable CurrentAppNum [#SideAppPos[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]][#AppUpdateOnClose[#SideAppNum[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]][!WriteKeyValue Variables HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] ([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=1?0:1) "#@#GlobalVar\FolderSettings.inc"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] ([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=1?0:1)][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\Other\BackgroundProcesses"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar\Other\ContextBox"]    [!SetVariable HideTopBarDivider[#PopupModuleIndex2] 1][!SetVariable HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "Droptop\DropdownBar\Other\ContextBox"][!SetVariable HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "Droptop\DropdownBar"][!WriteKeyValue Variables HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "#@#GlobalVar\FolderSettings.inc"]    [!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] 0 "Droptop\DropdownBar\Other\ContextBox"][!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] 0][!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] 0 "Droptop\DropdownBar"][!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] 0 "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] 0 "#@#GlobalVar\FolderSettings.inc"]     [!SetOption #CURRENTSECTION# ImageTint #*DropdownFontColor2*#,([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=0?([#*DropdownItemOpacity*]/3):#*DropdownItemOpacity*#)][!ToggleMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!ToggleMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]SysExtraButtons[#HideExtraButtons[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar"][!ToggleMeasureGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!ToggleMeasureGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\Other\BackgroundProcesses"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!UpdateMeter BlankSpaceMarkerEND "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!UpdateMeter TopBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar\Other\ContextBox"][!Redraw "Droptop\DropdownBar\Other\ContextBox"][!UpdateMeter *][!Redraw]

; [!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] 0][!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] 0 "Droptop\DropdownBar"][!WriteKeyValue Variables IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] 0 "#@#GlobalVar\FolderSettings.inc"]

[1Icon]
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=((#DropdownItemOpacity#/3)+((255-(#DropdownItemOpacity#/3))*(([#HideApp[#SideAppName[#PopupModuleIndex]]]-1)*-1)))
ImageFlip=[#IconFlip1[#HideApp[#SideAppName[#PopupModuleIndex]]]]

[DividerToggleStyle00]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
LeftMouseDownAction=[!SetVariable HideTopBarDivider[#PopupModuleIndex2] ([#HideTopBarDivider[#PopupModuleIndex2]]=1?0:1)][!SetVariable HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "Droptop\DropdownBar\Other\ContextBox"][!SetVariable HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "Droptop\DropdownBar"][!WriteKeyValue Variables HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "#@#GlobalVar\FolderSettings.inc"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeter BlankSpaceMarkerEND "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!UpdateMeter TopBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar\Other\ContextBox"][!Redraw "Droptop\DropdownBar\Other\ContextBox"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetVariable ItemIsHighlighted 0][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!CommandMeasure MeasureActionTimer "Stop 2"][!Delay 10][!UpdateMeasure CalcItemIsHighlighted]

[DividerToggleStyle10]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
MouseOverAction=[]
MouseLeaveAction=[]

[DividerToggleStyle01]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
MouseOverAction=[]
MouseLeaveAction=[]

[DividerToggleStyle11]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
MouseOverAction=[]
MouseLeaveAction=[]

[2]
MeterStyle=InfoStyle | ItemStyle | DividerToggleStyle[#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]][#IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]
Text=#PopupMenuContext3.2#

[2Icon]
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=((#DropdownItemOpacity#/3)+((255-(#DropdownItemOpacity#/3))*(([#HideTopBarDivider[#PopupModuleIndex2]]-1)*-1)))
ImageFlip=[#IconFlip1[#HideTopBarDivider[#PopupModuleIndex2]]]

[OverflowToggleStyle0]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
LeftMouseDownAction=[!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] ([#IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=1?0:1)][!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar\Other\ContextBox"][!SetVariable IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar"][!WriteKeyValue Variables IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "#@#GlobalVar\FolderSettings.inc"]     [!SetVariable HideTopBarDivider[#PopupModuleIndex2] 1][!SetVariable HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "Droptop\DropdownBar\Other\ContextBox"][!SetVariable HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "Droptop\DropdownBar"][!WriteKeyValue Variables HideTopBarDivider[#PopupModuleIndex2] [#HideTopBarDivider[#PopupModuleIndex2]] "#@#GlobalVar\FolderSettings.inc"]     [!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeter BlankSpaceMarkerEND "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!UpdateMeter Update "Droptop\DropdownBar"][!UpdateMeter TopBar "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar\Other\ContextBox"][!Redraw "Droptop\DropdownBar\Other\ContextBox"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetVariable ItemIsHighlighted 0][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!CommandMeasure MeasureActionTimer "Stop 2"][!Delay 10][!UpdateMeasure CalcItemIsHighlighted]

[OverflowToggleStyle1]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
MouseOverAction=[]
MouseLeaveAction=[]

[3]
MeterStyle=InfoStyle | ItemStyle | OverflowToggleStyle[#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]
Text=#PopupMenuContext3.3#

[3Icon]
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=((#DropdownItemOpacity#/3)+((255-(#DropdownItemOpacity#/3))*[#IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]))
ImageFlip=[#IconFlip0[#IsOverflow[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]]


;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#*3)+(#DividerSpace#*2))r

;---

[4]
Hidden=1
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=

;---

[VariantIconStyle]
X=R
Y=r
W=
H=#DropdownItemHeight#
; ImageAlpha=(#DropdownItemOpacity#/3)
ImageAlpha=([#[#SideAppName[#PopupModuleIndex]]Style]=[##CURRENTSECTION#]?#DropdownItemOpacity#:(#DropdownItemOpacity#/3))
LeftMouseDownAction=[!SetOptionGroup VariantIcon ImageAlpha "(#*DropdownItemOpacity*#/3)"][!SetOption #CURRENTSECTION# ImageAlpha "#*DropdownItemOpacity*#"][!EnableMouseActionGroup "MouseLeaveAction|MouseOverAction|LeftMouseDownAction" "VariantIcon"][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction|MouseOverAction|LeftMouseDownAction"][!UpdateMeterGroup VariantIcon][!Redraw][!SetVariable [#SideAppName[#PopupModuleIndex]]Style [##CURRENTSECTION#] "Droptop\DropdownBar"][!WriteKeyValue Variables [#SideAppName[#PopupModuleIndex]]Style [##CURRENTSECTION#] "#@#Themes\#ThemeNum#Settings.inc"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MouseOverAction=[!SetOptionGroup VariantIcon ImageAlpha "(#*DropdownItemOpacity*#/3)"][!SetOption #CURRENTSECTION# ImageAlpha "#*DropdownItemOpacity*#"][!UpdateMeterGroup VariantIcon][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha "(#*DropdownItemOpacity*#/3)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Padding=
Hidden=0

[4Icon]
MeterStyle=IconStyle | VariantIconStyle
ImageName=#@#TopImages\[#SideAppName[#PopupModuleIndex]]\Medium\1\[#SideAppName[#PopupModuleIndex]].png
X=#DropdownIconXoffset#
Y=(#DropdownIconYOffset#+((#DropdownItemHeight#*3)+#DividerHeight#+(#DividerSpace#*2))+#DropdownItemYOffset#)
Group=VariantIcon

[5Icon]
MeterStyle=IconStyle | VariantIconStyle
ImageName=#@#TopImages\[#SideAppName[#PopupModuleIndex]]\Medium\2\[#SideAppName[#PopupModuleIndex]].png
Group=VariantIcon

[6Icon]
MeterStyle=IconStyle | VariantIconStyle
ImageName=#@#TopImages\[#SideAppName[#PopupModuleIndex]]\Medium\3\[#SideAppName[#PopupModuleIndex]].png
Group=VariantIcon

;dummy
[1Arrow]
Meter=String
Hidden=1
[2Arrow]
Meter=String
Hidden=1