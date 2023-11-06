[DisabledStyle0]

[DisabledStyle1]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
ImageAlpha=(#DropdownItemOpacity#/3)
FillColor=Fill Color #DropdownFontColor1#,((#DropdownItemOpacity#/3)*#ContentFade#)
StrokeColor=Stroke Color #DropdownFontColor1#,((#DropdownItemOpacity#/3)*#ContentFade#)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[2]
MeterStyle=InfoStyle | DisabledStyle#Win10Apps#

[2Icon]
MeterStyle=IconStyle | DisabledStyle#Win10Apps#

[2Arrow]
MeterStyle=ArrowStyle | DisabledStyle#Win10Apps#

[FolderBlock]
H=(#DropdownItemHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]-(#DropdownItemHeight#*#Win10Apps#))