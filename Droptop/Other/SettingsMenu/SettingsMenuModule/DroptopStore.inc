[Rainmeter]

[Variables]
@IncludeFolderSettings=#@#GlobalVar\FolderSettings.inc
@IncludeTopBarPositions=#@#GlobalVar\TopBarPositions.inc

DropdownItemPadding1=((#DropdownIconPadding#*3)+#IconW#)
DropdownItemHeight=(#DropdownItemFontSize#*7)

[IconStyle]
ImageName=
ImageFlip=None

[1Match]
Measure=String
String=Droptop_Store-Bunz
IfMatch=[#CustomAppID1]|[#CustomAppID2]|[#CustomAppID3]|[#CustomAppID4]|[#CustomAppID5]|[#CustomAppID6]|[#CustomAppID7]|[#CustomAppID8]|[#CustomAppID9]|[#CustomAppID10]
IfMatchAction=[!SetOption 1 LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp[#Droptop_Store-Bunz] [#HideAppCustomApp1] "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables HideAppCustomApp1 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID1 "Droptop_Store-Bunz" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppID[#Droptop_Store-Bunz] "[#CustomAppID1]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables Droptop_Store-Bunz 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables [#CustomAppID1] [#Droptop_Store-Bunz] "#@#GlobalVar\UserSettings.inc"][!HideGroup ContextBox]#*CloseSettingsMenu*#"""]
; IfNotMatchAction=[!SetOption 1 LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex1Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex1Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex1Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex1Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex1Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex1Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
DynamicVariables=1

[HighlightBackground]

[IconCircle]
Meter=Shape
MeterStyle=IconStyle
Shape=Ellipse 0,0,#IconW# | Fill RadialGradient Infill1 | Stroke Color #Lime2#,205 | StrokeWidth (3*#DroptopSize#)
Shape2=Ellipse 0,0,(#IconW#+((3*#DroptopSize#)/2)) | FillColor 0,0,0,0 | Stroke Color 0,55,0,25 | StrokeWidth 1#)
Infill1=0,0 | #Lime2#,55 ; 0.7 | 0,55,0,155 ; 1.0
X=([1Icon:X]+(#IconW#/2))
Y=([1Icon:Y]+(#IconH#/2))
H=1
DynamicVariables=1
Hidden=0

[1Icon]
ImageName=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].Icon]