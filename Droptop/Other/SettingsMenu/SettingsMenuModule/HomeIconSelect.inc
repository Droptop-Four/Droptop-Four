[Rainmeter]
OnRefreshAction=[!ShowMeterGroup [#NumberOfItems.Category[#CategoryNum[#SettingsMenuIndex]]]][!HideMeterGroup Items][!UpdateMeter *]

[Variables]
;----------------------------------
LuaLoc=#@#Scripts\Lua\DropScroll.lua
;----------------------------------

CategoryNum5=1
CategoryNum6=2
CategoryNum7=3
CategoryNum8=4
CategoryNum9=5
CategoryNum10=6
CategoryNum11=7

DropdownBGColor1=#TopBarBGColor1#
DropdownFontColor1=#TopBarFontColor1#
DropdownFontColor2=#TopBarFontColor2#
DropdownItemHL=#TopBarHLColor1#
DropdownItemHL2=#TopBarHLColor2#

DropdownMenuOpacity1=#TopBarOpacity1#

DropdownHLOpacity=#TopBarHLOpacity#
HighlightShapeOpacityDivisor1B=#HighlightShapeOpacityDivisor1A#

DropdownHighlightCorner=#TopBarHighlightCorner#

DropdownHLStrokeOpacity=#TopBarHLStrokeOpacity#
DropdownHLStrokeWidth=#TopBarHLStrokeWidth#

HomeColorTint0=[#*DropdownFontColor1*]
HomeColorTint1=255,255,255

HomeColorTintB0=[#*DropdownFontColor2*]
HomeColorTintB1=255,255,255

DropdownItemHeight=((#TopHeight#+#TopBarIconHOffset#)*1.5)

IconSize=Medium
ItemIconWH=32

DividerSpace=(3+#DropdownItemYOffset#+#DropdownStrokeWidth#)

MaxItem=10

ScrollTracker=10
AboveTotal=1

ContentFade=1

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]
U.HL=[!UpdateMeasureGroup Animation.HL][!UpdateMeterGroup Animation.HL][!Redraw]
U.SU=[!UpdateMeasureGroup Animation.SU][!UpdateMeterGroup Animation.SU][!Redraw]

DropdownItemPadding1=#DropdownNoIconPadding#

HomeIconColor0=Mono
HomeIconColor1=ColorS

HomeIconColor0S=MonoS
HomeIconColor1S=ColorS

;----------------------------------------------------

[FileCount]
Measure=Plugin
Plugin=FolderInfo
Folder="[mPath]"
InfoType=FileCount
IncludeHiddenFiles=0
IncludeSubFolders=0
IncludeSystemFiles=1
RegExpFilter=(?i).*.*

[NumberOfRows]
Measure=Calc
Formula=trunc((([&FileCount])/5)+0)
DynamicVariables=1

;----------------------------------------------------

[ScrollTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation
ActionList1=Start1|Wait 100|Start2|Wait 16|Repeat ContentFade,#W#,9|Wait 16|Finish
Start1=
Start2=[!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]
ContentFade=[!SetVariable ContentFade "(Clamp([#ContentFade]+0.1,0,1))"]#U#
Finish=[!SetVariable ContentFade 1][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]#U#
DynamicVariables=1
IgnoreWarnings=1

;----------------------------------------------------

[AnimationContainer]

[Background]

[HighlightBackground]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle 0,0,[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape2=Rectangle 0,0,[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth 0
Shape3=Rectangle 0,0,[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle 0,0,[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill Color 255,255,255,(55*#DropdownHLSolidColor#) | StrokeWidth 0
HLColorGradient=0 | #DropdownItemHL#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 1.0 | #DropdownItemHL2#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 0.0
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 0.0
X=[#CurrentSubFolder#:X]
Y=[#CurrentSubFolder#:Y]
MouseActionCursor=0
DynamicVariables=1
Group=Highlight | Animation.HL

 ;---------------------------------------------
 
[HomeIconStyle]
ImageCrop=-52,-52,104,104,5
ImageName="#@#TopImages\Home\#HomeIconWH#\[#HomeIconCat[#CategoryNum[#SettingsMenuIndex]]]\[#HomeIconColor[#HomeColorNum][#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]]\[##CURRENTSECTION#]"
ImageTint=[#HomeColorTint[#HomeColorNum]],#DropdownItemOpacity#
Padding=((#DropdownMenuWidth#-(((#TopHeight#+#TopBarIconHOffset#)*1.5)*5))/10),0,((#DropdownMenuWidth#-(((#TopHeight#+#TopBarIconHOffset#)*1.5)*5))/10),0
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=((#TopHeight#+#TopBarIconHOffset#)*1.5)
PreserveAspectRatio=1
X=R
Y=r
Greyscale=#DropdownIconGreyscale#
ImageAlpha=#DropdownItemOpacity#
ImageTint=#DropdownIconTint#
ImageFlip=None
MaskImagePath=
MaskImageName=
LeftMouseDownAction=[!SetVariable Category[#HomeIconCat[#CategoryNum[#SettingsMenuIndex]]].IconIndex [##CURRENTSECTION#] "Droptop\Other\SettingsMenu\SettingsMenu2"][!WriteKeyValue Variables Category[#HomeIconCat[#CategoryNum[#SettingsMenuIndex]]].IconIndex [##CURRENTSECTION#] "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\HomeIcon.inc"][!SetVariable CustomHomeButton 0][!SetVariable CustomHomeButton [#CustomHomeButton] "Droptop\DropdownBar"][!SetVariable CustomHomeButton [#CustomHomeButton] "Droptop\Other\SettingsMenu\SettingsMenu2"][!WriteKeyValue Variables CustomHomeButton [#CustomHomeButton] "#@#GlobalVar\UserSettings.inc"][!SetVariable HomeIconCatNum [#CategoryNum[#SettingsMenuIndex]]][!SetVariable HomeIconIndex [##CURRENTSECTION#]][!SetVariable HomeIconCatNum [#HomeIconCatNum] "Droptop\DropdownBar"][!SetVariable HomeIconCatNum [#HomeIconCatNum] "Droptop\Other\SettingsMenu\SettingsMenu2"][!SetVariable HomeIconIndex [#HomeIconIndex] "Droptop\DropdownBar"][!SetVariable HomeIconIndex [#HomeIconIndex] "Droptop\Other\SettingsMenu\SettingsMenu2"][!WriteKeyValue Variables HomeIconCatNum [#HomeIconCatNum] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeIconIndex [#HomeIconIndex] "#@#GlobalVar\UserSettings.inc"][!UpdateMeter Home "Droptop\DropdownBar"][!UpdateMeter * "Droptop\Other\SettingsMenu\SettingsMenu2"][!Redraw "Droptop\DropdownBar"][!Redraw "Droptop\Other\SettingsMenu\SettingsMenu2"]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# ImageTint "[#HomeColorTintB[#*HomeColorNum*]],#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION# ImageTint "[#HomeColorTint[#*HomeColorNum*]],#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
UpdateDivider=-1
Group=Items
Container=AnimationContainer

[1Icon]
MeterStyle=IconStyle | HomeIconStyle
X=(((#DropdownMenuWidth#-([#CURRENTSECTION#:W]*5))/2)+1)
Y=(#DropdownIconYoffset#-(#DropdownIconYoffset#%1)+#DropdownItemYOffset#)
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[2Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[3Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[4Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[5Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[6Icon]
MeterStyle=IconStyle | HomeIconStyle
X=(((#DropdownMenuWidth#-([#CURRENTSECTION#:W]*5))/2)+1)
Y=R
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[7Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[8Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[9Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[10Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[11Icon]
MeterStyle=IconStyle | HomeIconStyle
X=(((#DropdownMenuWidth#-([#CURRENTSECTION#:W]*5))/2)+1)
Y=R
Group=11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[12Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[13Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[14Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[15Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[16Icon]
MeterStyle=IconStyle | HomeIconStyle
X=(((#DropdownMenuWidth#-([#CURRENTSECTION#:W]*5))/2)+1)
Y=R
Group=16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[17Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[18Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[19Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=19 | 20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[20Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=20 | 21 | 22 | 23 | 24 | 25 | ItemIcon

[21Icon]
MeterStyle=IconStyle | HomeIconStyle
X=(((#DropdownMenuWidth#-([#CURRENTSECTION#:W]*5))/2)+1)
Y=R
Group=21 | 22 | 23 | 24 | 25 | ItemIcon

[22Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=22 | 23 | 24 | 25 | ItemIcon

[23Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=23 | 24 | 25 | ItemIcon

[24Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=24 | 25 | ItemIcon

[25Icon]
MeterStyle=IconStyle | HomeIconStyle
Group=25 | ItemIcon