[Rainmeter]
OnRefreshAction=[!ShowMeterGroup [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount]][!ShowMeterGroup F[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]][!ShowMeterGroup D[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]DividerCount]][!Redraw]

[Variables]

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

HomeImageName0=#SKINSPATH#Droptop Folders\Other files\Home\Button[#HomeColorB[#*HomeColorNum*]][#HomeColorShadow[#*HomeColorNum*]].png
HomeImageName1=#@#TopImages\Home\#TopIconWH#\Column[#*HomeColumn*][#HomeColorShadow[#*HomeColorNum*]]\Home[#*HomeRow*][#*HomeColorNum*]

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*(#NumberOfItems#+0)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
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

[VersionStyle0]
Text="#SettingsVersion# (Basic)"
FontColor=#DropdownFontColor1#,128
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
ImageName=#@#Icons\Fixed\#IconSize#\merge.png
ImageAlpha=128

[VersionStyle1]
Text="#SettingsVersion#  🤍"
FontColor=#DropdownFontColor1#,128
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
ImageName=#@#Icons\Fixed\#IconSize#\merge.png
ImageAlpha=128

[FolderBlock]
; SolidColor=255,55,55,55
H=(#DropdownItemHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*2)+(#DividerSpace#*4))

; [IconStyleB]
; ImageAlpha=125
; GreyScale=0
; Hidden=0
; LeftMouseDownAction=[]
; MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
; X=(-[#CURRENTSECTION#:W])r
; Y=r

[FunctionIconStyle]
ImageAlpha=125
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Hidden=0
X=(-[#CURRENTSECTION#:W])r
Y=r
W=#IconW#
H=#IconH#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[FunctionIcon.1]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\windows[#Win10Apps].png
LeftMouseDownAction=#CloseSettingsMenu#["#@#Scripts\DroptopAHK.#AHKType#" "StartMenu"]
X=#DropdownIconXoffset#
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
ImageFlip=None
; ToolTipTitle=Windows Start Menu
; ToolTipText=Opens Windows start menu
ToolTipHidden=0

[FunctionIcon.2]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\taskview.png
LeftMouseDownAction=#CloseSettingsMenu#["#@#Scripts\DroptopAHK.#AHKType#" "TaskView"]
X=R
ImageFlip=None
; ToolTipTitle=Taskview
; ToolTipText=Opens Windows taskview
ToolTipHidden=0

[FunctionIcon.3]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\lock.png
X=(#DropdownMenuWidth#-(35*#DroptopSize#)-#DropdownStrokeWidth#-#DropdownHLOffsetX#)
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogLock.ini"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
ImageFlip=None
; ToolTipTitle=Lock
; ToolTipText=Lock your PC
ToolTipHidden=0

[FunctionIcon.5]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\sleep.png
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogSleep.ini"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
SettingsMenu1.1.12.Icon=#@#Icons\Fixed\#IconSize#\sleep.png
ImageFlip=None
; ToolTipTitle=Sleep
; ToolTipText=Enter sleep mode
ToolTipHidden=0

[FunctionIcon.6]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\restart.png
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogRestart.ini"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
ImageFlip=None
; ToolTipTitle=Restart
; ToolTipText=Restart your PC
ToolTipHidden=0

[FunctionIcon.7]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\shutdown.png
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogShutdown.ini"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
ImageFlip=None
; ToolTipTitle=Shutdown
; ToolTipText=Shutdown your PC
ToolTipHidden=0

[FunctionIcon.8]
Meter=Image
MeterStyle=IconStyle | FunctionIconStyle
ImageName=#@#Icons\Fixed\#IconSize#\logoff.png
LeftMouseDownAction=#CloseSettingsMenu#[!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!ActivateConfig "Droptop\Other\PowerMenu" "DialogLogoff.ini"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Move [#CURRENTCONFIGX] (([#CURRENTCONFIGY]+#TopBarContentXOffset#)-(1*#DroptopSize#)) "Droptop\Other\PowerMenu"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"]
ImageFlip=None
; ToolTipTitle=Logoff
; ToolTipText=Logoff PC
ToolTipHidden=0

[Divider0]
Meter=Shape
Shape=#DividerShape#
Group=D1 | D2 | D3 | D4 | D5
Hidden=1
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[Divider3]
Group=

[1]
StringAlign=LeftCenter
X=1
Padding=[#Padding0B]
; MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetOption HighlightBackground Shape "Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HighlightBackgroundGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#*ActionTimer.HLFadeIn*#)"][!SetOption HighlightBackground Shape4 "Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HighlightBackgroundGradientSolidColor | StrokeWidth 0"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetOption HighlightBackground Shape "Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLColorGradientHome | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#*ActionTimer.HLFadeIn*#)"][!SetOption HighlightBackground Shape4 "Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,0 | StrokeWidth 0 | Stroke Color 0,0,0,0][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 3"]
; MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption HighlightBackground Shape "Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#*ActionTimer.HLFadeIn*#)"][!SetOption HighlightBackground Shape4 "Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#*ActionTimer.HLFadeIn*#) | StrokeWidth 0"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption HighlightBackground Shape "Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#*ActionTimer.HLFadeIn*#)"][!SetOption HighlightBackground Shape4 "Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#*ActionTimer.HLFadeIn*#) | StrokeWidth 0 | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#*ActionTimer.HLFadeIn*#)][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+#DropdownItemHeight#+(#DividerSpace#*2))

[1Icon]
X=#DropdownIconXoffset#
Y=[1:Y]

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*2)-(#DividerHeight#/2))

[2]
Y=(#DividerSpace#*2)R

[2Icon]
Y=(#DividerSpace#*2)R

[2Arrow]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*2)+(#DividerSpace#*4))

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*5)+(#DropdownItemHeight#*10)-(#DividerHeight#/2))

[10]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable FolderMode 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlockB][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetVariable FolderMode 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
Y=(#DividerSpace#*2)R

[10Arrow]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*10)+(#DividerSpace#*6))
Hidden=0
DynamicVariables=1

[10Icon]
Y=(#DividerSpace#*2)R

[11]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable FolderMode 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlockB][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetVariable FolderMode 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetVariable ExitDroptopNum 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]

[11Arrow]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*11)+(#DividerSpace#*6))
Hidden=0
DynamicVariables=1

[FolderBlockB]
Meter=Image
X=1
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*10)+(#DividerSpace#*6))
W=#DropdownMenuWidth#
H=(#DropdownItemHeight#*2)
LeftMouseDownAction=#ResetActiveFolders#[!SetTransparencyGroup 0 SM[NextBlock]][!Hide "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!ShowMeter HighlightSelected][!WriteKeyValue Variables SettingsMenuNumber "#SettingsMenuNumber#.#CurrentFolder#" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuIndex#SettingsMenuBlock# #CurrentFolder# "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex #CurrentFolder# "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!Delay 105][!#Show# "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!UpdateMeter HighlightSelected][!Redraw]

DynamicVariables=1
Group=Items

[11Icon]

[12]
Meter=String
MeterStyle=InfoStyle | VersionStyle#Supporter#

[12Icon]
MeterStyle=IconStyle | VersionStyle#Supporter#

[13]
FontColor=0,0,0,0
MouseOverAction=[]
MouseLeaveAction=[]
Y=0

[13Icon]
ImageAlpha=0
Y=0

[IconStyleB]
ImageAlpha=125
GreyScale=0
Hidden=0
LeftMouseDownAction=[]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(-[#CURRENTSECTION#:W])r
Y=r

[1Icon.1]
Meter=Image
MeterStyle=IconStyle | IconStyleB
ImageTint=[#HomeColor[#HomeColorNum]]
ImageFlip=None
LeftMouseDownAction=[!SetOption #CURRENTSECTION# ImageFlip [#Roll[&RandomRoll]]][!SetVariable CustomHomeButton 0][!SetVariable CustomHomeButton [#CustomHomeButton] "Droptop\DropdownBar"][!WriteKeyValue Variables CustomHomeButton [#CustomHomeButton] "#@#GlobalVar\UserSettings.inc"][!SetVariable HomeColumn [RandomColumn]][!SetVariable HomeColumn [RandomColumn] "Droptop\DropdownBar"][!WriteKeyValue Variables HomeColumn [RandomColumn] "#@#GlobalVar\UserSettings.inc"][!SetVariable HomeRow [RandomRow]][!SetVariable HomeRow [RandomRow] "Droptop\DropdownBar"][!WriteKeyValue Variables HomeRow [RandomRow] "#@#GlobalVar\UserSettings.inc"][!UpdateMeasureGroup RandomHome][!UpdateMeter *][!UpdateMeter Home "Droptop\DropdownBar"][!UpdateMeter WinButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw]
ImageName=#@#Icons\Fixed\#IconSize#\dice[#HomeColorNum].png
X=(#DropdownMenuWidth#-(35*#DroptopSize#)-#DropdownStrokeWidth#-#DropdownHLOffsetX#)
Y=[1:Y]

[1Icon.2]
Meter=Image
MeterStyle=IconStyle | IconStyleB
ImageTint=[#HomeColor[#HomeColorNum]]
LeftMouseDownAction=[!DeactivateConfig "Droptop\DropdownBar\Other\HomeIconSelector"][!SetVariable HomeColorNum (#HomeColorNum#=0?1:0)][!SetVariable HomeColorNum [#HomeColorNum] "Droptop\DropdownBar"][!WriteKeyValue Variables HomeColorNum [#HomeColorNum] "#@#GlobalVar\UserSettings.inc"][!SetOption Home ImageTint "[#HomeButtonColor[#*HomeColorNum*]]" "Droptop\DropdownBar"][!SetOption WinButton ImageTint "[#HomeButtonColor[#*HomeColorNum*]]" "Droptop\DropdownBar"][!UpdateMeter *][!UpdateMeter Home "Droptop\DropdownBar"][!UpdateMeter WinButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw]
ImageName=#@#Icons\Fixed\#IconSize#\palette#HomeColorNum#.png
ImageFlip=None

[1Icon.3]
Meter=Image
MeterStyle=IconStyle | IconStyleB
ImageTint=[#HomeColor[#HomeColorNum]]
W=#IconW#
H=#IconH#
LeftMouseDownAction=#CloseSettingsMenu#[!CommandMeasure FileChoose "ChooseImage 1" "Droptop\DropdownBar"]
MiddleMouseDoubleClickAction=#CloseSettingsMenu#[!CommandMeasure FileChoose "ChooseImage 6" "Droptop\DropdownBar"]
ImageName=#@#Icons\Fixed\#IconSize#\plus#HomeColorNum#.png
ImageFlip=None

[1Icon.4]
Meter=Image
MeterStyle=IconStyle | IconStyleB
ImageTint=[#HomeColor[#HomeColorNum]]
Padding=0,0,0,0
ImageCrop=-25,-24,48,50,5
H=#DropdownItemHeight#
W=
PreserveAspectRatio=1
LeftMouseDownAction=[!SetVariable CustomHomeButton (#CustomHomeButton#=1?0:1)][!SetVariable CustomHomeButton [#CustomHomeButton] "Droptop\DropdownBar"][!WriteKeyValue Variables CustomHomeButton [#CustomHomeButton] "#@#GlobalVar\UserSettings.inc"][!UpdateMeter *][!UpdateMeter Home "Droptop\DropdownBar"][!UpdateMeter WinButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw]
ImageName=[#HomeImageName[#CustomHomeButton]]
; ImageName=#SKINSPATH#Droptop Folders\Other files\Home\Button[#HomeColorB[#HomeColorNum]][#HomeColorShadow[#HomeColorNum]].png
DynamicVariables=1
ImageFlip=None


[1Arrow]
Shape=

[9Arrow]
Hidden=0

; [ApplyBox]
; Meter=Shape
; MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(2*#DroptopSize#)),(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),((38*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
; Shape2=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(2*#DroptopSize#)),(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),((38*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Extend HLColor
; HLColor=Fill Color #DropdownItemHL#,0 | StrokeWidth 0
; X=0
; Y=([Background:YH]+1)
; LeftMouseDownAction=[!HideGroup ContextBox][!HideGroup SettingsMenu][!HideGroup Submenus][!Zpos 0 "Droptop\Other\WindowMenu"][!ToggleConfig "Droptop\Other\WindowMenu" "FunctionSetting.ini"][!SetWindowPosition 50%[#DroptopDisplayMonitor] 50%[#DroptopDisplayMonitor] "50%" "50%" "Droptop\Other\WindowMenu"]
; MouseOverAction=[!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,(#*HighlightShapeOpacity*#/#HighlightShapeOpacityDivisor1B#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #*DropdownStrokeColor*#,#*DropdownStrokeOpacity*#"""][!SetOption ApplyBoxText FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeterGroup ApplyBox][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,0 | StrokeWidth 0"""][!SetOption ApplyBoxText FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeterGroup ApplyBox][!Redraw]
; DynamicVariables=1
; Group=ApplyBox
; Hidden=1

; [ApplyBoxText]
; Meter=String
; StringAlign=LeftCenter
; MeterStyle=InfoStyle
; FontSize=((#DropdownItemFontSize#)+(1*#DroptopSize#))
; Padding=(10*#DroptopSize#),0,0,0
; X=[ApplyBox:X]
; Y=(([ApplyBox:Y]+(#DropdownMenuCutout#+(2*#DroptopSize#))+(((38*#DroptopSize#)-(#DropdownMenuCutout#*2))/2))+(([ApplyBox:Y]+(#DropdownMenuCutout#+(2*#DroptopSize#))+(((38*#DroptopSize#)-(#DropdownMenuCutout#*2))/2))%1)+#DropdownItemPaddingY#)
; W=(#DropdownMenuWidth#-(60*#DroptopSize#))
; Text="Apply changes..."
; LeftMouseDownAction=
; MouseOverAction=[]
; MouseLeaveAction=[]
; DynamicVariables=1
; AntiAlias=1
; ClipString=1
; Group=ApplyBox
; Hidden=1
