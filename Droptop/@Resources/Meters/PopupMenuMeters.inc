[Rainmeter]
OnRefreshAction=[!Zpos 2][!ShowMeterGroup #NumberOfItems#][!Redraw]
OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MouseY "Droptop\Other\BackgroundProcesses"]
OnUnfocusAction=
Group=DroptopSuite | ContextBox
MouseActionCursor=0
LeftMouseDownAction=[]
RightMouseDownAction=[]
Update=-1
MouseOverAction=[!CommandMeasure FocusPlugin "Droptop\DropdownBar\Other\PopupMenu"][!CommandMeasure MeasureActionTimer "Stop 2"]
; MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!Hide]
MiddleMouseDoubleClickAction=["#SKINSPATH#Droptop\Other\PopupMenu\PopupMenuModule\#PopupModule#.inc"]

DefaultSavePosition=1
DefaultAlwaysOnTop=2
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1

[Variables]
;-----------------------------------
; Padding0=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownItemPadding2#,(#DropdownItemPaddingY#*-1)
Padding0=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1=0,#DropdownItemPaddingY#,0,(#DropdownItemPaddingY#*-1)
;---
Padding0B=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1B=#DropdownArrowHighlightW#,#DropdownItemPaddingY#,(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)
;-----------------------------------

;----------------------------------------------------
; Measures
;----------------------------------------------------

[FocusPlugin]
Measure=Plugin
Plugin=Focus
FocusOnRefresh=0

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=(#ForceOpaque#=1?0:#DropdownMenuBlur#)
Type=[#BlurType[#BlurTypeNum]0]
Border=[#Shadows[#DropdownMenuShadow]]
Corner=[#BlurCorner[#DropdownRoundCorners]]
UpdateDivider=-1

[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait [#FolderMouseOverTime[#FolderMouseOverTimeNum]]|FolderMouseOver
FolderMouseOver=
ActionList2=Wait 500|DeactivateConfig
DeactivateConfig=[!DeactivateConfig]
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#

[ItemStyle]
StringAlign=#TextDirection#Center
MouseOverAction=[!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#-(#*HighlightFontOpacity2*#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]
Padding=[#Padding[#RTLText]B]
W=(#DropdownMenuWidth#-#DropdownArrowHighlightW#-(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#))
H=#DropdownItemHeight#
DynamicVariables=1
ClipString=1
Group=Items
X=(1+(#DropdownMenuWidth#*#RTLText#))
Y=R
Hidden=(#NumberOfItems# >= #CURRENTSECTION# ? 0 : 1)

@IncludeArrowStyle=#@#Meters\ArrowStyle\ArrowStyle#DropdownArrowStyle#.ini

[IconStyle]
X=r
Y=R
W=#IconW#
H=#IconH#
ImageTint=#DropdownFontColor1#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))
Greyscale=#DropdownIconGreyscale#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
DynamicVariables=1
Group=Items
RightMouseDownAction=[]
Hidden=1

[BackgroundStyle]
LeftMouseDownAction=[]

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)+1),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
DynamicVariables=1


[Divider1]
[Divider2]
[Divider3]
[Divider4]
[Divider5]

;----------------------------------------------------
; Item Highlight
	
[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,(55*#DropdownHLSolidColor#) | StrokeWidth 0 | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=1
Group=Highlight | HL
DynamicVariables=1
Hidden=1

[HighlightSelected]
Meter=Shape
Shape=Rectangle [#HLSelectedShape[#HLSelectedShapeNum]]
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,([#DropdownMenuWidth]-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,([#DropdownMenuWidth]-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color 255,255,255,(55*#TopBarHLSolidColor#) | StrokeWidth 0 | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
ShapeOption=[#HLSelectedOption[#HLSelectedShapeNum]]
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=1
Y=#HighlightSelectedY#
Group=HighlightSelected
DynamicVariables=1
Hidden=1

;----------------------------------------------------

[1]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
Hidden=1
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | Animation

[2]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | Animation

[3]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | Animation

[4]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | SupporterThemes | Animation

[5]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | SupporterThemes | Animation

[6]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | SupporterThemes | Animation

[7]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | SupporterThemes | SupporterFolders | Animation

[8]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | SupporterThemes | SupporterFolders | Animation

[9]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | SupporterThemes | SupporterFolders | Animation

[10]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Hidden=1
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | Items | SupporterThemes | SupporterFolders | Animation

;----------------------------------------------------
; Icons
;----------------------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#DropdownHLOffsetX#-(#DropdownIconPadding#*2))*#RTLText#))
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon

[2Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon

[3Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon

[4Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon

[5Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon | SupporterThemes

[6Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon | SupporterThemes

[7Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon | SupporterThemes | SupporterFolders

[8Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon | SupporterThemes | SupporterFolders

[9Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon | SupporterThemes | SupporterFolders

[10Icon]
Meter=Image
MeterStyle=IconStyle | IconFlip[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconIsToggle]
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | ItemIcon | SupporterThemes | SupporterFolders
