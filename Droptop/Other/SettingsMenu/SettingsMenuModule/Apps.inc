[Rainmeter]
SkinHeight=((#DropdownMenuCutout#*3)+((3*#DroptopSize#)*2)+((#DropdownItemHeight#*(((#HideAppCustomApp1#+#HideAppCustomApp2#+#HideAppCustomApp3#+#HideAppCustomApp4#+#HideAppCustomApp5#+#HideAppCustomApp6#+#HideAppCustomApp7#+#HideAppCustomApp8#+#HideAppCustomApp9#+#HideAppCustomApp10#)-10)*-1))+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+((#DropdownItemHeight#*1)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownStrokeWidth#*3))
MouseLeaveAction=#ResetActiveFolders#[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable FolderMode 0]

[Variables]
@IncludeFolderSettings=#@#GlobalVar\FolderSettings.inc
@IncludeTopBarPositions=#@#GlobalVar\TopBarPos.inc

CurrentFolder=5

CommunityApp13=[#*CustomAppID1*]
CommunityApp14=[#*CustomAppID2*]
CommunityApp15=[#*CustomAppID3*]
CommunityApp16=[#*CustomAppID4*]
CommunityApp17=[#*CustomAppID5*]
CommunityApp18=[#*CustomAppID6*]
CommunityApp19=[#*CustomAppID7*]
CommunityApp20=[#*CustomAppID8*]
CommunityApp21=[#*CustomAppID9*]
CommunityApp22=[#*CustomAppID10*]

CommunityAppNum13=1
CommunityAppNum14=2
CommunityAppNum15=3
CommunityAppNum16=4
CommunityAppNum17=5
CommunityAppNum18=6
CommunityAppNum19=7
CommunityAppNum20=8
CommunityAppNum21=9
CommunityAppNum22=10

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

[MeasureAppName6]
Measure=String
String=[#CustomAppID6]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName7]
Measure=String
String=[#CustomAppID7]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName8]
Measure=String
String=[#CustomAppID8]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName9]
Measure=String
String=[#CustomAppID9]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName10]
Measure=String
String=[#CustomAppID10]
Substitute="_":" ","-":" - "
DynamicVariables=1

[DisabledApp]
ImageAlpha=(#DropdownItemOpacity#/3)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[]
FillColor=Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/3)

[AnimationContainer]
Shape=Rectangle #DropdownMenuCutout#,0,((#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2))*#ActionTimer.StartAnimation#),((#DropdownMenuCutout#*2)+((#DropdownItemHeight#*1)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+((3*#DroptopSize#)*2)+((#DropdownItemHeight#*(((#HideAppCustomApp1#+#HideAppCustomApp2#+#HideAppCustomApp3#+#HideAppCustomApp4#+#HideAppCustomApp5#+#HideAppCustomApp6#+#HideAppCustomApp7#+#HideAppCustomApp8#+#HideAppCustomApp9#+#HideAppCustomApp10#)-10)*-1))+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2))),#DropdownBGCorner# | Fill Color 255,255,255,(255*#ActionTimer.StartAnimation#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color 255,255,255,(255*#ActionTimer.StartAnimation#)

[Background3]
Meter=Shape
MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*10+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),((#DropdownItemHeight#*1)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
; Y=([Background:YH]+(3*#DroptopSize#))
; MouseOverAction=[!SetVariable FolderMode 1]
; MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1
Container=AnimationContainer

[Background2]
Meter=Shape
MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*10+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),((#DropdownItemHeight#*(((#HideAppCustomApp1#+#HideAppCustomApp2#+#HideAppCustomApp3#+#HideAppCustomApp4#+#HideAppCustomApp5#+#HideAppCustomApp6#+#HideAppCustomApp7#+#HideAppCustomApp8#+#HideAppCustomApp9#+#HideAppCustomApp10#)-10)*-1))+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Y=([Background3:YH]+(3*#DroptopSize#))
; MouseOverAction=[!SetVariable FolderMode 1]
; MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1
Container=AnimationContainer

[Background]
Y=([Background2:YH]+(3*#DroptopSize#))

;---

[CommunityAppStyle0]
; MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable FolderMode 1][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentComApp [#CommunityApp[#CURRENTSECTION]]][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"][!CommandMeasure MeasureActionTimer "Execute 3"]

MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable FolderMode 1][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentComApp [#CommunityApp[#CURRENTSECTION]]][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"][!CommandMeasure MeasureActionTimer "Execute 3"]

[CommunityAppStyle1]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[!SetVariable FolderMode 0][!DisableMouseAction #CURRENTSECTION# "LeftMouseDownAction"]
MouseLeaveAction=[!EnableMouseAction #CURRENTSECTION# "LeftMouseDownAction"]

[DisabledComApp0]
ImageAlpha=255
Hidden=0

[DisabledComApp1]
ImageAlpha=(#DropdownItemOpacity#/3)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[]
FillColor=Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/3)
Hidden=1

[0]
Meter=String
MeterStyle=InfoStyle
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
Text=#Context3Item1#
LeftMouseDownAction=[!CommandMeasure Focus "Droptop\DropdownBar" "Droptop\Other\BackgroundProcesses"][!HideGroup PopupMenu][!DeactivateConfigGroup PopupMenu][!SetVariable ActiveFolder 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][#PowerMenuActionTimer[#PowerMenuLoadState]][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!HideGroup ContextBox][!HideGroup SM1][!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!ActivateConfig "Droptop\DropdownBar\Other\ContextBox" "ContextBox3.ini"][!SetWindowPosition "#DropdownContextMenuYOffset#" "#TopHeight#+#DropdownContextMenuYOffset#" "0%" "0%" "Droptop\DropdownBar\Other\ContextBox"][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!Redraw "Droptop\DropdownBar"][!#Show# "Droptop\DropdownBar\Other\ContextBox"]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageAlpha "#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 3"]
Hidden=0

[0Icon]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\#IconSize#\apps.png
ImageAlpha=#DropdownItemOpacity#
Y=[0:Y]
Hidden=0

[13]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp1]
Y=([Background2:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#))
; Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
; LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID1]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Refresh "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID1]\Settings" "Settings.ini"][!Redraw][!Delay 105][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!CommandMeasure MeasureActionTimer "Stop 3" "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 3" "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"]
Text=[MeasureAppName1]
Hidden=#HideAppCustomApp1#

[13Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp1]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID1]\Button\Medium\Button.png
Y=[13:Y]

[13Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp1]
Y=[13:Y]
Hidden=#HideAppCustomApp1#

;---

[14]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp2]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID2]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"]
Text=[MeasureAppName2]
Hidden=#HideAppCustomApp2#

[14Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp2]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID2]\Button\Medium\Button.png

[14Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp2]
Hidden=#HideAppCustomApp2#

;---

[15]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp3]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID3]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"]
Text=[MeasureAppName3]
Hidden=#HideAppCustomApp3#

[15Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp3]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID3]\Button\Medium\Button.png

[15Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp3]
Hidden=#HideAppCustomApp3#

;---

[16]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp4]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID4]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"]
Text=[MeasureAppName4]
Hidden=#HideAppCustomApp4#

[16Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp4]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID4]\Button\Medium\Button.png

[16Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp4]
Hidden=#HideAppCustomApp4#

;---

[17]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp5]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID5]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"]
Text=[MeasureAppName5]
Hidden=#HideAppCustomApp5#

[17Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp5]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID5]\Button\Medium\Button.png

[17Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp5]
Hidden=#HideAppCustomApp5#

;---

[18]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp6]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID6]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID6]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID6]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID6]\Settings"]
Text=[MeasureAppName6]
Hidden=#HideAppCustomApp6#

[18Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp6]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID6]\Button\Medium\Button.png

[18Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp6]
Hidden=#HideAppCustomApp6#

;---

[19]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp7]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID7]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID7]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID7]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID7]\Settings"]
Text=[MeasureAppName7]
Hidden=#HideAppCustomApp7#

[19Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp7]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID7]\Button\Medium\Button.png

[19Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp7]
Hidden=#HideAppCustomApp7#

;---

[20]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp8]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID8]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID8]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID8]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID8]\Settings"]
Text=[MeasureAppName8]
Hidden=#HideAppCustomApp8#

