[Rainmeter]
OnRefreshAction=[!SetOptionGroup [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount] MeterStyle "IconStyle"][!SetOptionGroup Items MeterStyle "InfoStyle"][!ShowMeterGroup [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount]][!ShowMeterGroup F[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]][!ShowMeterGroup D[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]DividerCount]][!UpdateMeter *][!Redraw]
; OnRefreshAction=[!ShowMeterGroup [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount]][!ShowMeterGroup F[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]][!ShowMeterGroup D[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]DividerCount]][!UpdateMeter *][!Redraw]
; OnRefreshAction=[!ShowMeterGroup [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount]][!ShowMeterGroup F[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]][!ShowMeterGroup D[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]DividerCount]][!Delay 200][!CommandMeasure MeasureActionTimer "Execute 4" "Droptop\Other\SettingsMenu\SettingsMenu2"]

[Variables]
ShutdownType0=[!SetOption RunCommand.Dynamic Parameter "slidetoshutdown.exe" "Droptop\DropdownBar"][!UpdateMeasure RunCommand.Dynamic "Droptop\DropdownBar"][!HideMeterGroup ButtonBG][!CommandMeasure MeasureActionTimer "Execute 2"][!Delay 200][!CommandMeasure RunCommand.Dynamic "Run" "Droptop\DropdownBar"][!DeactivateConfig]
ShutdownType1=[!ActivateConfig "Droptop\Other\PowerMenu" "DialogShutdown.ini"]

ActionTimer.StartAnimation=1

1Icon.1=1
1Icon.2=2
1Icon.3=3
1Icon.4=3

Roll0=None
Roll1=Horizontal
Roll2=Vertical
Roll3=Both

HomeColor0=[#*DropdownFontColor1*]
HomeColor1=255,255,255

HomeColorB0=
HomeColorB1=Color

HomeColorShadow0=
HomeColorShadow1=S

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*(#NumberOfItems#+0)+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:((#DropdownMenuOpacity1#*(#DropdownMenuBlur#=1?[#MicaEnabled[#UseMicaBlur][#Win10Apps]]:1))+1))) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
DynamicVariables=1

[RandomRoll]
Measure=Calc
Formula=Random
LowBound=0
HighBound=3
Group=RandomHome
UniqueRandom=1
DynamicVariables=1

[RandomColumn]
Measure=Calc
Formula=Random
LowBound=0
HighBound=(#Supporter#=1?19:0)
Group=RandomHome
UniqueRandom=1
DynamicVariables=1

[RandomRow]
Measure=Calc
Formula=Random
LowBound=0
HighBound=(#Supporter#=1?14:6)
Group=RandomHome
UniqueRandom=1
DynamicVariables=1

[RunCommand.Restart]
Measure=Plugin
Plugin=RunCommand
Parameter=taskkill /f /im "Rainmeter.exe" && start "" "#PROGRAMPATH#Rainmeter.exe"
State=Hide
OutputType=ANSI
OutputFile=

[VersionStyle00]
Text="#SettingsVersion# (Basic)"
FontColor=#DropdownFontColor1#,128
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
ImageName=#@#Icons\Fixed\#IconSize#\merge.png
ImageAlpha=128

[VersionStyle10]
Text="#SettingsVersion#  🤍"
FontColor=#DropdownFontColor1#,128
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
ImageName=#@#Icons\Fixed\#IconSize#\merge.png
ImageAlpha=128

[VersionStyle01]
Text="#SettingsVersion# (Basic/Beta)"
FontColor=#DropdownFontColor1#,128
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
ImageName=#@#Icons\Fixed\#IconSize#\merge.png
ImageAlpha=128

[VersionStyle11]
Text="#SettingsVersion#  🤍 (Beta)"
FontColor=#DropdownFontColor1#,128
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
ImageName=#@#Icons\Fixed\#IconSize#\merge.png
ImageAlpha=128

[FolderBlock]
H=(#DropdownItemHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*1)+(#DividerSpace#*2))

[FunctionIconStyle]
ImageAlpha=125
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Hidden=0
X=(-[#CURRENTSECTION#:W])r
Y=r
W=#IconW#
H=#IconH#
MaskImagePath=
MaskImageName=
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[FunctionIcon.1]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\windows[#Win10Apps].png
LeftMouseDownAction=#CloseSettingsMenu#["#@#Scripts\DroptopAHK.#AHKType#" "StartMenu"]
X=#DropdownIconXoffset#
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1)
ImageFlip=None
Group=None

[FunctionIcon.2]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\taskview.png
LeftMouseDownAction=#CloseSettingsMenu#["#@#Scripts\DroptopAHK.#AHKType#" "TaskView"]
X=R
ImageFlip=None
Group=None

[FunctionIcon.3]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\lock.png
X=(#DropdownMenuWidth#-(35*#DroptopSize#)-#DropdownStrokeWidth#-#DropdownHLOffsetX#)
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogLock.ini"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
ImageFlip=None
Group=None

[FunctionIcon.5]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\sleep.png
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogSleep.ini"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
SettingsMenu1.1.12.Icon=#@#Icons\Fixed\#IconSize#\sleep.png
ImageFlip=None
Group=None

[FunctionIcon.6]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\restart.png
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogRestart.ini"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
ImageFlip=None
Group=None

[FunctionIcon.7]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\shutdown.png
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][#ShutdownType[#DeviceIsNotTouch]][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
ImageFlip=None
Group=None

[FunctionIcon.8]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\logoff.png
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogLogoff.ini"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
ImageFlip=None
Group=None

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[1]
StringAlign=LeftCenter
X=1
Padding=[#Padding0B]
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+#DropdownItemHeight#+(#DividerSpace#*2))

[1Icon]
X=#DropdownIconXoffset#
Y=[1:Y]

[2]

[2Icon]

[2Arrow]

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*10)-(#DividerHeight#/2))

[10]
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable FolderMode 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlockB][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
; MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetVariable FolderMode 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
Y=(#DividerSpace#*2)R

[10Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*10)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[10Icon]
Y=(#DividerSpace#*2)R

[11]
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable FolderMode 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlockB][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
; MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetVariable FolderMode 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]

[11Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*11)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[FolderBlockB]
Meter=Image
X=1
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*10)+(#DividerSpace#*4))
W=#DropdownMenuWidth#
H=(#DropdownItemHeight#*2)
LeftMouseDownAction=#ResetActiveFolders#[!SetTransparencyGroup 0 SM[NextBlock]][!Hide "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[#CurrentFolder#:Y]-(#DropdownIconYOffset#+#DropdownItemYOffset#+1)) "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!ShowMeter HighlightSelected][!WriteKeyValue Variables SettingsMenuNumber "#SettingsMenuNumber#.#CurrentFolder#" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuIndex#SettingsMenuBlock# #CurrentFolder# "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex #CurrentFolder# "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYOffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!Delay 105][!ShowFade "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!UpdateMeter HighlightSelected][!Redraw]
DynamicVariables=1
Group=Items

[11Icon]

[12]
Meter=String
MeterStyle=InfoStyle | VersionStyle#Supporter##DroptopIsBeta#
Hidden=0
Group=None

[12Icon]
MeterStyle=IconStyle | VersionStyle#Supporter##DroptopIsBeta#
ImageAlpha=(#DropdownItemOpacity#/2)
Hidden=0
Group=None

[13]
FontColor=0,0,0,0
MouseOverAction=[]
MouseLeaveAction=[]
Y=0

[13Icon]
ImageAlpha=0
Y=0
