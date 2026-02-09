[Rainmeter]

[Variables]

SetChangesAction=

[3Arrow]
Meter=String

; [ColorResetIcon]
; Meter=Image
; MeterStyle=IconStyle
; ImageName=#@#Icons\Fixed\#IconSize#\refresh.png
; ImageAlpha=(#DropdownItemOpacity#/2)
; ImageTint=#DropdownBGColor1#
; MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint #DropdownBGColor1#][!SetOption #CURRENTSECTION# ImageAlpha #*DropdownItemOpacity*#][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint #DropdownBGColor1#][!SetOption #CURRENTSECTION# ImageAlpha (#*DropdownItemOpacity*#/2)][!UpdateMeter #CURRENTSECTION#][!Redraw]
; LeftMouseDownAction=[!WriteKeyValue Variables NowPlayingCustomColor 0 "#@#GlobalVar\UserSettings.inc"][!SetVariableGroup NowPlayingCustomColor 0 "DroptopSuite"][!UpdateMeter NowPlayingSongTitle "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
; X=(#DropdownMenuWidth#-((#IconW#+(6*#DroptopSize#))*1.5))
; Y=((#DropdownIconYOffset#-(#DropdownIconYOffset#%1))+#DropdownItemYOffset#+(#DropdownItemHeight#*2))
; ; DynamicVariables=1
; ; Group=BluetoothToggle | ItemGroup4
; Group=None
; Hidden=0

; [InfoStyleB]
; FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
; ; MouseOverAction=[!SetVariable ItemIsHighlighted 1][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"]
; MouseOverAction=[!SetVariable ItemIsHighlighted 1][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!UpdateMeter FolderBlock][!CommandMeasure MeasureActionTimer "Execute 3"]
; MouseLeaveAction=[!SetVariable ItemIsHighlighted 0][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!CommandMeasure MeasureActionTimer "Stop 3"][!Delay 10][!UpdateMeasure CalcItemIsHighlighted]

; [3]
; MeterStyle=InfoStyle | InfoStyleB

; [3Icon]
; ImageAlpha=0
; ; Hidden=1

; [3IconB]
; Meter=Image
; MeterStyle=IconStyle
; ImageName=#@#Icons\Fixed\#IconSize#\largecircle.png
; ImageTint=[#NotificationTextColor[#TopBarSections]1]
; X=[3Icon:X]
; Y=[3Icon:Y]
; Hidden=0
; Group=None