[20Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp8]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID8]\Button\Medium\Button.png

[20Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp8]
Hidden=#HideAppCustomApp8#

;---

[21]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp9]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID9]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID9]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID9]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID9]\Settings"]
Text=[MeasureAppName9]
Hidden=#HideAppCustomApp9#

[21Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp9]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID9]\Button\Medium\Button.png

[21Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp9]
Hidden=#HideAppCustomApp9#

;---

[22]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp10]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID10]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID10]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID10]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID10]\Settings"]
Text=[MeasureAppName10]
Hidden=#HideAppCustomApp10#

[22Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp10]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID10]\Button\Medium\Button.png

[22Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp10]
Hidden=#HideAppCustomApp10#

;---

[1]
MeterStyle=InfoStyle
Y=([Background:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#))
DynamicVariables=1
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[1Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Y=[1:Y]
Group=None
[1Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[2]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[2Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[2Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[3]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[3Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[3Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[4]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[4Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[4Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[5]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[5Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[5Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[6]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[6Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[6Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[7]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[7Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[7Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[8]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[8Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[8Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[9]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[9Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[9Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[10]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[10Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[10Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[11]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[11Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[11Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

[12]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[12Icon]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None
[12Arrow]
Hidden=[#HideApp[#SideAppName[##CURRENTSECTION#]]]
Group=None

; Dummy
[0Arrow]
Meter=String
Hidden=1
