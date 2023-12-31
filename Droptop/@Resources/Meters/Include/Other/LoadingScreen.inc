[Variables]
LoadingScreenPercent=1

W=40
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]

[LoadingTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat Loading1,#W#,400|Repeat Loading2,#W#,400|Repeat
Loading1=[!SetVariable LoadingScreenPercent "(Clamp(#LoadingScreenPercent#-0.00250,0,1))"]#U#
Loading2=[!SetVariable LoadingScreenPercent "(Clamp(#LoadingScreenPercent#+0.00250,0,1))"]#U#
Repeat=[!CommandMeasure LoadingTimer "Execute 1"]
ActionList2=Finished1|Wait 2000|Finished2
Finished1=[!Zpos 1][!SetOption LoadingRoundline Shape "Ellipse 0,0,(90*#DroptopSize#) | Fill Color 0,0,0,0 | StrokeWidth (18*#DroptopSize#) | StrokeDashes (10*#DroptopSize#),(3*#DroptopSize#) | StrokeDashCap Round | Rotate (-720*#*LoadingScreenPercent*#) | Stroke Color 235,255,235"][!SetOption LoadingRoundlineText FontColor "235,255,235"][!SetOption LoadingRoundlineText FontSize "(50*#DroptopSize#)"][!SetOption LoadingRoundlineText Text "✔"][!UpdateMeter LoadingRoundline][!UpdateMeter LoadingRoundlineText][!Redraw]
Finished2=#LoadFinishAction#[!DeactivateConfig]
DynamicVariables=1
IgnoreWarnings=1
Group=Animation

[LoadingBackground]
Meter=Shape
Shape=Rectangle Rectangle 0,0,#WindowWidth#,#WindowHeight#,10 | Fill Color 13,13,15,225 | StrokeWidth 0
LeftMouseDownAction=[]
LeftMouseUpAction=[]
DynamicVariables=1
Hidden=1
Group=LoadingScreen | NoInternetScreen

[LoadingRoundline]
Meter=Shape
Shape=Ellipse 0,0,(90*#DroptopSize#) | Fill Color 0,0,0,0 | StrokeWidth (18*#DroptopSize#) | StrokeDashes (10*#DroptopSize#),(3*#DroptopSize#) | StrokeDashCap Round | Rotate (-720*#LoadingScreenPercent#) | Stroke Color #Lime#
X=(#WindowWidth#/2)
Y=(#WindowHeight#/2)
DynamicVariables=1
Hidden=1
Group=LoadingScreen | Animation

[LoadingRoundlineText]
Meter=String
MeterStyle=InputTextStyle
StringAlign=CenterCenter
Text=Generating
FontColor=235,255,235
X=(#WindowWidth#/2)
Y=(#WindowHeight#/2)
W=(180*#DroptopSize#)
H=(180*#DroptopSize#)
DynamicVariables=1
Hidden=1
Group=LoadingScreen

[NoInternetText]
Meter=String
MeterStyle=InputTextStyle
StringAlign=CenterCenter
InlinePattern2=☹️
InlineSetting2=Size | ((#InputFontSizeA#*#DroptopSize#)*2)
Text=Internet connection required.#CRLF##CRLF#☹️#CRLF##CRLF#Connect to the Internet and try again.
FontColor=255,255,255
X=(#WindowWidth#/2)
Y=(#WindowHeight#/2)
W=(180*#DroptopSize#)
H=(180*#DroptopSize#)
DynamicVariables=1
Hidden=1
Group=NoInternetScreen