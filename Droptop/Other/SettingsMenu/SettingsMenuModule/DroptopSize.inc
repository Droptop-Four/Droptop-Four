[Variables]

[IconStyle]
Hidden=1

[MeasureCheckHeight]
Measure=Calc
IfCondition=(#SCREENAREAHEIGHT# <= 999)
IfTrueAction=[!SetOption 3Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 3Icon][!Redraw]
IfCondition2=(#SCREENAREAHEIGHT# > 1000) && (#SCREENAREAHEIGHT# < 1300)
IfTrueAction2=[!SetOption 5Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 5Icon][!Redraw]
IfCondition3=(#SCREENAREAHEIGHT# >= 1300) && (#SCREENAREAHEIGHT# < 1500)
IfTrueAction3=[!SetOption 7Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 7Icon][!Redraw]
IfCondition4=(#SCREENAREAHEIGHT# >= 1500) && (#SCREENAREAHEIGHT# < 2000)
IfTrueAction4=[!SetOption 8Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 8Icon][!Redraw]
IfCondition5=(#SCREENAREAHEIGHT# >= 2000)
IfTrueAction5=[!SetOption 9Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 9Icon][!Redraw]
Disabled=((#DisplayIsLandscape#-1)*-1)
DynamicVariables=1

; [1]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*0.8)
; Padding=(#DropdownItemPadding1#+(10*0.8)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [2]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*0.9)
; Padding=(#DropdownItemPadding1#+(10*0.9)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [3]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*1.0)
; Padding=(#DropdownItemPadding1#+(10*1.0)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [4]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*1.2)
; Padding=(#DropdownItemPadding1#+(10*1.0)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [5]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*1.4)
; Padding=(#DropdownItemPadding1#+(10*1.0)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [6]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*1.6)
; Padding=(#DropdownItemPadding1#+(10*1.0)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [7]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*1.8)
; Padding=(#DropdownItemPadding1#+(10*1.0)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [8]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*2.0)
; Padding=(#DropdownItemPadding1#+(10*1.0)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [9]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*2.5)
; Padding=(#DropdownItemPadding1#+(10*1.0)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

; [10]
; FontSize=((#DropdownItemFontSize#/#DroptopSize#)*3.0)
; Padding=(#DropdownItemPadding1#+(10*1.0)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*10)-(#DividerHeight#/2))

[11]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
Y=(#DividerSpace#*2)R
MouseOverAction=[]
MouseLeaveAction=[]

[11Icon]
Y=(#DividerSpace#*2)R
