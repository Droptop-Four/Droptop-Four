[Rainmeter]
Group=None
SkinWidth=
SkinHeight=
LeftMouseDownAction=
OnRefreshAction=[!DeactivateConfig "Droptop Community Apps\Apps\#MyAppID#\Popout\MinimizeIcon"]
OnCloseAction=[!WriteKeyValue Variables PopoutZpos 1][!Zpos 1]
OnFocusAction=#HideAll#[!HideFadeGroup WebView]

DefaultWindowX=#TopHeight#
DefaultWindowY=(#TopHeight#*2)
DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=0
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1

[Variables]
Win10.BlurType00=Blur
Win10.BlurType10=Acrylic

Win10.BlurType01=Blur
Win10.BlurType11=Blur

[BlurBehind]
BlurEnabled=0
; Measure=Plugin
; Plugin=FrostedGlass
; BlurEnabled=(#ForceOpaque#=1?0:#DropdownMenuBlur#)
; Type=[#Win10.BlurType[#BlurTypeNum][#Win10Apps]]
; Border=[#Shadows[#DropdownMenuShadow]]
; Corner=[#BlurCorner[#DropdownRoundCorners]]
; DynamicVariables=1

[MeasureMouseX]
Measure=Plugin
Plugin=MouseXY
Dimension=X
Group=MouseMove

[MeasureMouseY]
Measure=Plugin
Plugin=MouseXY
Dimension=Y
Group=MouseMove

[MeasureXY]
Measure=Calc
IfCondition=([&MeasureMouseX]>[#CURRENTCONFIGX]) && ([&MeasureMouseX]<([#CURRENTCONFIGX]+[#CURRENTCONFIGWIDTH])) && ([&MeasureMouseY]>[#CURRENTCONFIGY]) && ([&MeasureMouseY]<([#CURRENTCONFIGY]+[#CURRENTCONFIGHEIGHT]))
IfTrueAction=[!CommandMeasure MeasureActionTimer "Execute 7"]
IfFalseAction=[!SetVariable ActionTimer.PopoutFadeIn 0][!UpdateMeter *][!Redraw]
; IfTrueAction=[!SetOptionGroup PopoutMeters ImageAlpha #*DropdownItemOpacity*#][!SetOptionGroup PopoutMeters FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!ShowMeter Background][!Redraw]
; IfFalseAction=[!SetOptionGroup PopoutMeters ImageAlpha 0][!SetOptionGroup PopoutMeters FontColor "#*DropdownFontColor1*#,0"][!HideMeter Background][!Redraw]
; IfConditionMode=1
DynamicVariables=1
Group=MouseMove

[IconStyle]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# ImageAlpha (#*HighlightFontOpacity2*#*#*ActionTimer.PopoutFadeIn*#)][!SetOption #CURRENTSECTION# ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# SolidColor "#*DropdownItemHL*#,((#*DropdownHLOpacity*#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#)"][!SetOption #CURRENTSECTION# SolidColor2 "#*DropdownItemHL2*#,((#*DropdownHLOpacity*#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#)"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ActionTimer.PopoutFadeIn*#)"][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha (#*DropdownItemOpacity*#*#*ActionTimer.PopoutFadeIn*#)][!CommandMeasure MeasureActionTimer "Stop 2"][!SetOption #CURRENTSECTION# ImageTint ""][!SetOption #CURRENTSECTION# SolidColor ""][!SetOption #CURRENTSECTION# SolidColor2 ""][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ActionTimer.PopoutFadeIn*#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[PopoutIconStyle]
; ImageAlpha=(#DropdownItemOpacity#/3)
ImageAlpha=(#DropdownItemOpacity#*#ActionTimer.PopoutFadeIn#)
ImageName=#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Popout\Icons\#CURRENTSECTION#.png
Hidden=[#HideIcon.[#CURRENTSECTION]]
X=R
Y=#DropdownStrokeWidth#
Group=PopoutMeters | Animation.SU

[ActionIconStyle]
ImageAlpha=(#DropdownItemOpacity#*#ActionTimer.PopoutFadeIn#)
ImageName=#SKINSPATH#Droptop\@Resources\Icons\Fixed\#CURRENTSECTION#.png
X=-[#CURRENTSECTION#:W]r
SolidColor=0,0,0,0
Group=PopoutMeters | Animation.SU

[Background]
; Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#WebViewHeight#+(#DropdownItemYOffset#*2)+(#DropdownStrokeWidth#/2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#WebViewHeight#+(#DropdownItemYOffset#*2)+(#DropdownStrokeWidth#/2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(255*#ActionTimer.PopoutFadeIn#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,(#DropdownStrokeOpacity#*#ActionTimer.PopoutFadeIn#)
Shape2=
DynamicVariables=1
LeftMouseDownAction=
Group=PopoutMeters | Animation.SU

[SizeToggle]
Meter=Image
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ActionTimer.PopoutFadeIn#)
Group=PopoutMeters | Animation.SU

[PinIcon]
ImageAlpha=(255*#ActionTimer.PopoutFadeIn#)
ImageName=#SKINSPATH#Droptop\@Resources\Icons\Fixed\#CURRENTSECTION##PopoutZpos#.png
Group=PopoutMeters | Animation.SU

