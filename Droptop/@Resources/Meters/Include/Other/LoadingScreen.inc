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
Group=LoadingScreen

[LoadingRoundline]
Meter=Shape
Shape=Ellipse 0,0,(90*#DroptopSize#) | Fill Color 0,0,0,0 | StrokeWidth ((2*#DroptopSize#)+((28*#DroptopSize#)*#LoadingScreenPercent#)) | Stroke Color #Lime# | StrokeDashes (-2*#LoadingScreenPercent#),(5*#LoadingScreenPercent#) | StrokeDashCap Round | Rotate (1000*#LoadingScreenPercent#)
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
X=(#WindowWidth#/2)
Y=(#WindowHeight#/2)
W=(180*#DroptopSize#)
H=(180*#DroptopSize#)
DynamicVariables=1
Hidden=1
Group=LoadingScreen