[Rainmeter]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;
[Variables]
Sec.BoxW=(270*#Scale#)

ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0 | StartAll | Wait 1000 | RewindAll | ClickOn
Custom1=[!UnpauseMeasure Loop][!Delay 1000][!SetOption Loop StartValue 0]

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=7
Fetch1=StartP#Page#Title1|000
Fetch2=StartP#Page#Option1A|Text.1
Fetch3=StartP#Page#Option1B|SubText.1
Fetch4=StartP#Page#Option2A|Text.2
Fetch5=StartP#Page#Option2B|SubText.2
Fetch6=StartP#Page#Option3A|Text.3
Fetch7=StartP#Page#Option3B|SubText.3

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 1000
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 1000
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 1000
Tween4=Single | Variable | TweenNode5 | 0 | 1 | 1000
Optional1=Easing OutExpo
Optional2=Easing OutExpo | Group All
Optional3=Easing OutExpo | Group All
Optional4=Easing OutExpo | Group All
TweenGroup=Tweenable
UpdateDivider=1

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[BackArrow]
Meter=String
MeterStyle=BackArrow:S

[Shape]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31

[Container]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31,(#TWeenNode1#*255)
Group=Tweenable
DynamicVariables=1

[Title]
Meter=String
Text=droptop four
X=(#SCREENAREAWIDTH#/2)
Y=(#SCREENAREAHEIGHT#/2-#SEc.H#/2+#Sec.p#)
FontSize=(22*#Scale#)
StringAlign=Center
Container=
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S

; --------------------------------- Section 1 -------------------------------- ;
					
[Header:S]
FontSize=(28*#Scale#)
	
[000]
Meter=String
X=(#Sec.W#/2)
Y=(80*#Scale#)
Text=Choose how you would like#CRLF#Droptop to appear on your screen
StringAlign=Center
MeterStyle=String:S | Header:S

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Container.1]
Meter=Shape
X=(#SCREENAREAWIDTH#/2-#Sec.W#/2+(#Sec.W#/2-(60+270*3)*#Scale#/2))
Y=(#SCREENAREAHEIGHT#/2-#Sec.H#/2+200*#Scale#)
Shape=Rectangle 0,0,#Sec.BoxW#,#Sec.BoxW#,(15*#Scale#) | StrokeWidth 0 | Fill Color 255,255,255,(255*#TweenNode1#)
MouseOverAction=[!CommandMeasure Tween:M "Start(2)"]
MouseLeaveAction=[!CommandMeasure Tween:M "Reverse(2)"]
Group=Tweenable
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables AlwaysShowSkin 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables AutohideTopBar 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HotkeyModeZ 0 "#SKINSPATH#Droptop Folders\Other files\DroptopData.ini"][!CommandMeasure Tween:M "Rewind(0)"][!Delay 1250][!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

[ImageObject.1]
Meter=Image
ImageName=#@#Images\Setup\Box.png
W=(300*#Scale#)
H=(300*#Scale#)
ImageAlpha=255
Container=Container.1

[ShapeObject.1]
Meter=Shape
Shape=Rectangle 0,0,#Sec.BoxW#,(40*#Scale#) | StrokeWidth 0 | Fill Color 41,41,41,240
Shape2=Ellipse 20,20,7 | StrokeWidth 0 | Fill Color 255,255,255 | Scale #Scale#,#Scale#,0,0
Shape3=Line 50,20,100,20 | StrokeWidth 6 | Stroke Color 255,255,255 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Shape4=Line 130,20,200,20 | StrokeWidth 6 | Stroke Color 255,255,255,150 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Shape5=Line 230,20,250,20 | StrokeWidth 6 | Stroke Color 255,255,255,150 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Shape6=Rectangle 2,40,270,1 | StrokeWidth 0 | Fill Color 255,255,255,75 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Shape7=Rectangle 2,40,(270*#TweenNode3#),2 | StrokeWidth 0 | Fill Color #Lime# | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Container=Container.1
Group=Tweenable
DynamicVariables=1

[Container.2]
Meter=Shape
X=(30*#Scale#)R
Y=r
Shape=Rectangle 0,0,#Sec.BoxW#,#Sec.BoxW#,(15*#Scale#) | StrokeWidth 0 | Fill Color 255,255,255,(255*#TweenNode1#)
MouseOverAction=[!CommandMeasure Tween:M "Start(3)"]
MouseLeaveAction=[!CommandMeasure Tween:M "Reverse(3)"]
Group=Tweenable
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables AlwaysShowSkin 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables AutohideTopBar 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HotkeyModeZ 1 "#SKINSPATH#Droptop Folders\Other files\DroptopData.ini"][!CommandMeasure Tween:M "Rewind(0)"][!Delay 1250][!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

[ImageObject.2]
Meter=Image
ImageName=#@#Images\Setup\Box2.png
W=(300*#Scale#)
H=(300*#Scale#)
ImageAlpha=255
Container=Container.2

[ShapeObject.2]
Meter=Shape
Shape=Rectangle 0,(-40*#Scale#*(1-#TweenNode4#)),#Sec.BoxW#,(40*#Scale#) | StrokeWidth 0 | Fill Color 41,41,41,240
Shape2=Ellipse 20,(-40*#Scale#*(1-#TweenNode4#)+20),7 | StrokeWidth 0 | Fill Color 255,255,255 | Scale #Scale#,#Scale#,0,0
Shape3=Line 50,(-40*#Scale#*(1-#TweenNode4#)+20),100,(-40*#Scale#*(1-#TweenNode4#)+20) | StrokeWidth 6 | Stroke Color 255,255,255 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | StrokeEndCap Round
Shape4=Line 130,(-40*#Scale#*(1-#TweenNode4#)+20),200,(-40*#Scale#*(1-#TweenNode4#)+20) | StrokeWidth 6 | Stroke Color 255,255,255,150 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | StrokeEndCap Round
Shape5=Line 230,(-40*#Scale#*(1-#TweenNode4#)+20),250,(-40*#Scale#*(1-#TweenNode4#)+20) | StrokeWidth 6 | Stroke Color 255,255,255,150 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | StrokeEndCap Round
Shape6=Rectangle 2,((#TweenNode4#)*40-1),270,1 | StrokeWidth 0 | Fill Color 255,255,255,75 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Container=Container.2
Group=Tweenable
DynamicVariables=1

[Container.3]
Meter=Shape
X=(30*#Scale#)R
Y=r
Shape=Rectangle 0,0,#Sec.BoxW#,#Sec.BoxW#,(15*#Scale#) | StrokeWidth 0 | Fill Color 255,255,255,(255*#TweenNode1#)
MouseOverAction=[!CommandMeasure Tween:M "Start(4)"]
MouseLeaveAction=[!CommandMeasure Tween:M "Reverse(4)"]
Group=Tweenable
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables AlwaysShowSkin 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables AutohideTopBar 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HotkeyModeZ -2 "#SKINSPATH#Droptop Folders\Other files\DroptopData.ini"][!CommandMeasure Tween:M "Rewind(0)"][!Delay 1250][!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

[ImageObject.3]
Meter=Image
ImageName=#@#Images\Setup\Box3.png
W=(300*#Scale#)
H=(300*#Scale#)
ImageAlpha=255
Container=Container.3

[ShapeObject.3]
Meter=Shape
Shape=Rectangle 0,0,#Sec.BoxW#,(40*#Scale#) | StrokeWidth 0 | Fill Color 41,41,41,240
Shape2=Ellipse 20,20,7 | StrokeWidth 0 | Fill Color 255,255,255 | Scale #Scale#,#Scale#,0,0
Shape3=Line 50,20,100,20 | StrokeWidth 6 | Stroke Color 255,255,255 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Shape4=Line 130,20,200,20 | StrokeWidth 6 | Stroke Color 255,255,255,150 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Shape5=Line 230,20,250,20 | StrokeWidth 6 | Stroke Color 255,255,255,150 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Shape6=Rectangle 2,40,270,1 | StrokeWidth 0 | Fill Color 255,255,255,75 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Shape7=Rectangle 0,0,(270*#TweenNode5#),270 | StrokeWidth 0 | Fill Color #Lime#,160 | Scale #Scale#,#Scale#,0,0 | StrokeStartCap Round | STrokeEndCap Round
Container=Container.3
Group=Tweenable
DynamicVariables=1

; --------------------------------- Section 2 -------------------------------- ;

[Text.1]
Meter=String
Text=Always show Droptop
X=(#Sec.W#/2-(60+270*3)*#Scale#/2+#Sec.BoxW#/2)
Y=(490*#Scale#)
Container=Container
StringAlign=Center
MeterStyle=String:S | Header2:S

[SubText.1]
Meter=String
Text=Droptop will reserve a portion of your screen space, and be always visible and accessible at the top of your screen. (Recommended)
X=r
Y=(40*#Scale#)r
W=(#Sec.BoxW#)
Container=Container
StringAlign=Center
MeterStyle=String:S | Text:S

[Text.2]
Meter=String
Text=Autohide
X=(#Sec.BoxW#+30*#Scale#)r
Y=(-40*#Scale#)r
Container=Container
StringAlign=Center
MeterStyle=String:S | Header2:S

[SubText.2]
Meter=String
Text=Droptop will appear when the cursor is moved to the top of the screen and automatically disappear when it isn't needed.
X=r
Y=(40*#Scale#)r
W=(#Sec.BoxW#)
Container=Container
StringAlign=Center
MeterStyle=String:S | Text:S

[Text.3]
Meter=String
Text=Desktop only
X=(#Sec.BoxW#+30*#Scale#)r
Y=(-40*#Scale#)r
Container=Container
StringAlign=Center
MeterStyle=String:S | Header2:S

[SubText.3]
Meter=String
Text=Droptop will only be visible when viewing the desktop, and will be unavailable when windows are maximized.
X=r
Y=(40*#Scale#)r
W=(#Sec.BoxW#)
Container=Container
StringAlign=Center
MeterStyle=String:S | Text:S