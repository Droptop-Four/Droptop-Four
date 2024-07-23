[Rainmeter]
OnRefreshAction=[!ShowMeterGroup #MaxItem#][!UpdateMeterGroup #MaxItem#][!Redraw]

[Variables]
;----------------------------------
LuaLoc=#@#Scripts\Lua\DropScroll.lua
;----------------------------------
MaxItem=8

ScrollTracker=#MaxItem#
AboveTotal=1

ContentFade=1

DropdownItemPadding1=#DropdownNoIconPadding#

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]


AppBar.Author=deathcrafter
AppBar.Link=["https://github.com/deathcrafter"]

ScreenBrightness.Author=FlyingHyrax
ScreenBrightness.Link=["https://github.com/FlyingHyrax"]

BatterySaver.Author=KazukiGames82
BatterySaver.Link=["https://github.com/KazukiGames82"]

Chameleon.Author=Socks the Fox
Chameleon.Link=["https://github.com/socks-the-fox"]

FileChoose.Author=Setsukka
FileChoose.Link=["https://forum.rainmeter.net/viewtopic.php?t=33767"]

Focus.Author=deathcrafter
Focus.Link=["https://github.com/deathcrafter"]

FrostedGlass.Author=theAzack9
FrostedGlass.Link=["https://github.com/theAzack9"]

HotInput.Author=deathcrafter
HotInput.Link=["https://github.com/deathcrafter"]

IsFullScreen.Author=jsmorley
IsFullScreen.Link=["https://github.com/jsmorley"]

MonitorBrightness.Author=deathcrafter
MonitorBrightness.Link=["https://github.com/deathcrafter"]

MouseXY.Author=Fawxy
MouseXY.Link=["https://forum.rainmeter.net/viewtopic.php?t=22900"]

PowershellRM.Author=khanhas
PowershellRM.Link=["https://github.com/khanhas"]

SysColor.Author=Brian
SysColor.Link=["https://forum.rainmeter.net/memberlist.php?mode=viewprofile&u=19264"]

WebNowPlaying.Author=keifufu
WebNowPlaying.Link=["https://github.com/keifufu"]

WebView.Author=khanhas
WebView.Link=["https://github.com/khanhas"]

[ScrollCheck]
Measure=Calc
IfCondition=AnalyzeTotal = #ScrollTracker#
IfTrueAction=[!SetOptionGroup Items MouseScrollDownAction """[]"""]
IfFalseAction=[!SetOptionGroup Items MouseScrollDownAction ""]
IfCondition2=#ScrollTracker# = #MaxItem#
IfTrueAction2=[!SetOptionGroup Items MouseScrollUpAction """[]"""]
IfFalseAction2=[!SetOptionGroup Items MouseScrollUpAction ""]
DynamicVariables=1

;----------------------------------------------------
; Measures
;----------------------------------------------------

[mPath]
Measure=Plugin
Plugin=FileView
Path="#@#Scripts\Other\Plugins\64bit"
ShowDotDot=0
SortType=Name
SortAscending=1
SortDateType=
ShowFile=1
ShowFolder=0
ShowSystem=0
ShowHidden=0
HideExtensions=1
;WildCardSearch="**"
;Recursive=0
Count=#MaxItem#
FinishAction=[!UpdateMeterGroup Items][!Redraw]

;----------------------------------------------------

[FileCount]
Measure=Plugin
Plugin=FolderInfo
Folder="[mPath]"
InfoType=FileCount
IncludeHiddenFiles=0
IncludeSubFolders=0
IncludeSystemFiles=0
RegExpFilter=(?i).*.*

[AnalyzeTotal]
Measure=Calc
Formula=FileCount

;----------------------------------------------------

[ScrollTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation
ActionList1=Start1|Wait 100|Start2|Wait 16|Repeat ContentFade,#W#,9|Wait 16|Finish
Start1=
Start2=[!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]
ContentFade=[!SetVariable ContentFade "(Clamp([#ContentFade]+0.1,0,1))"]#U#
Finish=[!SetVariable ContentFade 1][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]#U#
DynamicVariables=1
IgnoreWarnings=1

;---

[1]
Y=((#DropdownIconYoffset#+([#CURRENTSECTION#:H]/2))-((#DropdownIconYoffset#+([#CURRENTSECTION#:H]/2))%1)+#DropdownItemYOffset#)

;----------------------------------------------------
; Name & Icon measures
;----------------------------------------------------

;----------------------------------------------------
; Index 1

[mIndex1Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=1
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 2

[mIndex2Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 3

[mIndex3Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 4

[mIndex4Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 5

[mIndex5Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 6

[mIndex6Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=6
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 7

[mIndex7Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=7
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 8

[mIndex8Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=8
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 9

[mIndex9Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=9
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Index 10

[mIndex10Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=10
Substitute=
RegExpSubstitute=1
DynamicVariables=1

;----------------------------------------------------
; Item Names
;----------------------------------------------------

[InfoStyle]
MeasureName=mIndex#CURRENTSECTION#Name
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ContentFade#)
Postfix=" by [#[&mIndex[#CURRENTSECTION]Name].Author]"
LeftMouseDownAction=#CloseSettingsMenu#[#[&mIndex[#CURRENTSECTION]Name].Link]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter FolderBlock][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!EnableMouseActionGroup "MouseOverAction" Items][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!HideMeterGroup Highlight][!Redraw]
MouseScrollUpAction=[!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!CommandMeasure mPath "PageUp"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!Delay 10][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
MouseScrollDownAction=[!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!CommandMeasure mPath "PageDown"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!Delay 10][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
AntiAlias=1

[IconStyle]
ImageName=
; #@#Icons\Fixed\Large\Flags\[&mIndex[##CURRENTSECTION#]Name].png
ImageAlpha=#DropdownItemOpacity#
;----------------------------------------------------
; Scrollbar
;----------------------------------------------------

[ScrollUpButton]
Meter=Shape
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1),((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3),#DropdownBGCorner# | StrokeWidth 0 | Extend FillColor
Shape2=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 1 | Rotate 45 | Extend ArrowColor
Shape3=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)+(8*#DroptopSize#)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 0 | Rotate 45 | Fill Color 255,55,55
Shape4=Combine Shape2 | Exclude Shape3
FillColor=Fill Color 0,0,0,0
ArrowColor=Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
X=(#DropdownMenuWidth#-#DropdownStrokeWidth#-1)
Y=2
MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption [#CurrentSubFolder]Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder]Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder] FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder]Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!UpdateMeter [#CurrentSubFolder]Icon][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
; LeftMouseUpAction=[!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker ([#ScrollTracker]-([#ScrollTracker]-[#MaxItem]<=[#MaxItem]?([#ScrollTracker]-[#MaxItem]):[#MaxItem]))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-[#MaxItem])][!HideGroup Folder02][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!CommandMeasure ScrollTimer "Stop 2"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
LeftMouseUpAction=[!SetVariable ContentFade 0.1][!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker ([#ScrollTracker]-([#ScrollTracker]-[#MaxItem]<=[#MaxItem]?([#ScrollTracker]-[#MaxItem]):[#MaxItem]))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-[#MaxItem])][!HideGroup Folder02][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
Group=ScrollBar | Items
Container=AnimationContainer

[ScrollDownButton]
Meter=Shape
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1),((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3),#DropdownBGCorner# | StrokeWidth 0 | Extend FillColor
Shape2=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 1 | Rotate 45 | Extend ArrowColor
Shape3=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)-(8*#DroptopSize#)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 0 | Rotate 45 | Fill Color 255,55,55
Shape4=Combine Shape2 | Exclude Shape3
FillColor=Fill Color 0,0,0,0
ArrowColor=Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
X=r
Y=R
MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption [#CurrentSubFolder]Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder]Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder] FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder]Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!UpdateMeter [#CurrentSubFolder]Icon][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
LeftMouseUpAction=[!SetVariable ContentFade 0.1][!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker ([#ScrollTracker]+([&AnalyzeTotal]>[#MaxItem]?([#ScrollTracker]+[#MaxItem]>=[&AnalyzeTotal]?([&AnalyzeTotal]-[#ScrollTracker]):[#MaxItem]):0))][!CommandMeasure ScrollbarScript UpdateCurrentPos([#MaxItem])][!HideGroup Folder02][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
Group=ScrollBar | Items
Container=AnimationContainer

[ScrollbarTop]
Meter=Image
X=3
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-1)
UpdateDivider=-1
Container=AnimationContainer

[Size]
Measure=Calc
Formula=((#DropdownItemHeight#*#MaxItem#)-#DropdownIconYoffset#)
UpdateDivider=-1
Group=Scrollbar

[ScrollH]
Measure=Calc
Formula=Size * (#MaxItem# / (AnalyzeTotal = 0 ? 1 : AnalyzeTotal))
Group=Scrollbar

[ScrollbarScript]
Measure=Script
ScriptFile=#LuaLoc#
UpdateDivider=-1

[CurrentPos]
Meter=Shape
Shape=Rectangle 0,0,(3*#DroptopSize#),([ScrollH]<1?1:[ScrollH]),2 | Fill Color #DropdownFontColor1#,155 | StrokeWidth 0 | StrokeColor #DropdownBGColor1#,55
X=(#DropdownMenuWidth#-(3*#DroptopSize#)-(#DropdownStrokeWidth#/2))
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+1)
DynamicVariables=1
Group=ScrollBar | Items
Container=AnimationContainer