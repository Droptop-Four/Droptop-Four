;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=5

FolderNumber=1

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc

; DropdownMenuWidth=#DropdownSubMenuWidth#

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

Box1=1
Box2=2

Box1Text=1
Box2Text=2

BoxPosition1=0
BoxPosition2=1

;-----------------------------------------

[InfoStyle]
LeftMouseDownAction=#Action0#

[IconStyle]
ImageName=#CURRENTPATH#Icons\#FolderNumber#\[##CURRENTSECTION#]Icon.png

[ArrowStyleB]
Hidden=1

[Background]
Shape2=

[HighlightBackground]

[HighlightSelected]

;-----------------------------------------

[1]
MeterStyle=InfoStyle

[2]
MeterStyle=InfoStyle

[3]
MeterStyle=InfoStyle

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle
