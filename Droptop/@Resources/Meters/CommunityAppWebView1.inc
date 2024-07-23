[AutoStartup]
Measure=Calc
Formula=Counter
IfCondition=(AutoStartup=1)
IfTrueAction=[!Delay [##MyAppID#]00][!UpdateMeasure Plugin.WebView]
OnUpdateAction=[!Zpos 1][!Zpos 0]
UpdateDivider=-1

[Plugin.WebView]
Measure=Plugin
Plugin=WebView
URL=#WebViewURL#
X=(#DropdownMenuCutout#+(#DropdownStrokeWidth#/2))
Y=(#WebViewTopHeight#+(#DropdownStrokeWidth#/2))
W=(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)-#DropdownStrokeWidth#)
H=(#WebViewHeight#-#WebViewTopHeight#-#DropdownBGCorner#)
DynamicVariables=1
UpdateDivider=-1
Disabled=1

[WebViewWhiteBG]
Meter=Image
SolidColor=#WebViewBackgroundColor#
X=(#DropdownMenuCutout#+(#DropdownStrokeWidth#/2))
Y=(#WebViewTopHeight#+(#DropdownStrokeWidth#/2))
W=(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)-#DropdownStrokeWidth#)
H=(#WebViewHeight#-#WebViewTopHeight#-#DropdownBGCorner#-1)
MouseOverAction=[!UpdateMeasure Plugin.WebView]

[ActionIconStyle]
ImageName=#CURRENTPATH#Icons\#CURRENTSECTION#.png
ImageAlpha=(#WebNum#<>[##CURRENTSECTION#]?155:255)
LeftMouseDownAction=[!SetOption Plugin.WebView URL "[#WebViewURL[##CURRENTSECTION#]]"][!SetVariable WebNum [##CURRENTSECTION#]][!WriteKeyValue Variables WebNum [#WebNum] "#MyVariablesLoc#"][!UpdateMeasure Plugin.WebView][!UpdateMeter *][!Redraw]
X=(#DropdownMenuWidth#-([#CURRENTSECTION#:W]*[##CURRENTSECTION#])-((#WebViewTopHeight#/2)-(#IconW#/2))-(#DropdownBGCorner#/2))
Y=(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#+(#DropdownStrokeWidth#/2))
Hidden=(#NumberOfActionIcons#>=[##CURRENTSECTION#]?(#WebViewHideTop#=1?1:0):1)

[New.ActionIconStyle]
ImageName=#CURRENTPATH#Icons\[#ActionItemIconFileName[##CURRENTSECTION#]].png
LeftMouseDownAction=[#ActionItemAction[##CURRENTSECTION#]]

[IconStyle]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# SolidColor "#*DropdownItemHL*#,((#*DropdownHLOpacity*#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#)"][!SetOption #CURRENTSECTION# SolidColor2 "#*DropdownItemHL2*#,((#*DropdownHLOpacity*#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#)"][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 2"][!SetOption #CURRENTSECTION# ImageTint ""][!SetOption #CURRENTSECTION# SolidColor ""][!SetOption #CURRENTSECTION# SolidColor2 ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Padding=((#WebViewTopHeight#/2)-(#IconW#/2)),((#WebViewTopHeight#/2)-(#IconW#/2)),((#WebViewTopHeight#/2)-(#IconW#/2)),((#WebViewTopHeight#/2)-(#IconW#/2))
X=R
Y=r
