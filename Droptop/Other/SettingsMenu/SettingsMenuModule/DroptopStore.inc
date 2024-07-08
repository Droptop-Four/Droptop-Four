[Rainmeter]

[Variables]
@IncludeFolderSettings=#@#GlobalVar\FolderSettings.inc
@IncludeTopBarPositions=#@#GlobalVar\TopBarPos.inc

DropdownItemPadding1=((#DropdownIconXoffset#)+(#DropdownIconPadding#*2)+#IconW#)
DropdownMenuWidth=((325*#DroptopSize#)-((325*#DroptopSize#)%1))
DropdownItemHeight=(#DropdownItemFontSize#*7)

[IconStyle]
ImageName=
ImageFlip=None

[1Match]
Measure=String
String=Droptop_Store-Bunz
IfMatch=[#CustomAppID1]|[#CustomAppID2]|[#CustomAppID3]|[#CustomAppID4]|[#CustomAppID5]|[#CustomAppID6]|[#CustomAppID7]|[#CustomAppID8]|[#CustomAppID9]|[#CustomAppID10]
IfMatchAction=[!SetOption 1 LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp[#Droptop_Store-Bunz] [#HideAppCustomApp1] "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables HideAppCustomApp1 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID1 "Droptop_Store-Bunz" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppID[#Droptop_Store-Bunz] "[#CustomAppID1]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition 1 "#SKINSPATH#Droptop Community Apps\Apps\Droptop_Store-Bunz\Popout\Config\PopoutConfig.inc"][!WriteKeyValue Variables Droptop_Store-Bunz 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables [#CustomAppID1] [#Droptop_Store-Bunz] "#@#GlobalVar\UserSettings.inc"][!HideGroup ContextBox]#*CloseSettingsMenu*#"""]
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
Container=AnimationContainer

[1Icon]
ImageName=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].Icon]