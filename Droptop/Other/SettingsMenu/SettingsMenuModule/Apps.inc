[Rainmeter]
MouseLeaveAction=#ResetActiveFolders#[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable FolderMode 0]

[Variables]
CurrentFolder=5

CommunityApp23=[#*CustomAppID1*]
CommunityApp24=[#*CustomAppID2*]
CommunityApp25=[#*CustomAppID3*]
CommunityApp26=[#*CustomAppID4*]
CommunityApp27=[#*CustomAppID5*]

[MeasureAppName1]
Measure=String
String=[#CustomAppID1]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName2]
Measure=String
String=[#CustomAppID2]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName3]
Measure=String
String=[#CustomAppID3]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName4]
Measure=String
String=[#CustomAppID4]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName5]
Measure=String
String=[#CustomAppID5]
Substitute="_":" ","-":" - "
DynamicVariables=1

[DisabledApp]
ImageAlpha=75
FontColor=#DropdownFontColor1#,75
MouseOverAction=[!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[]
FillColor=Fill Color #DropdownFontColor1#,75

[Background2]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*5+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
; Y=([Background:YH]+(3*#DroptopSize#))
MouseOverAction=[!SetVariable FolderMode 1]
MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1

[Background]
Y=([Background2:YH]+(3*#DroptopSize#))

;---

[CommunityAppStyle0]
MouseOverAction=[!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentComApp [#CommunityApp[#CURRENTSECTION]]][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 2"]

[CommunityAppStyle1]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[!DisableMouseAction #CURRENTSECTION# "LeftMouseDownAction"]
MouseLeaveAction=[!EnableMouseAction #CURRENTSECTION# "LeftMouseDownAction"]

[DisabledComApp0]
ImageAlpha=255

[DisabledComApp1]
ImageAlpha=75
FontColor=#DropdownFontColor1#,75
MouseOverAction=[!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[]
FillColor=Fill Color #DropdownFontColor1#,75

[23]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp1]
Hidden=0
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID1]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"]
Text=[MeasureAppName1]

[23Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp1]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID1]\Button\Medium\Button.png
Hidden=0
Y=[23:Y]

[23Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp1]
Hidden=0
Y=[23:Y]

;---

[24]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp2]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID2]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"]
Text=[MeasureAppName2]

[24Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp2]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID2]\Button\Medium\Button.png
Hidden=0

[24Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp2]
Hidden=0

;---

[25]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp3]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID3]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"]
Text=[MeasureAppName3]

[25Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp3]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID3]\Button\Medium\Button.png
Hidden=0

[25Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp3]
Hidden=0

;---

[26]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp4]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID4]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"]
Text=[MeasureAppName4]

[26Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp4]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID4]\Button\Medium\Button.png
Hidden=0

[26Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp4]
Hidden=0

;---

[27]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp5]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID5]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"]
Text=[MeasureAppName5]

[27Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp5]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID5]\Button\Medium\Button.png
Hidden=0

[27Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp5]
Hidden=0

;---

[1]
MeterStyle=InfoStyle | DisabledApp
Y=([Background:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#))
DynamicVariables=1

[1Icon]
MeterStyle=IconStyle | DisabledApp
Y=[1:Y]

[1Arrow]
MeterStyle=ArrowStyle | DisabledApp
Y=[1:Y]

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
MouseOverAction=[!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder 22][!SetVariable CurrentFolder 22][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 1"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]

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
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*16)+[Background2:YH]+(3*#DroptopSize#))
Text=

[22Icon]
MeterStyle=IconStyle | DisabledApp
ImageName=
Hidden=1

[22Arrow]
MeterStyle=ArrowStyle | DisabledApp
Hidden=1

;---

; [Background2]
; Meter=Shape
; MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*5+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
; Y=([Background:YH]+(3*#DroptopSize#))
; DynamicVariables=1

; ;---

; [CommunityAppStyle]
; MouseOverAction=[!SetVariable CurrentComApp [#CommunityApp[#CURRENTSECTION]]][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!Delay [#FolderMouseOverTime[#FolderMouseOverTimeNum]]][#ActivateSubFolderC[#[#CURRENTSECTION]FolderActive][#FolderMode]]

; [23]
; MeterStyle=InfoStyle | CommunityAppStyle
; Hidden=0
; Y=([Background2:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#))
; LeftMouseDownAction=[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup CustomAppAll][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID1]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]) "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"]
; Text=[#CustomAppID1]

; [23Icon]
; MeterStyle=IconStyle
; ImageCrop=-16,-16,32,32,5
; ImageAlpha=255
; ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID1]\Button\Medium\Button.png
; Hidden=0
; Y=[23:Y]

; [23Arrow]
; MeterStyle=ArrowStyle
; Hidden=0
; Y=[23:Y]

; ;---

; [24]
; MeterStyle=InfoStyle | CommunityAppStyle
; Hidden=0
; LeftMouseDownAction=[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup CustomAppAll][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID2]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]) "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"]
; Text=[#CustomAppID2]

; [24Icon]
; MeterStyle=IconStyle
; ImageCrop=-16,-16,32,32,5
; ImageAlpha=255
; ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID2]\Button\Medium\Button.png
; Hidden=0

; [24Arrow]
; MeterStyle=ArrowStyle
; Hidden=0

; ;---

; [25]
; MeterStyle=InfoStyle | CommunityAppStyle
; Hidden=0
; LeftMouseDownAction=[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup CustomAppAll][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID3]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]) "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"]
; Text=[#CustomAppID3]

; [25Icon]
; MeterStyle=IconStyle
; ImageCrop=-16,-16,32,32,5
; ImageAlpha=255
; ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID3]\Button\Medium\Button.png
; Hidden=0

; [25Arrow]
; MeterStyle=ArrowStyle
; Hidden=0

; ;---

; [26]
; MeterStyle=InfoStyle | CommunityAppStyle
; Hidden=0
; LeftMouseDownAction=[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup CustomAppAll][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID4]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]) "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"]
; Text=[#CustomAppID4]

; [26Icon]
; MeterStyle=IconStyle
; ImageCrop=-16,-16,32,32,5
; ImageAlpha=255
; ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID4]\Button\Medium\Button.png
; Hidden=0

; [26Arrow]
; MeterStyle=ArrowStyle
; Hidden=0

; ;---

; [27]
; MeterStyle=InfoStyle | CommunityAppStyle
; Hidden=0
; LeftMouseDownAction=[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup CustomAppAll][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID5]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]) "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"]
; Text=[#CustomAppID5]

; [27Icon]
; MeterStyle=IconStyle
; ImageCrop=-16,-16,32,32,5
; ImageAlpha=255
; ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID5]\Button\Medium\Button.png
; Hidden=0

; [27Arrow]
; MeterStyle=ArrowStyle
; Hidden=0