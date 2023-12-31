[Rainmeter]
@IncludeMeters=#@#GlobalVar\FolderSettings.inc

[Variables]
16=1
32=2

MeasureAppName1=1
MeasureAppName2=2
MeasureAppName3=3
MeasureAppName4=4
MeasureAppName5=5
MeasureAppName6=6
MeasureAppName7=7
MeasureAppName8=8
MeasureAppName9=9
MeasureAppName10=10

;----------------------------------------------------

[MeasureAppName1]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName2]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName3]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName4]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName5]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName6]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName7]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName8]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName9]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName10]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

;----------------------------------------------------

[CustomAppIconStyle]
ImageCrop=-16,-16,32,32,5
ImageAlpha=([#HideAppCustomApp[##CURRENTSECTION#]]=1?(#DropdownItemOpacity#/3):#DropdownItemOpacity#)
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\Button.png
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*([##CURRENTSECTION#]-1)))
W=#IconW#
H=#IconH#

[SupporterLockedStyle0]
ImageName=#@#Icons\Fixed\#IconSize#\lock.png
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
ImageAlpha=(#DropdownItemOpacity#/3)
FillColor=Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/3)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[SupporterLockedStyle1]

[6]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[7]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[8]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[9]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[10]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[1Icon]
MeterStyle=IconStyle | CustomAppIconStyle
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)

[2Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[3Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[4Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[5Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[6Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[7Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[8Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[9Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[10Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[6Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[7Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[8Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[9Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[10Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*10)-(#DividerHeight#/2))

[11]
Y=(#DividerSpace#*2)R

[11Icon]
Y=(#DividerSpace#*2)R

[11Arrow]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*10)+(#DividerSpace#*2))
Hidden=0
DynamicVariables=1

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*11)-(#DividerHeight#/2))

[12]
Y=(#DividerSpace#*2)R

[12Icon]
Y=(#DividerSpace#*2)R

[12Arrow]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*11)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[13]

[13Arrow]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*12)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[FolderBlockB]
Meter=Image
X=1
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*10)+(#DividerSpace#*2))
W=#DropdownMenuWidth#
H=#DropdownItemHeight#
LeftMouseDownAction=[!SetTransparencyGroup 0 SM3][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu3"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!WriteKeyValue Variables SettingsMenuNumber "1.7.[#CurrentSubFolder]" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuIndex3 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu3"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[[#CurrentSubFolder]:Y]) "Droptop\Other\SettingsMenu\SettingsMenu3"][!#Show# "Droptop\Other\SettingsMenu\SettingsMenu3"][!UpdateMeter HighlightSelected][!Redraw]
MouseOverAction=[!SetVariable FolderMode 1][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 1"]
MouseLeaveAction=[!SetVariable FolderMode 0][!CommandMeasure MeasureActionTimer "Stop 1"]
DynamicVariables=1
Group=Items

[FolderBlockC]
Meter=Image
X=1
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*11)+(#DividerSpace#*4))
W=#DropdownMenuWidth#
H=(#DropdownItemHeight#*2)
; LeftMouseDownAction=[!SetTransparencyGroup 0 SM3][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu3"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY (#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*7)+(#DividerSpace#*4))][!WriteKeyValue Variables SettingsMenuNumber "1.7.[#CurrentSubFolder]" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuIndex3 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu3"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*6)+(#DividerSpace#*4))-[1:Y]) "Droptop\Other\SettingsMenu\SettingsMenu3"][!#Show# "Droptop\Other\SettingsMenu\SettingsMenu3"][!UpdateMeter HighlightSelected][!Redraw]
LeftMouseDownAction=[!SetTransparencyGroup 0 SM3][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu3"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!WriteKeyValue Variables SettingsMenuNumber "1.7.[#CurrentSubFolder]" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuIndex3 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu3"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[[#CurrentSubFolder]:Y]) "Droptop\Other\SettingsMenu\SettingsMenu3"][!#Show# "Droptop\Other\SettingsMenu\SettingsMenu3"][!UpdateMeter HighlightSelected][!Redraw]
MouseOverAction=[!SetVariable FolderMode 1][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 1"]
MouseLeaveAction=[!SetVariable FolderMode 0][!CommandMeasure MeasureActionTimer "Stop 1"]
DynamicVariables=1
Group=Items
