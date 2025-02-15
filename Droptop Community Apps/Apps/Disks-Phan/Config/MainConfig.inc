;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=8

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

measureTotalType1=1
measureTotalType2=2
measureTotalType3=3
measureTotalType4=4
measureTotalType5=5
measureTotalType6=6
measureTotalType7=7
measureTotalType8=8
measureTotalType9=9
measureTotalType10=10
measureTotalType11=11
measureTotalType12=12
measureTotalType13=13
measureTotalType14=14
measureTotalType15=15
measureTotalType16=16
measureTotalType17=17
measureTotalType18=18
measureTotalType19=19
measureTotalType20=20
measureTotalType21=21
measureTotalType22=22
measureTotalType23=23
measureTotalType24=24
measureTotalType25=25
measureTotalType26=26

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
Box13=13
Box14=14
Box15=15
Box16=16
Box17=17
Box18=18
Box19=19
Box20=20
Box21=21
Box22=22
Box23=23
Box24=24
Box25=25
Box26=26

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
Box13Text=13
Box14Text=14
Box15Text=15
Box16Text=16
Box17Text=17
Box18Text=18
Box19Text=19
Box20Text=20
Box21Text=21
Box22Text=22
Box23Text=23
Box24Text=24
Box25Text=25
Box26Text=26

Box1Text2=1
Box2Text2=2
Box3Text2=3
Box4Text2=4
Box5Text2=5
Box6Text2=6
Box7Text2=7
Box8Text2=8
Box9Text2=9
Box10Text2=10
Box11Text2=11
Box12Text2=12
Box13Text2=13
Box14Text2=14
Box15Text2=15
Box16Text2=16
Box17Text2=17
Box18Text2=18
Box19Text2=19
Box20Text2=20
Box21Text2=21
Box22Text2=22
Box23Text2=23
Box24Text2=24
Box25Text2=25
Box26Text2=26

HideBox1=1
HideBox2=1
HideBox3=1
HideBox4=1
HideBox5=1
HideBox6=1
HideBox7=1
HideBox8=1
HideBox9=1
HideBox10=1
HideBox11=1
HideBox12=1
HideBox13=1
HideBox14=1
HideBox15=1
HideBox16=1
HideBox17=1
HideBox18=1
HideBox19=1
HideBox20=1
HideBox21=1
HideBox22=1
HideBox23=1
HideBox24=1
HideBox25=1
HideBox26=1

; DropdownMenuBlur=0
; DropdownMenuOpacity1=255

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[measureTotalType1]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_1#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk1]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_1#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box1

[measureUsedDisk1]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_1#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box1

;----------------------------------------------------

[measureTotalType2]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_2#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk2]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_2#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box2

[measureUsedDisk2]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_2#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box2

;----------------------------------------------------

[measureTotalType3]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_3#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk3]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_3#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box3

[measureUsedDisk3]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_3#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box3

;----------------------------------------------------

[measureTotalType4]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_4#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk4]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_4#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box4

[measureUsedDisk4]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_4#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box4

;----------------------------------------------------

[measureTotalType5]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_5#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk5]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_5#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box5

[measureUsedDisk5]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_5#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box5

;----------------------------------------------------

[measureTotalType6]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_6#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk6]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_6#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box6

[measureUsedDisk6]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_6#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box6

;----------------------------------------------------

[measureTotalType7]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_7#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk7]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_7#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box7

[measureUsedDisk7]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_7#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box7

;----------------------------------------------------

[measureTotalType8]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_8#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk8]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_8#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box8

[measureUsedDisk8]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_8#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box8

;----------------------------------------------------

[measureTotalType9]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_9#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk9]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_9#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box9

[measureUsedDisk9]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_9#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box9

;----------------------------------------------------

[measureTotalType10]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_10#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk10]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_10#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box10

[measureUsedDisk10]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_10#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box10

;----------------------------------------------------

