[Rainmeter]
OnRefreshAction=[!ShowMeterGroup #MaxItem#][!UpdateMeterGroup #MaxItem#][!UpdateMeasureGroup ScrollBar][!UpdateMeterGroup ScrollBar]

[Variables]
;----------------------------------
LuaLoc=#@#Scripts\Lua\DropScroll.lua
;----------------------------------
MaxItem=5

ScrollTracker=#MaxItem#
AboveTotal=1

ContentFade=1

DropdownMenuWidth=((325*#DroptopSize#)-((325*#DroptopSize#)%1))
DropdownItemHeight=((50*#DroptopSize#)-((50*#DroptopSize#)%1))
DropdownItemPaddingY=0
DropdownItemPadding1=(62*#DroptopSize#)

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]

IconW=(32*#DroptopSize#)
IconH=(32*#DroptopSize#)

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
Path="#@#GlobalVar\Languages"
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
ContentFade=[!SetVariable ContentFade "(Clamp(#ContentFade#+0.1,0,1))"]#U#
Finish=[!SetVariable ContentFade 1][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]#U#
DynamicVariables=1
IgnoreWarnings=1

;---

[1]
Y=((#DropdownIconYOffset#+([#CURRENTSECTION#:H]/2))-((#DropdownIconYOffset#+([#CURRENTSECTION#:H]/2))%1)+#DropdownItemYOffset#)

[1Icon]
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\Large\Flags\[&mIndex[##CURRENTSECTION#]Name].png

[2Icon]
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\Large\Flags\[&mIndex[##CURRENTSECTION#]Name].png

[3Icon]
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\Large\Flags\[&mIndex[##CURRENTSECTION#]Name].png

[4Icon]
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\Large\Flags\[&mIndex[##CURRENTSECTION#]Name].png

[5Icon]
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\Large\Flags\[&mIndex[##CURRENTSECTION#]Name].png

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
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex1Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=1
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionC#

;----------------------------------------------------
; Index 2

[mIndex2Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex2Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionC#

;----------------------------------------------------
; Index 3

[mIndex3Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex3Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionC#

;----------------------------------------------------
; Index 4

[mIndex4Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex4Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionC#

;----------------------------------------------------
; Index 5

[mIndex5Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex5Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionC#

;----------------------------------------------------
; Item Names
;----------------------------------------------------

[InfoStyle]
InlinePattern3="..-.. \| "
InlineSetting3=Face | Fira Code
MeasureName=mIndex#CURRENTSECTION#Name.String
FontFace=Urbanist
FontSize=(9.5*#DroptopSize#)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ContentFade#)
; LeftMouseDownAction=[!WriteKeyValue Variables LanguageNum "[mIndex#CURRENTSECTION#Name]" "#@#GlobalVar\UserSettings.inc"]#CloseSettingsMenu#[!RefreshGroup DroptopSuite]
MouseOverAction=[!SetVariable ItemIsHighlighted 1][!SetVariable ActionTimer.HLFadeIn 0.25][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!UpdateMeter FolderBlock][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetVariable ItemIsHighlighted 0][!SetVariable [##CURRENTSECTION#]FolderActive 0][!EnableMouseActionGroup "MouseOverAction" Items][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Icon ImageAlpha "#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!CommandMeasure MeasureActionTimer "Stop 3"][!Delay 10][!UpdateMeasure CalcItemIsHighlighted]
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
Shape2=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),(3*#DroptopSize#) | StrokeWidth 1 | Rotate 45 | Extend ArrowColor
Shape3=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)+(8*#DroptopSize#)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 0 | Rotate 45 | Fill Color 255,55,55
Shape4=Combine Shape2 | Exclude Shape3
FillColor=Fill Color 0,0,0,0
ArrowColor=Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
X=(#DropdownMenuWidth#-#DropdownStrokeWidth#-1)
Y=2
; MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption [#CurrentSubFolder]Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!UpdateMeter [#CurrentSubFolder]Icon][!Redraw]
MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!SetOption [#CurrentSubFolder]Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
; LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
LeftMouseDownAction=[]
; LeftMouseUpAction=[!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker ([#ScrollTracker]-([#ScrollTracker]-[#MaxItem]<=[#MaxItem]?([#ScrollTracker]-[#MaxItem]):[#MaxItem]))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-[#MaxItem])][!HideGroup Folder02][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!CommandMeasure ScrollTimer "Stop 2"][!CommandMeasure ScrollTimer "Execute 1"]
; LeftMouseUpAction=[!SetVariable ContentFade 0.1][!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker ([#ScrollTracker]-([#ScrollTracker]-[#MaxItem]<=[#MaxItem]?([#ScrollTracker]-[#MaxItem]):[#MaxItem]))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-[#MaxItem])][!HideGroup Folder02][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]
LeftMouseUpAction=[!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!CommandMeasure mPath "PageUp"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!Delay 10][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
Group=ScrollBar | Items
Container=AnimationContainer

[ScrollDownButton]
Meter=Shape
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1),((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3),#DropdownBGCorner# | StrokeWidth 0 | Extend FillColor
Shape2=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),(3*#DroptopSize#) | StrokeWidth 1 | Rotate 45 | Extend ArrowColor
Shape3=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)-(8*#DroptopSize#)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 0 | Rotate 45 | Fill Color 255,55,55
Shape4=Combine Shape2 | Exclude Shape3
FillColor=Fill Color 0,0,0,0
ArrowColor=Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
X=r
Y=R
; MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption [#CurrentSubFolder]Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!UpdateMeter [#CurrentSubFolder]Icon][!Redraw]
MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!SetOption [#CurrentSubFolder]Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
; LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
LeftMouseDownAction=[]
; LeftMouseUpAction=[!SetVariable ContentFade 0.1][!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker ([#ScrollTracker]+([&AnalyzeTotal]>[#MaxItem]?([#ScrollTracker]+[#MaxItem]>=[&AnalyzeTotal]?([&AnalyzeTotal]-[#ScrollTracker]):[#MaxItem]):0))][!CommandMeasure ScrollbarScript UpdateCurrentPos([#MaxItem])][!HideGroup Folder02][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]
LeftMouseUpAction=[!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!CommandMeasure mPath "PageDown"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!Delay 10][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
Group=ScrollBar | Items
Container=AnimationContainer

[ScrollbarTop]
Meter=Image
X=3
Y=(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-1)
UpdateDivider=-1
Container=AnimationContainer

[Size]
Measure=Calc
Formula=((#DropdownItemHeight#*#MaxItem#)-#DropdownIconYOffset#)
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
Y=(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+1)
DynamicVariables=1
Group=ScrollBar | Items
Container=AnimationContainer
