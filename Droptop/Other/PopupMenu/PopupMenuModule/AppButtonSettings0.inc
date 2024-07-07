[Rainmeter]

[Variables]
NumberOfItems=2
NumberOfDividers=0

[MeasureAppName]
Measure=String
String=[#AppName[#PopupModuleIndex]]
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
DynamicVariables=1

[1]
Text=#PopupMenuContext3.1#
LeftMouseDownAction=[!SetVariable CurrentAppNum [#SideAppPos[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]][#AppUpdateOnClose[#SideAppNum[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]][!WriteKeyValue Variables HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] ([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=1?0:1) "#@#GlobalVar\FolderSettings.inc"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] ([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=1?0:1)][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\Other\BackgroundProcesses"][!SetVariable HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] [#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar\Other\ContextBox"]    [!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] 1][!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "Droptop\DropdownBar\Other\ContextBox"][!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "Droptop\DropdownBar"][!WriteKeyValue Variables HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "#@#GlobalVar\FolderSettings.inc"]    [!SetOption #CURRENTSECTION# ImageTint #*DropdownFontColor2*#,([#HideApp[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]=0?([#*DropdownItemOpacity*]/3):#*DropdownItemOpacity*#)][!ToggleMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!ToggleMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]SysExtraButtons[#HideExtraButtons[#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]] "Droptop\DropdownBar"][!ToggleMeasureGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!ToggleMeasureGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\Other\BackgroundProcesses"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup [#SideAppSlotName[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]Sys "Droptop\DropdownBar"][!UpdateMeter BlankSpaceMarkerEND "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!UpdateMeter TopBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar\Other\ContextBox"][!Redraw "Droptop\DropdownBar\Other\ContextBox"][!UpdateMeter *][!Redraw]

[1Icon]
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=((#DropdownItemOpacity#/3)+((255-(#DropdownItemOpacity#/3))*(([#HideApp[#SideAppName[#PopupModuleIndex]]]-1)*-1)))
ImageFlip=[#IconFlip1[#HideApp[#SideAppName[#PopupModuleIndex]]]]

[2]
Text=#PopupMenuContext3.2#
LeftMouseDownAction=[!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] ([#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]=1?0:1)][!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "Droptop\DropdownBar\Other\ContextBox"][!SetVariable HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "Droptop\DropdownBar"][!WriteKeyValue Variables HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]] [#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]] "#@#GlobalVar\FolderSettings.inc"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeter BlankSpaceMarkerEND "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!UpdateMeter TopBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar\Other\ContextBox"][!Redraw "Droptop\DropdownBar\Other\ContextBox"][!UpdateMeter *][!Redraw]

[2Icon]
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=((#DropdownItemOpacity#/3)+((255-(#DropdownItemOpacity#/3))*(([#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]-1)*-1)))
ImageFlip=[#IconFlip1[#HideTopBarDivider[#SideAppPos[#SideAppName[#PopupModuleIndex]]]]]

;dummy
[1Arrow]
Meter=String
Hidden=1
[2Arrow]
Meter=String
Hidden=1