[measureTotalType11]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_11#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk11]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_11#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box11

[measureUsedDisk11]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_11#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box11

;----------------------------------------------------

[measureTotalType12]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_12#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk12]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_12#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box12

[measureUsedDisk12]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_12#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box12

;----------------------------------------------------

[measureTotalType13]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_13#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk13]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_13#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box13

[measureUsedDisk13]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_13#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box13

;----------------------------------------------------

[measureTotalType14]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_14#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk14]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_14#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box14

[measureUsedDisk14]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_14#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box14

;----------------------------------------------------

[measureTotalType15]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_15#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk15]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_15#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box15

[measureUsedDisk15]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_15#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box15

;----------------------------------------------------

[measureTotalType16]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_16#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk16]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_16#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box16

[measureUsedDisk16]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_16#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box16

;----------------------------------------------------

[measureTotalType17]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_17#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk17]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_17#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box17

[measureUsedDisk17]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_17#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box17

;----------------------------------------------------

[measureTotalType18]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_18#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk18]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_18#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box18

[measureUsedDisk18]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_18#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box18

;----------------------------------------------------

[measureTotalType19]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_19#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk19]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_19#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box19

[measureUsedDisk19]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_19#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box19

;----------------------------------------------------

[measureTotalType20]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_20#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk20]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_20#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box20

[measureUsedDisk20]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_20#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box20

;----------------------------------------------------

[measureTotalType21]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_21#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk21]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_21#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box21

[measureUsedDisk21]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_21#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box21

;----------------------------------------------------

[measureTotalType22]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_22#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk22]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_22#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box22

[measureUsedDisk22]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_22#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box22

;----------------------------------------------------

[measureTotalType23]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_23#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk23]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_23#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box23

[measureUsedDisk23]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_23#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box23

;----------------------------------------------------

[measureTotalType24]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_24#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk24]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_24#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box24

[measureUsedDisk24]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_24#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box24

;----------------------------------------------------

[measureTotalType25]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_25#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk25]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_25#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box25

[measureUsedDisk25]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_25#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box25

[measureTotalType26]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_26#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box[##CURRENTSECTION#]][!SetVariable HideBox[##CURRENTSECTION#] 0][!ShowMeterGroup Box[##CURRENTSECTION#]][!UpdateMeterGroup Box[##CURRENTSECTION#]]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk26]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_26#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box26

[measureUsedDisk26]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_26#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box26

;----------------------------------------------------

[GeneralSettings]

[InfoStyle]

[IconStyle]

[ArrowStyleB]

[TextStyle]

