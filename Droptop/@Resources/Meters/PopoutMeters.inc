[Rainmeter]
Group=None | Popout
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

DropdownBGColor1=0,0,0
DropdownFontColor1=255,255,255
DropdownFontColor2=255,255,255
DropdownItemHL=255,255,255
DropdownItemHL2=255,255,255
DropdownItemOpacity=185
DropdownHLOpacity=100

[BlurBehind]
BlurEnabled=0

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
DynamicVariables=1
Group=MouseMove

[IconStyle]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.25][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# ImageAlpha (#*HighlightFontOpacity2*#*#*ActionTimer.PopoutFadeIn*#)][!SetOption #CURRENTSECTION# ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ActionTimer.PopoutFadeIn*#)"][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!HideMeterGroup Highlight][!SetOption #CURRENTSECTION# ImageAlpha (#*DropdownItemOpacity*#*#*ActionTimer.PopoutFadeIn*#)][!CommandMeasure MeasureActionTimer "Stop 2"][!SetOption #CURRENTSECTION# ImageTint ""][!SetOption #CURRENTSECTION# SolidColor ""][!SetOption #CURRENTSECTION# SolidColor2 ""][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ActionTimer.PopoutFadeIn*#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[PopoutIconStyle]
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
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#WebViewHeight#+(#DropdownItemYOffset#*2)+(#DropdownStrokeWidth#/2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(185*#ActionTimer.PopoutFadeIn#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,(#DropdownStrokeOpacity#*#ActionTimer.PopoutFadeIn#)
Shape2=
DynamicVariables=1
LeftMouseDownAction=
Group=PopoutMeters | Animation.SU

[SizeToggle]
Meter=Image
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ActionTimer.PopoutFadeIn#)
Group=PopoutMeters | Animation.SU

[PinIcon]
ImageAlpha=(#DropdownItemOpacity#*#ActionTimer.PopoutFadeIn#)
ImageName=#SKINSPATH#Droptop\@Resources\Icons\Fixed\#CURRENTSECTION##PopoutZpos#.png
Group=PopoutMeters | Animation.SU
