[Rainmeter]
OnRefreshAction=[!ShowMeterGroup 10][!UpdateMeterGroup 10][!Redraw]

[Variables]
@IncludeTopBarPositions=#@#GlobalVar\TopBarPos.inc
;----------------------------------
LuaLoc=#@#Scripts\Lua\DropScroll.lua
;----------------------------------
MaxItem=10

ScrollTracker=10
AboveTotal=1

ContentFade=1

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]

DropdownItemPadding1=#DropdownNoIconPadding#

; [ScrollCheck]
; Measure=Calc
; IfCondition=AnalyzeTotal = #ScrollTracker#
; IfTrueAction=[!SetOptionGroup Items MouseScrollDownAction """[]"""]
; IfFalseAction=[!SetOptionGroup Items MouseScrollDownAction ""]
; IfCondition2=#ScrollTracker# = #MaxItem#
; IfTrueAction2=[!SetOptionGroup Items MouseScrollUpAction """[]"""]
; IfFalseAction2=[!SetOptionGroup Items MouseScrollUpAction ""]
; DynamicVariables=1

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
Path="%USERPROFILE%"
ShowDotDot=1
SortType=Name
SortAscending=1
SortDateType=
ShowFile=0
ShowFolder=1
ShowSystem=1
ShowHidden=0
HideExtensions=1
;Recursive=0
Count=10
FinishAction=[!UpdateMeterGroup Items][!Redraw]

;----------------------------------------------------

[FolderCount]
Measure=Plugin
Plugin=FolderInfo
Folder="[mPath]"
InfoType=FolderCount
IncludeHiddenFiles=0
IncludeSubFolders=0
IncludeSystemFiles=1
DynamicVariables=1
OnChangeAction=[!UpdateMeasure *][!UpdateMeter *][!Redraw]

[AnalyzeTotal]
Measure=Calc
Formula=FolderCount
IfCondition=FolderCount > 10
IfTrueAction=[!EnableMeasureGroup Scrollbar][!ShowMeterGroup Scrollbar]
IfFalseAction=[!DisableMeasureGroup Scrollbar][!HideMeterGroup Scrollbar]
OnChangeAction=[!UpdateMeter *]
DynamicVariables=1

;----------------------------------------------------

[ScrollTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation
ActionList1=Start1|Wait 100|Start2|Wait 10|Repeat ContentFade,#W#,9|Wait 10|Finish
Start1=
Start2=[!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]
ContentFade=[!SetVariable ContentFade "(Clamp(#ContentFade#+0.1,0,1))"]#U#
Finish=[!SetVariable ContentFade 1][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]#U#
DynamicVariables=1
IgnoreWarnings=1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[IconStyle]
ImageName=
ImageFlip=None

[BackgroundStyle]
LeftMouseDownAction=[]
DynamicVariables=1

[InfoStyle]
Prefix="📁 "
InlinePattern=📁
InlineSetting=Color | [#DropdownFontColor1],(([FolderCount]>(#CURRENTSECTION#-2)?#DropdownItemOpacity#:0)*#ContentFade#)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ContentFade#)
MeasureName=mIndex#CURRENTSECTION#Name
LeftMouseDownAction=[!CommandMeasure mIndex#CURRENTSECTION#Name "FollowPath"][!CommandMeasure ScrollbarScript UpdateCurrentPos(-100)][!SetOption BottomString Postfix ""][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# InlineSetting "Color | [#*DropdownFontColor2*],(([*FolderCount*]>(#*CURRENTSECTION*#-2)?#*DropdownItemOpacity*#:0)*#*ContentFade*#)"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter FolderBlock][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Stop 1"][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 1"]
MouseLeaveAction=[!SetVariable [##CURRENTSECTION#]FolderActive 0][!EnableMouseActionGroup "MouseOverAction" Items][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# InlineSetting "Color | [#*DropdownFontColor1*],(([*FolderCount*]>(#*CURRENTSECTION*#-2)?#*DropdownItemOpacity*#:0)*#*ContentFade*#)"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!HideMeterGroup Highlight][!Redraw]
MiddleMouseDownAction=[!CommandMeasure mIndex#CURRENTSECTION#Name "[#MiddleClickBehavior[#MiddleClickNum]]"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!Hide "#CURRENTCONFIG#"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MouseScrollUpAction=[!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!CommandMeasure mPath "PageUp"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!Redraw][#StopMode[#StopModeNum]][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
MouseScrollDownAction=[!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!CommandMeasure mPath "PageDown"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!Redraw][#StopMode[#StopModeNum]][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(#DropdownMenuLandingHeight#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#

;----------------------------------------------------
; Item highlight

[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,55
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,(55*#TopBarHLSolidColor#) | StrokeWidth 0
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=1
DynamicVariables=1

Group=Highlight | HL
DynamicVariables=1
Hidden=1

;----------------------------------------------------
; Index 1

[mIndex1Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=1
RegExpSubstitute=1
Substitute="^..$":"↩"

;----------------------------------------------------
; Index 2

[mIndex2Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2

;----------------------------------------------------
; Index 3

[mIndex3Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3

;----------------------------------------------------
; Index 4

[mIndex4Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4

;----------------------------------------------------
; Index 5

[mIndex5Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5

;----------------------------------------------------
; Index 6

[mIndex6Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=6

;----------------------------------------------------
; Index 7

[mIndex7Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=7

;----------------------------------------------------
; Index 8

[mIndex8Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=8

;----------------------------------------------------
; Index 9

[mIndex9Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=9

;----------------------------------------------------
; Index 10

[mIndex10Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=10

[1]
Text=%1

[2]
Text=%1

[3]
Text=%1

[4]
Text=%1

[5]
Text=%1

[6]
Text=%1

[7]
Text=%1

[8]
Text=%1

[9]
Text=%1

[10]
Text=%1

;----------------------------------------------------
; Scrollbar
;----------------------------------------------------

[ScrollbarTop]
Meter=Image
X=3
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-1)
UpdateDivider=-1

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
Hidden=1

;-------------------------------------------

[OpenFolder]
Meter=Image
ImageName=#@#Icons\Fixed\Medium\dot.png
ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
ImageAlpha=(#DropdownItemOpacity#/3)
X=(8*#DroptopSize#)
; Y=([Background:YH]-[10:Y])
Y=(#DropdownIconYoffset#-(#DropdownIconYoffset#%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*#NumberOfItems#)+((#DropdownMenuLandingHeight#-(16*#DroptopSize#))/2))
H=(16*#DroptopSize#)
LeftMouseDownAction=#CloseSettingsMenu#["[mPath]"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Icons\Fixed\Medium\open.png"][!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Icons\Fixed\Medium\dot.png"][!SetOption #CURRENTSECTION# ImageAlpha (#*DropdownItemOpacity*#/3)][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
UpdateDivider=-1

[DownArrow]
Meter=Shape
Shape=Rectangle (-2*#DroptopSize#),(1*#DroptopSize#),(15*#DroptopSize#),(15*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,0,(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
Shape3=Rectangle 0,(-2*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
Shape4=Combine Shape2 | Exclude Shape3
; Look=Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/3)
Look=Fill Color #DropdownFontColor1#,(#ScrollTracker#>=[AnalyzeTotal]?0:(#DropdownItemOpacity#/3))
LeftMouseDownAction=[!SetVariable ScrollTracker ([#ScrollTracker]>=[&AnalyzeTotal]?[&AnalyzeTotal]:([#ScrollTracker]+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!CommandMeasure mPath "PageDown"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!Redraw][#StopMode[#StopModeNum]][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#>=[AnalyzeTotal]?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#>=[AnalyzeTotal]?0:(#DropdownItemOpacity#/3))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#DropdownItemOpacity#/3)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#DropdownMenuWidth#-(25*#DroptopSize#))
Y=r
DynamicVariables=1

[UpArrow]
Meter=Shape
Shape=Rectangle (-2*#DroptopSize#),(1*#DroptopSize#),(15*#DroptopSize#),(15*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,(7*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
Shape3=Rectangle 0,(9*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
Shape4=Combine Shape2 | Exclude Shape3
Look=Fill Color #DropdownFontColor1#,(#ScrollTracker#<=#MaxItem#?0:(#DropdownItemOpacity#/3))
LeftMouseDownAction=[!SetVariable ScrollTracker ([#ScrollTracker]<=#MaxItem#?#MaxItem#:([#ScrollTracker]-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!CommandMeasure mPath "PageUp"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!Redraw][#StopMode[#StopModeNum]][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#<=#MaxItem#?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#<=#MaxItem#?0:(#DropdownItemOpacity#/3))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#DropdownMenuWidth#-(45*#DroptopSize#))
Y=r
DynamicVariables=1

[BottomString]
Meter=String
StringAlign=LeftCenter
Text=#SettingsFolderLocation1#
FontColor=#DropdownFontColor1#,128
FontFace=#UniversalFont#
FontSize=(9*#DroptopSize#)
AntiAlias=1
ClipString=1
LeftMouseUpAction=[!SetOption #CURRENTSECTION# Postfix " ✔"][!UpdateMeter #CURRENTSECTION#][!Redraw][!WriteKeyValue Variables FolderLoc[#SlotFolder[#SettingsMenuIndex2]] "[mPath]" "#@#GlobalVar\UserSettings.inc"][!Refresh "Droptop\Other\Folders\Folder[#SlotFolder[#SettingsMenuIndex2]]"][!Refresh "Droptop\Other\Folders\Folder[#SlotFolder[#SettingsMenuIndex2]]"]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,128"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=((8*#DroptopSize#)+([OpenFolder:W]*1.25))
Y=(7*#DroptopSize#)r
W=(#DropdownMenuWidth#/1.8)
W=(100*#DroptopSize#)
H=(14*#DroptopSize#)
DynamicVariables=1