[ShapeContainer]
Meter=Shape
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(((#BoxHeight#*#DroptopSize#)-(#DropdownMenuCutout#*2))*(26-(#HideBox1#+#HideBox2#+#HideBox3#+#HideBox4#+#HideBox5#+#HideBox6#+#HideBox7#+#HideBox8#+#HideBox9#+#HideBox10#+#HideBox11#+#HideBox12#+#HideBox13#+#HideBox14#+#HideBox15#+#HideBox16#+#HideBox17#+#HideBox18#+#HideBox19#+#HideBox20#+#HideBox21#+#HideBox22#+#HideBox23#+#HideBox24#+#HideBox25#+#HideBox26#))+((3*#DroptopSize#)*(25-(#HideBox1#+#HideBox2#+#HideBox3#+#HideBox4#+#HideBox5#+#HideBox6#+#HideBox7#+#HideBox8#+#HideBox9#+#HideBox10#+#HideBox11#+#HideBox12#+#HideBox13#+#HideBox14#+#HideBox15#+#HideBox16#+#HideBox17#+#HideBox18#+#HideBox19#+#HideBox20#+#HideBox21#+#HideBox22#+#HideBox23#+#HideBox24#+#HideBox25#+#HideBox26#)))),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(((#BoxHeight#*#DroptopSize#)-(#DropdownMenuCutout#*2))*(26-(#HideBox1#+#HideBox2#+#HideBox3#+#HideBox4#+#HideBox5#+#HideBox6#+#HideBox7#+#HideBox8#+#HideBox9#+#HideBox10#+#HideBox11#+#HideBox12#+#HideBox13#+#HideBox14#+#HideBox15#+#HideBox16#+#HideBox17#+#HideBox18#+#HideBox19#+#HideBox20#+#HideBox21#+#HideBox22#+#HideBox23#+#HideBox24#+#HideBox25#+#HideBox26#))+((3*#DroptopSize#)*(25-(#HideBox1#+#HideBox2#+#HideBox3#+#HideBox4#+#HideBox5#+#HideBox6#+#HideBox7#+#HideBox8#+#HideBox9#+#HideBox10#+#HideBox11#+#HideBox12#+#HideBox13#+#HideBox14#+#HideBox15#+#HideBox16#+#HideBox17#+#HideBox18#+#HideBox19#+#HideBox20#+#HideBox21#+#HideBox22#+#HideBox23#+#HideBox24#+#HideBox25#+#HideBox26#)))),#DropdownBGCorner# | Extend HLColor
DynamicVariables=1
Shape3=
Y=[Background:YH]

[BoxStyle]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),((#BoxHeight#*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),((#BoxHeight#*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Extend HLColor
Shape3=
HLColor=Fill Color #DropdownItemHL#,0 | StrokeWidth 0
LeftMouseUpAction=["[#Disks-Phan___Disk_[##CURRENTSECTION#]]:\"]
Y=R
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable MeasureLoopValue [##CURRENTSECTION#]][!UpdateMeasureGroup MeasureDisks][!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #*DropdownStrokeColor*#,(#*DropdownStrokeOpacity*#*#*ActionTimer.HLFadeIn*#)"""][!SetOption Box[##CURRENTSECTION#]Text FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity1*#"][!SetOption Box[##CURRENTSECTION#]Text2 FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity1*#"][!SetOption #CURRENTSECTION#Bar FillColor2 "Fill Color #*DropdownFontColor2*#,255"][!SetOption #CURRENTSECTION#Bar FillColor1 "Fill Color #*DropdownFontColor2*#,55"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable MeasureLoopValue [##CURRENTSECTION#]][!UpdateMeasureGroup MeasureDisks][!SetOption #CURRENTSECTION# HLColor ""][!SetOption Box[##CURRENTSECTION#]Text FontColor ""][!SetOption Box[##CURRENTSECTION#]Text2 FontColor ""][!SetOption #CURRENTSECTION#Bar FillColor2 ""][!SetOption #CURRENTSECTION#Bar FillColor1 ""][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
Group=Box | Box[##CURRENTSECTION#] | Animation.HL
DynamicVariables=1
Hidden=1
Container=ShapeContainer

; MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #*DropdownStrokeColor*#,(#*DropdownStrokeOpacity*#*#*ActionTimer.HLFadeIn*#)"""][!SetOption AlwaysShowText FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeterGroup AlwaysShow][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
; MouseLeaveAction=[!CommandMeasure MeasureActionTimer "stop 2"][!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,0 | StrokeWidth 0"""][!SetOption AlwaysShowText FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeterGroup AlwaysShow][!Redraw]

[BoxTextStyle]
StringCase=UPPER
Text=[#Disks-Phan___Disk_[##CURRENTSECTION#]]:
X=([Box[##CURRENTSECTION#]:X]+(16*#DroptopSize#))
Y=([Box[##CURRENTSECTION#]:Y]-[Background:YH]+(19*#DroptopSize#))
W=(45*#DroptopSize#)
Group=Box | Box[##CURRENTSECTION#] | BoxText | BoxText[##CURRENTSECTION#]
DynamicVariables=1
Hidden=1
Container=ShapeContainer

[BoxTextStyle2]
StringAlign=Right
MeasureName=measureUsedDisk[##CURRENTSECTION#]
MeasureName2=measureTotalDisk[##CURRENTSECTION#]
Text=%1B/%2B
NumOfDecimals=1
AutoScale=1
X=(#DropdownMenuWidth#-(16*#DroptopSize#))
W=(180*#DroptopSize#)
Y=([Box[##CURRENTSECTION#]:Y]-[Background:YH]+(19*#DroptopSize#))
Group=Box | Box[##CURRENTSECTION#] | BoxText | BoxText[##CURRENTSECTION#]
DynamicVariables=1
Hidden=1
Container=ShapeContainer

[BoxBarStyle]
Shape=Rectangle 0,0,(#DropdownMenuWidth#-(32*#DroptopSize#)),(5*#DroptopSize#),(2.5*#DroptopSize#) | StrokeWidth 0 | Extend FillColor1
Shape2=Rectangle 0,0,((#DropdownMenuWidth#-(32*#DroptopSize#))*([&measureUsedDisk[##CURRENTSECTION#]]/[&measureTotalDisk[##CURRENTSECTION#]])),(5*#DroptopSize#),(2.5*#DroptopSize#) | StrokeWidth 0 | Extend FillColor2
FillColor1=Fill Color #DropdownFontColor1#,55
FillColor2=Fill Color #DropdownItemHL#,255
X=([Box[##CURRENTSECTION#]:X]+(16*#DroptopSize#))
Y=([Box[##CURRENTSECTION#]:Y]-[Background:YH]+(38*#DroptopSize#))
H=(5*#DroptopSize#)
Group=Box | Box[##CURRENTSECTION#] | BoxText[##CURRENTSECTION#]
DynamicVariables=1
Hidden=1
Container=ShapeContainer

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
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[2Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[3Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[4Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[5Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[6Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[7Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[8Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[9Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[10Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

;-----------------------------------------

[DividerStyle]
Shape=#DividerShape#
Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
; Container=AnimationContainer
DynamicVariables=1

[Divider1]
Meter=Shape
MeterStyle=DividerStyle

[Divider2]
Meter=Shape
MeterStyle=DividerStyle

[Divider3]
Meter=Shape
MeterStyle=DividerStyle

[Divider4]
Meter=Shape
MeterStyle=DividerStyle

[Divider5]
Meter=Shape
MeterStyle=DividerStyle

[Divider6]
Meter=Shape
MeterStyle=DividerStyle

[Divider7]
Meter=Shape
MeterStyle=DividerStyle

[Divider8]
Meter=Shape
MeterStyle=DividerStyle

[Divider9]
Meter=Shape
MeterStyle=DividerStyle

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
MeterStyle=BoxStyle | GeneralSettings
Y=0

[Box2]
MeterStyle=BoxStyle | GeneralSettings

[Box3]
MeterStyle=BoxStyle | GeneralSettings

[Box4]
MeterStyle=BoxStyle | GeneralSettings

[Box5]
MeterStyle=BoxStyle | GeneralSettings

[Box6]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box7]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box8]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box9]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box10]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box11]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box12]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box13]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box14]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box15]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box16]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box17]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box18]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box19]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box20]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box21]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box22]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box23]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box24]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box25]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box26]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

;----------------------------------------------------

[Box1Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box2Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box3Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box4Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box5Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box6Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box7Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box8Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box9Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box11Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box12Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box13Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box14Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box15Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box16Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box17Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box18Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box19Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box20Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box21Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box22Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box23Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box24Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box25Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box26Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

;----------------------------------------------------

[Box1Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box2Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box3Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box4Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box5Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box6Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box7Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box8Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box9Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box10Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box11Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box12Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box13Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box14Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box15Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box16Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box17Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box18Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box19Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box20Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box21Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box22Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box23Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box24Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box25Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box26Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

;----------------------------------------------------

[Box1Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box2Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box3Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box4Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box5Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box6Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box7Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box8Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box9Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box10Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box11Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box12Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box13Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box14Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box15Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box16Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box17Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box18Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box19Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box20Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box21Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box22Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box23Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box24Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box25Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box26Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings
