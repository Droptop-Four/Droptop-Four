[Rainmeter]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0 | Wait 750 | Start1 | Wait 1000 | ClickOn | Start2

[Variables]

@IncludeFolderSettings=#@#GlobalVar\FolderSettings.inc

Sec.L=(500*#Scale#)
Sec.boxW=(100)
Sec.SaveLocation="#@#GlobalVar\UserSettings.inc"

ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

01.Index=1
02.Index=2
03.Index=3
04.Index=4
05.Index=5
06.Index=6
07.Index=7
08.Index=8
09.Index=9
010.Index=10
011.Index=11
012.Index=12
013.Index=13
014.Index=14
015.Index=15
016.Index=16
017.Index=17
018.Index=18
019.Index=19
020.Index=20
021.Index=21
022.Index=22
023.Index=23

1.Text=1
2.Text=2
3.Text=3
4.Text=4
5.Text=5
6.Text=6
7.Text=7
8.Text=8
9.Text=9
10.Text=10
11.Text=11
12.Text=12
13.Text=13
14.Text=14
15.Text=15
16.Text=16
17.Text=17
18.Text=18
19.Text=19
20.Text=20
21.Text=21
22.Text=22

1.Icon=1
2.Icon=2
3.Icon=3
4.Icon=4
5.Icon=5
6.Icon=6
7.Icon=7
8.Icon=8
9.Icon=9
10.Icon=10
11.Icon=11
12.Icon=12
13.Icon=13
14.Icon=14
15.Icon=15
16.Icon=16
17.Icon=17
18.Icon=18
19.Icon=19
20.Icon=20
21.Icon=21
22.Icon=22

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=1
Fetch1=StartP5BTitle1|000

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 1000
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 1000
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 1000
Tween4=Single | Variable | TweenNode5 | 0 | 1 | 1000
Tween5=Single | Variable | TweenNode6 | 0 | 1 | 500
Optional1=Easing OutExpo
Optional2=Easing OutExpo | Group All
Optional3=Easing OutExpo | Group All
Optional4=Easing OutExpo | Group All
Optional5=Easing InOutSine | Group All
TweenGroup=Tweenable
UpdateDivider=1

[Box:S]
FillColor=StrokeWidth (2*#Scale#) | Fill Color 43,43,43 | Stroke Color 55,55,55
X=(#Sec.L#+100*#Scale#)
Group=InputBox
Container=Container
DynamicVariables=1

[mBox:S]
X=(#Sec.P#/2)R
Y=r
Container=Container
Shape=Rectangle 0,0,(#Sec.boxW#),(#Sec.boxW#),(5) | StrokeWidth 0 | Scale #Scale#,#Scale# | Fill Color 43,43,43

[mImage:S]
X=r
Y=r
W=((#Sec.boxW#-20)*#Scale#)
H=((#Sec.boxW#-20)*#Scale#)
Padding=(10*#Scale#),(10*#Scale#),(10*#Scale#),(10*#Scale#)
Container=Container
PreserveAspectRatio=1
ImageName=#@#Images\mPlayerIcons\#CURRENTSECTION#.png

;------

[CustomAppString13]
Measure=String
String=[#AppName13]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString14]
Measure=String
String=[#AppName14]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString15]
Measure=String
String=[#AppName15]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString16]
Measure=String
String=[#AppName16]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString17]
Measure=String
String=[#AppName17]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString18]
Measure=String
String=[#AppName18]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString19]
Measure=String
String=[#AppName19]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString20]
Measure=String
String=[#AppName20]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString21]
Measure=String
String=[#AppName21]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

[CustomAppString22]
Measure=String
String=[#AppName22]
Substitute="^(.*?)-.*$":"\1","_":" "
RegExpSubstitute=1

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
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth (2*#Scale#) | Stroke Color 34,34,34 | Fill Color 31,31,31

[Container]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth (2*#Scale#) | Stroke Color 34,34,34 | Fill Color 31,31,31,(#TWeenNode1#*255)
Group=Tweenable
DynamicVariables=1

[BackgroundImage]
Meter=String
StringAlign=RightCenter
MeterStyle=Image:BG
Text=[\xe901]

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

[000]
Meter=String
X=(#Sec.P#)
Y=(97*#Scale#)
Text=Select your apps
FontSize=(25*#Scale#)
DynamicVariables=1
Group=Tweenable
MeterStyle=String:S | Header:S

[AppShapeStyle]
; X=(30*#Scale#)R
; X=(([[#AppShapeX[#CURRENTSECTION]]:XW]+[#CURRENTSECTION#:W])>(#DropdownMenuWidth#-(10*#DroptopSize#))?(5*#DroptopSize#):([[#AppShapeX[#CURRENTSECTION]]:XW]+(5*#DroptopSize#)))
X=(25*#Scale#)R
Y=r
; W=(78*#Scale#)
; H=(52*#Scale#)
Shape=Rectangle 0,0,([#CURRENTSECTION#.Text:W]+(18*#Scale#)),(60*#Scale#),(30*#Scale#) | Extend Stroke | Extend FillColor
FillColor=Fill Color 255,255,255,30
Stroke=StrokeWidth (2*#DroptopSize#) | Stroke Color #Lime#,([#HideApp[#SideAppName[#CURRENTSECTION]]]=1?0:255)
; LeftMouseDownAction=[!WriteKeyValue Variables CustomHomeButton 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeIconCatNum [#HomeIconCat.[#[#CURRENTSECTION].Category]] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeIconCatNum [#HomeIconCat.[#[#CURRENTSECTION].Category]]][!WriteKeyValue Variables HomeIconIndex [#[#CURRENTSECTION].Index] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeIconIndex [#[#CURRENTSECTION].Index]][!SetOptionGroup HomeIcons ImageTint "255,255,255,155"][!SetOptionGroup HomeIcons ImageName "#@#TopImages\Home\64\[#[#*CURRENTSECTION*].Category]\[#MonoColor[#*HomeColorNum*]]\[#[#*CURRENTSECTION*].Index].png"][!SetOption #CURRENTSECTION# ImageName "#@#TopImages\Home\64\[#[#CURRENTSECTION].Category]\MonoS\[#[#CURRENTSECTION].Index].png"][!SetOption #CURRENTSECTION# ImageTint "56,250,138"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" HomeIcons][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!UpdateMeasure *][!UpdateMeter *][!Redraw]
LeftMouseDownAction=[!SetVariable HideApp[#SideAppName[#CURRENTSECTION]] ([#HideApp[#SideAppName[#CURRENTSECTION]]]=1?0:1)][!WriteKeyValue Variables HideApp[#SideAppName[#CURRENTSECTION]] [#HideApp[#SideAppName[#CURRENTSECTION]]] "#@#GlobalVar\FolderSettings.inc"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 255,255,255,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=Content | Section3 | HomeIcons
DynamicVariables=1
Container=Container

[AppTextStyle]
Padding=(60*#Scale#),(19*#Scale#),0,(19*#Scale#)
Text=[#AppName[##CURRENTSECTION#]]
X=r
Y=r

[AppIconStyle]
ImageName=#@#Icons\Fixed\Large\AppIcons\[#SideAppName[##CURRENTSECTION#]]
Padding=(24*#Scale#),(19*#Scale#),0,(19*#Scale#)
Container=Container
X=r
Y=r

[1]
Meter=Shape
MeterStyle=AppShapeStyle
X=(#Sec.P#-(0*#Scale#))
Y=(180*#Scale#-#Sec.P#/2)

[1.Icon]
Meter=Image
MeterStyle=AppIconStyle
X=(#Sec.P#-(0*#Scale#))
Y=(180*#Scale#-#Sec.P#/2)

[1.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
X=(#Sec.P#-(0*#Scale#))
Y=(180*#Scale#-#Sec.P#/2)

[2]
Meter=Shape
MeterStyle=AppShapeStyle

[2.Icon]
Meter=Image
MeterStyle=AppIconStyle

[2.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[3]
Meter=Shape
MeterStyle=AppShapeStyle

[3.Icon]
Meter=Image
MeterStyle=AppIconStyle

[3.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[4]
Meter=Shape
MeterStyle=AppShapeStyle

[4.Icon]
Meter=Image
MeterStyle=AppIconStyle

[4.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[5]
Meter=Shape
MeterStyle=AppShapeStyle
X=(#Sec.P#-(0*#Scale#))
Y=(10*#Scale#)R

[5.Icon]
Meter=Image
MeterStyle=AppIconStyle

[5.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[6]
Meter=Shape
MeterStyle=AppShapeStyle

[6.Icon]
Meter=Image
MeterStyle=AppIconStyle

[6.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[7]
Meter=Shape
MeterStyle=AppShapeStyle

[7.Icon]
Meter=Image
MeterStyle=AppIconStyle

[7.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[8]
Meter=Shape
MeterStyle=AppShapeStyle

[8.Icon]
Meter=Image
MeterStyle=AppIconStyle

[8.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[9]
Meter=Shape
MeterStyle=AppShapeStyle
X=(#Sec.P#-(0*#Scale#))
Y=(10*#Scale#)R

[9.Icon]
Meter=Image
MeterStyle=AppIconStyle

[9.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[10]
Meter=Shape
MeterStyle=AppShapeStyle

[10.Icon]
Meter=Image
MeterStyle=AppIconStyle

[10.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[11]
Meter=Shape
MeterStyle=AppShapeStyle

[11.Icon]
Meter=Image
MeterStyle=AppIconStyle

[11.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[12]
Meter=Shape
MeterStyle=AppShapeStyle

[12.Icon]
Meter=Image
MeterStyle=AppIconStyle

[12.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle

[13]
Meter=Shape
MeterStyle=AppShapeStyle
X=(#Sec.P#-(0*#Scale#))
Y=(10*#Scale#)R

[13.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[13.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[14]
Meter=Shape
MeterStyle=AppShapeStyle

[14.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[14.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[15]
Meter=Shape
MeterStyle=AppShapeStyle

[15.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[15.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[16]
Meter=Shape
MeterStyle=AppShapeStyle

[16.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[16.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[17]
Meter=Shape
MeterStyle=AppShapeStyle
X=(#Sec.P#-(0*#Scale#))
Y=(10*#Scale#)R

[17.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[17.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[18]
Meter=Shape
MeterStyle=AppShapeStyle

[18.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[18.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[19]
Meter=Shape
MeterStyle=AppShapeStyle

[19.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[19.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[20]
Meter=Shape
MeterStyle=AppShapeStyle

[20.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[20.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[21]
Meter=Shape
MeterStyle=AppShapeStyle
X=(#Sec.P#-(0*#Scale#))
Y=(10*#Scale#)R

[21.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[21.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

[22]
Meter=Shape
MeterStyle=AppShapeStyle

[22.Icon]
Meter=Image
MeterStyle=AppIconStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#AppName[##CURRENTSECTION#]]\Button\Medium\Button
ImageCrop=-16,-16,32,32,5

[22.Text]
Meter=String
MeterStyle=String:S | Text:S | AppTextStyle
Text=[&CustomAppString[##CURRENTSECTION#]]

; ---------------------------------- Button ---------------------------------- ;

[Button]
Meter=Shape
X=(#Sec.W#-(180*#Scale#+#Sec.P#)*#TweenNode3#)
Y=(#SEc.H#-#Sec.P#-40*#Scale#)
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39,174,96,(255*#TweenNode3#)
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56,250,138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39,174,96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#ExecuteAnimation[#NoAnimationNum]]
Group=Button | Tweenable
DynamicVariables=1
Container=Container

[ButtonText]
Meter=String
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
StringAlign=CenterCenter
Text=Continue
FontColor=255,255,255,(255*#TweenNode3#)
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
Group=Button | Tweenable
DynamicVariables=1
MeterStyle=String:S