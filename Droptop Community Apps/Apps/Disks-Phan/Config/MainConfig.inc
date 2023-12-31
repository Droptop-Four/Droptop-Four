;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
SkinHeight=(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#+(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#)+((#DropdownMenuCutout#+(3*#DroptopSize#))*#NumberOfDisks#)+(((#BoxHeight1#*#DroptopSize#)-(#DropdownMenuCutout#*2))*#NumberOfDisks#)+(#DropdownStrokeWidth#*(#NumberOfDisks#-1))+2)

[Variables]
CustomAppPosition=4

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[measureTotalDisk1]
; This measure returns the total disk space
Measure=FreeDiskSpace
Drive=#disk1#:
Total=1
UpdateDivider=120
IgnoreRemovable=0

[measureUsedDisk1]
; Returns inverted value of free disk space (i.e. used disk space)
Measure=FreeDiskSpace
Drive=#disk1#:
InvertMeasure=1
UpdateDivider=120
IgnoreRemovable=0

[measureTotalDisk2]
Measure=FreeDiskSpace
Drive=#disk2#:
Total=1
UpdateDivider=120
IgnoreRemovable=0

[measureUsedDisk2]
Measure=FreeDiskSpace
Drive=#disk2#:
InvertMeasure=1
UpdateDivider=120
IgnoreRemovable=0

[measureTotalDisk3]
Measure=FreeDiskSpace
Drive=#disk3#:
Total=1
UpdateDivider=120
IgnoreRemovable=0
IgnoreRemovable=0

[measureUsedDisk3]
Measure=FreeDiskSpace
Drive=#disk3#:
InvertMeasure=1
UpdateDivider=120
IgnoreRemovable=0

[measureTotalDisk4]
Measure=FreeDiskSpace
Drive=#disk4#:
Total=1
UpdateDivider=120
IgnoreRemovable=0

[measureUsedDisk4]
Measure=FreeDiskSpace
Drive=#disk4#:
InvertMeasure=1
UpdateDivider=120
IgnoreRemovable=0

[measureTotalDisk5]
Measure=FreeDiskSpace
Drive=#disk5#:
Total=1
UpdateDivider=120
IgnoreRemovable=0

[measureUsedDisk5]
Measure=FreeDiskSpace
Drive=#disk5#:
InvertMeasure=1
UpdateDivider=120
IgnoreRemovable=0

;----------------------------------------------------
[InfoStyle]

[IconStyle]

[ArrowStyleB]

[TextStyle]

[BoxStyle]

[TextStyleRight]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
W=(#DropdownMenuWidth#-([#CURRENTSECTION#:X]*2))
StringAlign=Right
ClipString=1

[styleBar]
BarColor=#DropdownItemHL#,255
BarOrientation=HORIZONTAL
SolidColor=#DropdownFontColor1#,55
Group=Box
DynamicVariables=1

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB

;----------------------------------------------------

[Box1]
MeterStyle=BoxStyle | BoxActionStyle
Y=[Background:H]
Group=Box | Box1

[Box2]
MeterStyle=BoxStyle | BoxActionStyle
Group=Box | Box2

[Box3]
MeterStyle=BoxStyle | BoxActionStyle
Group=Box | Box3

[Box4]
MeterStyle=BoxStyle | BoxActionStyle
Group=Box | Box4

[Box5]
MeterStyle=BoxStyle | BoxActionStyle
Group=Box | Box5
