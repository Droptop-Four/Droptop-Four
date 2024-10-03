[Variables]
Roll0=None
Roll1=Horizontal
Roll2=Vertical
Roll3=Both

HomeColorTint0=[#*DropdownFontColor1*]
HomeColorTint1=255,255,255

HomeColorTintB0=[#*DropdownFontColor2*]
HomeColorTintB1=255,255,255

CategoryLogos.IconIndex=12
CategoryCreatures.IconIndex=1
CategoryFood.IconIndex=11
CategorySeasonal.IconIndex=11
CategoryObjects.IconIndex=3
CategorySymbols.IconIndex=8

; HomeColorB0=
; HomeColorB1=Color

; HomeColorShadow0=
; HomeColorShadow1=S

; HomeImageName0=#SKINSPATH#Droptop Folders\Other files\Home\Button[#HomeColorB[#*HomeColorNum*]][#HomeColorShadow[#*HomeColorNum*]].png
; HomeImageName1=#@#TopImages\Home\#HomeIconWH#\[#HomeIconCat[#*HomeIconCatNum*]]\[#HomeIconColor[#*HomeColorNum*]][#HomeColorShadow[#*HomeColorNum*]]\[#*HomeIconIndex*]
; HomeImageName1=#@#TopImages\Home\#HomeIconWH#\[#HomeIconCat[#*HomeIconCatNum*]]\[#HomeIconColor[#*HomeColorNum*]][#TopBarFontShadow][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]]\[#*HomeIconIndex*]

CustomHomeButton1=0
CustomHomeButton0=1

[RandomRoll]
Measure=Calc
Formula=Random
LowBound=0
HighBound=3
Group=RandomHome
UniqueRandom=1
DynamicVariables=1

[RandomHomeCategory]
Measure=Calc
Formula=Random
LowBound=1
HighBound=#NumberOfHomeCategories#
Group=RandomHome
UniqueRandom=1
DynamicVariables=1

[RandomHomeIndex]
Measure=Calc
Formula=Random
LowBound=1
HighBound=[#NumberOfItems.Category[&RandomHomeCategory]]
Group=RandomHome
UniqueRandom=1
DynamicVariables=1

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*(#NumberOfItems#+0)+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
DynamicVariables=1

[FolderBlock]
; SolidColor=255,55,55,55
H=(#DropdownItemHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*4)+(#DividerSpace#*4))

[LockedStyle0]
LeftMouseDownAction=[!WriteKeyValue Variables NotificationText "#NotificationSupporter#" "#SKINSPATH#Droptop\Other\NotificationPopup\NotificationPopup.ini"][!DeactivateConfig "Droptop\Other\NotificationPopup"][!ActivateConfig "Droptop\Other\NotificationPopup" "NotificationPopup.ini"][!Move [#CURRENTCONFIGX] ([#CURRENTCONFIGY]+[[#CURRENTSECTION]:Y]) "Droptop\Other\NotificationPopup"]
; MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
; MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 2"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]

[LockedStyle1]

[LockedIconStyle0]
ImageName=#@#Icons\Fixed\#IconSize#\lock.png
MaskImageName=""
MaskImagePath=""
ImageFlip=None

[LockedIconStyle1]

[1]
MeterStyle=InfoStyle | ItemStyle | LockedStyle#Supporter#
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption CustomIcon ImageTint "[#HomeColorTintB[#*HomeColorNum*]]"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter CustomIcon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption CustomIcon ImageTint "[#HomeColorTint[#*HomeColorNum*]]"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter CustomIcon][!UpdateMeter #CURRENTSECTION#][!Redraw]
MiddleMouseDoubleClickAction=#CloseSettingsMenu#[!CommandMeasure FileChoose "ChooseImage 6" "Droptop\DropdownBar"]
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
Hidden=0
Group=None

[1Icon]
MeterStyle=IconStyle | LockedIconStyle#Supporter#
X=#DropdownIconXoffset#
Y=[1:Y]

[1Arrow]
Shape=

[CustomIcon]
Meter=Image
MeterStyle=IconStyle
ImageFlip=None
ImageTint=[#HomeColorTint[#HomeColorNum]]
MaskImagePath=
MaskImageName=
Padding=0,0,0,0
ImageCrop=-52,-52,104,104,5
ImageName=[#HomeButtonLocation[#CustomHomeButton[#CustomHomeButton]][#HomeColorNum]]
ImageAlpha=(#DropdownItemOpacity#/1.5)
X=(#DropdownMenuWidth#-[#CURRENTSECTION#:W]-#DropdownIconXoffset#)
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#)
H=#DropdownItemHeight#
W=#DropdownItemHeight#
GreyScale=0
PreserveAspectRatio=1
LeftMouseDownAction=[!SetVariable CustomHomeButton (#CustomHomeButton#=1?0:1)][!SetVariable CustomHomeButton [#CustomHomeButton] "Droptop\DropdownBar"][!WriteKeyValue Variables CustomHomeButton [#CustomHomeButton] "#@#GlobalVar\UserSettings.inc"][!UpdateMeter *][!UpdateMeter Home "Droptop\DropdownBar"][!UpdateMeter WinButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha "(#*DropdownItemOpacity*#/1.5)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=0
Container=AnimationContainer

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[2]
LeftMouseDownAction=#ToggleAnimation#[!SetVariable HomeColorNum (#HomeColorNum#=0?1:0)][!SetVariable HomeColorNum [#HomeColorNum] "Droptop\DropdownBar"][!SetVariable HomeColorNum [#HomeColorNum] "Droptop\Other\SettingsMenu\SettingsMenu3"][!WriteKeyValue Variables HomeColorNum [#HomeColorNum] "#@#GlobalVar\UserSettings.inc"][!SetOption Home ImageTint "[#HomeButtonColor[#*HomeColorNum*]]" "Droptop\DropdownBar"][!SetOption WinButton ImageTint "[#HomeButtonColor[#*HomeColorNum*]]" "Droptop\DropdownBar"][!UpdateMeter *][!UpdateMeter * "Droptop\Other\SettingsMenu\SettingsMenu3"][!UpdateMeter Home "Droptop\DropdownBar"][!UpdateMeter WinButton "Droptop\DropdownBar"][!Redraw "Droptop\Other\SettingsMenu\SettingsMenu3"][!Redraw "Droptop\DropdownBar"]
Y=(#DividerSpace#*2)R

[2Icon]
Y=(#DividerSpace#*2)R

[2Arrow]
Shape=

[3Arrow]
Shape=

[4]
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption DiceIcon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter DiceIcon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption DiceIcon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter DiceIcon][!UpdateMeter #CURRENTSECTION#][!Redraw]

[4Arrow]
Shape=

[DiceIcon]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\#IconSize#\dice.png
ImageAlpha=(#DropdownItemOpacity#/1.5)
MaskImagePath=
MaskImageName=
ImageFlip=None
X=(#DropdownMenuWidth#-[#CURRENTSECTION#:W]-#DropdownIconXoffset#)
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*3)+(#DividerSpace#*2))
LeftMouseDownAction=[!SetOption #CURRENTSECTION# ImageFlip [#Roll[&RandomRoll]]][!SetVariable CustomHomeButton 0][!SetVariable CustomHomeButton [#CustomHomeButton] "Droptop\DropdownBar"][!WriteKeyValue Variables CustomHomeButton [#CustomHomeButton] "#@#GlobalVar\UserSettings.inc"][!SetVariable HomeIconCatNum [RandomHomeCategory]][!SetVariable HomeIconCatNum [RandomHomeCategory] "Droptop\DropdownBar"][!WriteKeyValue Variables HomeIconCatNum [RandomHomeCategory] "#@#GlobalVar\UserSettings.inc"][!SetVariable HomeIconIndex [RandomHomeIndex]][!SetVariable HomeIconIndex [RandomHomeIndex] "Droptop\DropdownBar"][!WriteKeyValue Variables HomeIconIndex [RandomHomeIndex] "#@#GlobalVar\UserSettings.inc"][!UpdateMeasureGroup RandomHome][!UpdateMeter *][!UpdateMeter Home "Droptop\DropdownBar"][!UpdateMeter WinButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha "(#*DropdownItemOpacity*#/1.5)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=0
Container=AnimationContainer
Group=None

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*4)-(#DividerHeight#/2))

[5]
Y=(#DividerSpace#*2)R

[5Icon]
Y=(#DividerSpace#*2)R
ImageCrop=-32,-32,64,64,5
ImageName=#SKINSPATH#Droptop\@Resources\TopImages\Home\64\Logos\Mono\#CategoryLogos.IconIndex#

[6Icon]
ImageCrop=-32,-32,64,64,5
ImageName=#SKINSPATH#Droptop\@Resources\TopImages\Home\64\Creatures\Mono\#CategoryCreatures.IconIndex#

[7Icon]
ImageCrop=-32,-32,64,64,5
ImageName=#SKINSPATH#Droptop\@Resources\TopImages\Home\64\Food\Mono\#CategoryFood.IconIndex#

[8Icon]
ImageCrop=-32,-32,64,64,5
ImageName=#SKINSPATH#Droptop\@Resources\TopImages\Home\64\Seasonal\Mono\#CategorySeasonal.IconIndex#

[9Icon]
ImageCrop=-32,-32,64,64,5
ImageName=#SKINSPATH#Droptop\@Resources\TopImages\Home\64\Objects\Mono\#CategoryObjects.IconIndex#

[10Icon]
ImageCrop=-32,-32,64,64,5
ImageName=#SKINSPATH#Droptop\@Resources\TopImages\Home\64\Symbols\Mono\#CategorySymbols.IconIndex#

[5Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*4)+(#DividerSpace#*4))
Hidden=0

[6Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*5)+(#DividerSpace#*4))
Hidden=0

[7Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*6)+(#DividerSpace#*4))
Hidden=0

[8Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*7)+(#DividerSpace#*4))
Hidden=0

[9Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*8)+(#DividerSpace#*4))
Hidden=0

[10Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*9)+(#DividerSpace#*4))
Hidden=0

[11Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*10)+(#DividerSpace#*4))
Hidden=0
