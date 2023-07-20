[Rainmeter]

[Variables]
CurrentFolder=5

[DisabledApp]
ImageAlpha=75
FontColor=#DropdownFontColor1#,75
MouseOverAction=[!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[]
FillColor=Fill Color #DropdownFontColor1#,75

;---

[1]
MeterStyle=InfoStyle | DisabledApp

[1Icon]
MeterStyle=IconStyle | DisabledApp

[1Arrow]
MeterStyle=ArrowStyle | DisabledApp

;---

[2]
MeterStyle=InfoStyle | DisabledApp

[2Icon]
MeterStyle=IconStyle | DisabledApp

[2Arrow]
MeterStyle=ArrowStyle | DisabledApp

;---

[3]
MeterStyle=InfoStyle | DisabledApp

[3Icon]
MeterStyle=IconStyle | DisabledApp

[3Arrow]
MeterStyle=ArrowStyle | DisabledApp

;---

[4]
MeterStyle=InfoStyle | DisabledApp

[4Icon]
MeterStyle=IconStyle | DisabledApp

[4Arrow]
MeterStyle=ArrowStyle | DisabledApp

;---

[7]
MeterStyle=InfoStyle | DisabledApp

[7Icon]
MeterStyle=IconStyle | DisabledApp

[7Arrow]
MeterStyle=ArrowStyle | DisabledApp

;---

[15]
MeterStyle=InfoStyle

[15Icon]
MeterStyle=IconStyle

[15Arrow]
MeterStyle=ArrowStyle

;---

[16]
MeterStyle=InfoStyle | DisabledApp

[16Icon]
MeterStyle=IconStyle | DisabledApp

[16Arrow]
MeterStyle=ArrowStyle | DisabledApp

;---

[17]
MeterStyle=InfoStyle
Text=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[#22Icon]]
MouseOverAction=[!SetVariable CurrentSubFolder 22][!SetVariable CurrentFolder 22][!UpdateMeasure MeasureActionTimer][#ActionTimerTouchB[#DeviceIsNotTouch]][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]

[17Icon]
ImageName=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].22.Icon]
ImageAlpha=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].22.IconAlpha]
ImageFlip=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].22.IconFlip]
MeterStyle=IconStyle

[17Arrow]
MeterStyle=ArrowStyle

;---

[18]
MeterStyle=InfoStyle | DisabledApp
Hidden=1

[18Icon]
MeterStyle=IconStyle | DisabledApp
ImageName=
Hidden=1

[18Arrow]
MeterStyle=ArrowStyle | DisabledApp
Hidden=1

;---

[19]
MeterStyle=InfoStyle | DisabledApp
Hidden=1

[19Icon]
MeterStyle=IconStyle | DisabledApp
ImageName=
Hidden=1

[19Arrow]
MeterStyle=ArrowStyle | DisabledApp
Hidden=1

;---

[20]
MeterStyle=InfoStyle | DisabledApp
Hidden=1

[20Icon]
MeterStyle=IconStyle | DisabledApp
ImageName=
Hidden=1

[20Arrow]
MeterStyle=ArrowStyle | DisabledApp
Hidden=1

;---

[21]
MeterStyle=InfoStyle | DisabledApp
Hidden=1

[21Icon]
MeterStyle=IconStyle | DisabledApp
ImageName=
Hidden=1

[21Arrow]
MeterStyle=ArrowStyle | DisabledApp
Hidden=1

;---

[22]
MeterStyle=InfoStyle | DisabledApp
Hidden=0
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*16))
Text=

[22Icon]
MeterStyle=IconStyle | DisabledApp
ImageName=
Hidden=1

[22Arrow]
MeterStyle=ArrowStyle | DisabledApp
Hidden=1