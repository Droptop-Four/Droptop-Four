[Rainmeter]

[Variables]

[CheckHideIcons]
Measure=Calc
IfCondition=#HideIcons#=1
IfTrueAction=[!SetOption 2 FontColor "#DropdownFontColor1#,75"][!SetOption 3 FontColor "#DropdownFontColor1#,75"][!DisableMouseAction 2 *][!DisableMouseAction 3 *][!UpdateMeter *][!Redraw]
IfFalseAction=[!SetOption 2 FontColor "#DropdownFontColor1#,255"][!SetOption 3 FontColor "#DropdownFontColor1#,255"][!EnableMouseAction 2 *][!EnableMouseAction 3 *][!UpdateMeter *][!Redraw]
UpdateDivider=-1