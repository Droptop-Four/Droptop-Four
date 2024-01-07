
[Variables]
Sec.W=(600*#Sec.S#)
Sec.H=(470*#Sec.S#)
Sec.R=(5*#Sec.S#)
AniDir=Bottom
[moveX]
Formula=(#SCREENAREAWIDTH#/2)
[moveY]
Formula=(#SCREENAREAHEIGHT#/2)
[anchorX]
Formula=50
[anchorY]
Formula=50

; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

; ---------------------------------------------------------------------------- ;
;                                  MeterStyle                                  ;
; ---------------------------------------------------------------------------- ;

[Item.StringIcon:S]
X=(#sec.p#)
y=(#sec.p#/2)R
FontFace=Material Icons Round
Text=[\xe88e]
FontColor=#Set.Accent_Color_2#
FontSize=(18*#sec.S#)
StringAlign=LeftCenter
[Item.String:s]
X=(#Sec.p#)R
Y=r
W=(#SEc.W#-#Sec.p#*5)
Clipstring=2
StringAlign=LeftCenter

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;
[B]
Shape2=Rectangle 0,(#Sec.H#),#Sec.W#,(-70*#Sec.S#),#Set.WinR# | StrokeWidth 0 | Fill Color #Set.Sec_Color#

[HeaderImage]
Meter=Image
ImageName="#SKINSPATH#Droptop Community Apps\Apps\JaxCore-Jax\Images\ValliStart.png"
X=(#Sec.P#)
Y=(#Sec.P#*2)
W=(64*#Sec.S#)
H=(64*#Sec.S#)

[HeaderString]
Meter=String
X=(#Sec.P#)R
Y=(64*#sec.S#/2)r
W=(#Sec.W#-#sec.p#*3-64*#sec.s#)
StringAlign=LeftCenter
Text=Integrate ValliStart to Droptop's start button
MeterStyle=Sec.String:S
FontSize=(16*#sec.s#)
FontWeight=650
; InlineSetting=GradientColor | 180 | #Set.Positive_Color# ; 0.0 | #Set.Accent_Color_2# ; 2.0

[Description1]
Meter=String
X=#Sec.P#
Y=R
W=(#sec.W#-#Sec.p#*2)
Clipstring=2
StringAlign=Leftcenter
Text=Don't have your new start menu installed? Get it from core!
MeterStyle=Sec.String:S
FontSize=(10*#sec.s#)
[Description1.Button.Shape]
Meter=Shape
X=(#Sec.W#-#Sec.p#-120*#Sec.s#)
Y=r
Shape=Rectangle 0,(-15*#sec.s#),(120*#sec.S#),(30*#sec.s#),#Sec.r# | StrokeWidth 2 | Stroke Color #Set.Positive_Color# | Extend Fill
Fill=Fill Color 0,0,0,1
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #Set.Positive_Color#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 0,0,0,1"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure Func "corepage('ValliStart', 'Info', '1')"]
[Description1.Button.String]
Meter=String
X=(60*#sec.s#)r
Y=r
Text=Get
StringAlign=CenterCenter
FontSize=(10*#sec.s#)
MEterStyle=Sec.String:S

[Description2]
Meter=String
X=#Sec.P#
Y=(#Sec.P#)R
W=(#sec.W#-#Sec.p#*2)
Clipstring=2
Text=By doing this, ValliStart will be launched when clicking on droptop's orb. Please also note the following:
MeterStyle=Sec.String:S
FontSize=(10*#sec.s#)

[Item1.StringIcon]
Meter=String
y=(#sec.p#*2)R
MeterStyle=Sec.String:S | Item.StringIcon:S
[Item1.String]
Meter=String
Text="Options > Menu Options > Access droptop from any apps" should be turned off to avoid focus conflict
MeterStyle=Sec.String:S | Item.String:S

[Item2.StringIcon]
Meter=String
MeterStyle=Sec.String:S | Item.StringIcon:S
[Item2.String]
Meter=String
Text=ValliStart will not be aligned / positioned automatically. You can change the X-Y padding & the aligning in ValliStart's align options.
MeterStyle=Sec.String:S | Item.String:S

[Item3.StringIcon]
Meter=String
Text=[\xe8b8]
FontColor=#Set.Positive_Color#
MeterStyle=Sec.String:S | Item.StringIcon:S
[Item3.String]
Meter=String
Text=Droptop's settings menu can stil be accessed via right clicking the bar itself
MeterStyle=Sec.String:S | Item.String:S

[Button1.Shape]
Meter=Shape
X=(#Sec.W#/4)
Y=(#Sec.h#-#Sec.P#-15*#Sec.s#)
Shape=Rectangle -110,-15,220,30,#Sec.R# | StrokeWidth 2 | Stroke Color #Set.Subtext_Color# | Scale #Sec.S#,#Sec.S# | Extend Fill
Fill=Fill Color 0,0,0,1
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #Set.Subtext_Color#"][!SetOption Button1.Text MEterStyle "Sec.String:s | Button1.Text.Over:S"][!UpdateMeterGroup Button1][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 0,0,0,1"][!SetOption Button1.Text MEterStyle "Sec.String:s | Button1.Text.Leave:S"][!UpdateMeterGroup Button1][!Redraw]
LeftMouseUpAction=[!WriteKeyvalue Variables DroptopIntegration 0 "#SKINSPATH#ValliStart\@Resources\Vars.inc"][!WriteKeyvalue Variables DroptopIntegration 0 "#SKINSPATH#Droptop Community Apps\Apps\JaxCore-Jax\Variables\Variables.inc"][!Refresh "Droptop\Dropdownbar"][!CommandMeasure ActionTimer "Execute 2"]
Group=Button1
[Button1.Text]
Meter=String
Text=Cancel / Unintegrate
X=r
Y=r
FontSize=(10*#Sec.S#)
StringAlign=CenterCenter
MeterStyle=Sec.String:s | Button1.Text.Leave:S
Group=Button1
[Button1.Text.Leave:S]
FontColor=#Set.Subtext_Color#
[Button1.Text.Over:S]
FontColor=#Set.Text_Color#
InlineSetting=Shadow | 0 | 0 | 2 | #Set.Pri_Color#

[Button2.Shape]
Meter=Shape
X=(#Sec.W#/4*3)
Y=(#Sec.h#-#Sec.P#-15*#Sec.s#)
Shape=Rectangle -110,-15,220,30,#Sec.R# | StrokeWidth 2 | Stroke Color #Set.Positive_Color# | Scale #Sec.S#,#Sec.S# | Extend Fill
Fill=Fill Color 0,0,0,1
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #Set.Positive_Color#"][!SetOption Button2.Text MEterStyle "Sec.String:s | Button2.Text.Over:S"][!UpdateMeterGroup Button2][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 0,0,0,1"][!SetOption Button2.Text MEterStyle "Sec.String:s | Button2.Text.Leave:S"][!UpdateMeterGroup Button2][!Redraw]
LeftMouseUpAction=[!WriteKeyvalue Variables DroptopIntegration 1 "#SKINSPATH#ValliStart\@Resources\Vars.inc"][!WriteKeyvalue Variables DroptopIntegration 1 "#SKINSPATH#Droptop Community Apps\Apps\JaxCore-Jax\Variables\Variables.inc"][!Refresh "Droptop\Dropdownbar"][!CommandMeasure ActionTimer "Execute 2"]
Group=Button2
[Button2.Text]
Meter=String
Text=Confirm integration
X=r
Y=r
FontSize=(10*#Sec.S#)
StringAlign=CenterCenter
MeterStyle=Sec.String:s | Button2.Text.Leave:S
Group=Button2
[Button2.Text.Leave:S]
FontColor=#Set.Positive_Color#
[Button2.Text.Over:S]
FontColor=#Set.Text_Color#
InlineSetting=Shadow | 0 | 0 | 2 | #Set.Pri_Color#