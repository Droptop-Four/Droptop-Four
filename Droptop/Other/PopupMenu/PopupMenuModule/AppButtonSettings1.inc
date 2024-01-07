[Rainmeter]

[Variables]
NumberOfItems=3
NumberOfDividers=1

3Icon=1
4Icon=2
5Icon=3

[MeasureAppName]
Measure=String
String=[#AppName[#PopupModuleIndex]]
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
DynamicVariables=1

[1]
Text="Enable [&MeasureAppName]"
LeftMouseDownAction=[!SetVariable CurrentAppNum [#SideAppPos[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]][#AppUpdateOnClose[#SideAppNum[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]][!WriteKeyValue Variables HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] ([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=1?0:1) "#@#GlobalVar\FolderSettings.inc"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] ([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=1?0:1)][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\Other\BackgroundProcesses"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar\Other\ContextBox"]    [!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] 1][!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "Droptop\DropdownBar\Other\ContextBox"][!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "Droptop\DropdownBar"][!WriteKeyValue Variables HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "#@#GlobalVar\FolderSettings.inc"]    [!SetOption #CURRENTSECTION# ImageTint #*DropdownFontColor2*#,([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=0?([#*DropdownItemOpacity*]/3):#*DropdownItemOpacity*#)][!ToggleMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!ToggleMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]SysExtraButtons[#HideExtraButtons[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar"][!ToggleMeasureGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!ToggleMeasureGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\Other\BackgroundProcesses"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!UpdateMeter BlankSpaceMarkerEND "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!UpdateMeter TopBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar\Other\ContextBox"][!Redraw "Droptop\DropdownBar\Other\ContextBox"][!UpdateMeter *][!Redraw]

[1Icon]
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=((#DropdownItemOpacity#/3)+((255-(#DropdownItemOpacity#/3))*(([#HideApp[#SideAppName[#PopupModuleIndex]]]-1)*-1)))
ImageFlip=[#IconFlip1[#HideApp[#SideAppName[#PopupModuleIndex]]]]

[2]
Text="Add divider"
LeftMouseDownAction=[!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] ([#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]=1?0:1)][!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "Droptop\DropdownBar\Other\ContextBox"][!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "Droptop\DropdownBar"][!WriteKeyValue Variables HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "#@#GlobalVar\FolderSettings.inc"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeter BlankSpaceMarkerEND "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!UpdateMeter TopBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar\Other\ContextBox"][!Redraw "Droptop\DropdownBar\Other\ContextBox"][!UpdateMeter *][!Redraw]

[2Icon]
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=((#DropdownItemOpacity#/3)+((255-(#DropdownItemOpacity#/3))*(([#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]-1)*-1)))
ImageFlip=[#IconFlip1[#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]

;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#*2)+(#DividerSpace#*2))r

;---

[3]
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

[3Icon]
MeterStyle=IconStyle | VariantIconStyle
ImageName=#@#TopImages\[#SideAppName[#PopupModuleIndex]]\Medium\1\[#SideAppName[#PopupModuleIndex]].png
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#DropdownHLOffsetX#-(#DropdownIconPadding#*2))*#RTLText#))
Y=(#DropdownIconYoffset#+((#DropdownItemHeight#*2)+#DividerHeight#+(#DividerSpace#*2))+#DropdownItemYOffset#)
Group=VariantIcon

[4Icon]
MeterStyle=IconStyle | VariantIconStyle
ImageName=#@#TopImages\[#SideAppName[#PopupModuleIndex]]\Medium\2\[#SideAppName[#PopupModuleIndex]].png
Group=VariantIcon

[5Icon]
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