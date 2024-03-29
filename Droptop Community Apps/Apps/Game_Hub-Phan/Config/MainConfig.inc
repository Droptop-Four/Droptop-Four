;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=10

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

DropdownMenuWidth=((([#GameHub.WidthImage[#GameHub.WHImageNum]]-(#DropdownMenuCutout#*2))*3)+16)

DropdownMenuBlur=1

Box1=1
Box2=2
Box3=3
Box4=4
Box5=5
Box6=6
Box7=7
Box8=8
Box9=9
Box10=10
Box11=11
Box12=12

Box1Row=1
Box2Row=1
Box3Row=1
Box4Row=2
Box5Row=2
Box6Row=2
Box7Row=3
Box8Row=3
Box9Row=3
Box10Row=4
Box11Row=4
Box12Row=4

Box1Text=1
Box2Text=2
Box3Text=3
Box4Text=4
Box5Text=5
Box6Text=6
Box7Text=7
Box8Text=8
Box9Text=9
Box10Text=10
Box11Text=11
Box12Text=12

BoxPosition1=0
BoxPosition2=1
BoxPosition3=2
BoxPosition4=3
BoxPosition5=4
BoxPosition6=5
BoxPosition7=6
BoxPosition8=7
BoxPosition9=8
BoxPosition10=9
BoxPosition11=10
BoxPosition12=11

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[BoxStyle]
Shape=Rectangle 0,0,[#GameHub.WidthImage[#GameHub.WHImageNum]],[#GameHub.HeightImage[#GameHub.WHImageNum]],(#DropdownBGCorner#+4) | Fill Color 255,255,255,255 | StrokeWidth 0
X=0
MouseOverAction=[!SetOption [##CURRENTSECTION#] Text "[#NameBox[##CURRENTSECTION#]]"][!SetOption Box[##CURRENTSECTION#]Image ImageTint "255,255,255,255"][!SetOption Box[##CURRENTSECTION#]Image GreyScale "0"][!UpdateMeterGroup GroupBox[##CURRENTSECTION#]][!Redraw][Play #CURRENTPATH#Sounds\Hover_#GameHub.PlaySound#.wav]
MouseLeaveAction=[!SetOption Box[##CURRENTSECTION#]Image ImageTint "255,255,255,175"][!SetOption Box[##CURRENTSECTION#]Image GreyScale "#GameHub.Greyscale#"][!UpdateMeter Box[##CURRENTSECTION#]Image][!Redraw]
MiddleMouseDownAction=[!SetVariable GameHub.CurrentBox [##CURRENTSECTION#] "Droptop\Other\BackgroundProcesses"][!CommandMeasure GameHub.FileChoose "ChooseFile 1" "Droptop\Other\BackgroundProcesses"][!UpdateMeasure GameHub.FileChoose "Droptop\Other\BackgroundProcesses"]
LeftMouseDownAction=[Play #CURRENTPATH#Sounds\Click_#GameHub.PlaySound#.wav][#GameHub.FileLoc[##CURRENTSECTION#]]
Hidden=(#GameHub.RowsOfBoxes#>=[##CURRENTSECTION#Row]?0:1)
DynamicVariables=1
Group=GameHub

[BoxImageStyle]
ImageTint=255,255,255,175
Greyscale=#GameHub.Greyscale#
ImageName=#CURRENTPATH#Images\ImageSize[#GameHub.WHImageNum]\Image[##CURRENTSECTION#].png
Group=GroupBox[##CURRENTSECTION#]
Container=Box[##CURRENTSECTION#]
DynamicVariables=1

;----------------------------------------------------

[Box1]
Meter=Shape
MeterStyle=BoxStyle

[Box2]
Meter=Shape
MeterStyle=BoxStyle

[Box3]
Meter=Shape
MeterStyle=BoxStyle

[Box4]
Meter=Shape
MeterStyle=BoxStyle

[Box5]
Meter=Shape
MeterStyle=BoxStyle

[Box6]
Meter=Shape
MeterStyle=BoxStyle

[Box7]
Meter=Shape
MeterStyle=BoxStyle

[Box8]
Meter=Shape
MeterStyle=BoxStyle

[Box9]
Meter=Shape
MeterStyle=BoxStyle

[Box10]
Meter=Shape
MeterStyle=BoxStyle

[Box11]
Meter=Shape
MeterStyle=BoxStyle

[Box12]
Meter=Shape
MeterStyle=BoxStyle
