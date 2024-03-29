[MeasureRandom1]
Measure=Calc
Formula=Random
UpdateRandom=0
LowBound=125
HighBound=205
UpdateDivider=-1

[MeasureRandom2]
Measure=Calc
Formula=Random
UpdateRandom=0
LowBound=125
HighBound=205
UpdateDivider=-1

[MeasureRandom3]
Measure=Calc
Formula=Random
UpdateRandom=0
LowBound=125
HighBound=205
UpdateDivider=-1

[Variables]

Color1=[MeasureRandom1]
Color2=[MeasureRandom2]
Color3=[MeasureRandom3]

; --------------------------
; Menu options

TopBarBlur=1
TopBarGradient=0
TopBarHLSkew=0
TopBarSections=0

DropdownMenuBlur=0
DropdownArrowStyle=1

;---

IconStyle=1

NewDesktopStyle=1
TimeStyle=[#*IconStyle*]
MailStyle=[#*IconStyle*]
AlarmStyle=[#*IconStyle*]
VolumeStyle=[#*IconStyle*]
WeatherStyle=[#*IconStyle*]
WifiStyle=[#*IconStyle*]
BatteryStyle=[#*IconStyle*]
BatteryMaskStyle=[#*IconStyle*]
DownloadsStyle=[#*IconStyle*]
RecentStyle=[#*IconStyle*]
CopyStyle=[#*IconStyle*]
AppDrawerStyle=[#*IconStyle*]

DropdownSliderStyle=3

;-------------------------
; Colors

SetColorByWallpaperOFF=0

TopBarBGColor1=31,31,31
TopBarBGColor2=31,31,31
TopBarBGColor3=31,31,31
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
TopBarHLColor1=144,147,151
TopBarHomeIconColor=255,255,255
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=0,0,0

DropdownBGColor1=31,31,31
DropdownFontColor1=255,255,255
DropdownFontColor2=255,255,255
; DropdownItemHL=31,31,31
DropdownItemHL=144,147,151
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=0,0,0
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=200
TopBarGradientOpacity1=128
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=0

DropdownMenuOpacity1=255
DropdownItemOpacity=255
DropdownStrokeOpacity=30

HighlightShapeOpacity=95
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=1
HighlightShapeOpacityDivisor2B=1
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=[#*HighlightShapeOpacity*]
DropdownHLOpacity=[#*HighlightShapeOpacity*]

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(105*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(52*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

TopBarShadowOpacity=155

BlurTypeNum=0

;---

TopBarShadow=0
DropdownMenuShadow=0

TopBarFontShadow=1
TopBarFontShadowBlur=2.5

DropdownFontShadow=0
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=0
FontSizeOffset=0
IconSizeOffset=0
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=Product Sans

FontName1=#UniversalFont#
TopBarFontName=[#FontName[#AltFont[#LanguageNum]]]

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=400
ApplicationFontWeight=600

TopBarTitleCaseNum=0
DegreeSymbol=°
PercentSymbol=%
MusicSymbol=#NotificationPlaying#
MailSymbol=#NotificationMail#

TopBarCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]
DropdownCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]

TopBarAntiAlias=1
DropdownAntiAlias=#TopBarAntiAlias#

;-------------------------
; Shapes & backgrounds

TopBarCornerMinMax0=0
TopBarCornerMinMax1=10
DropdownCornerMinMax0=2
DropdownCornerMinMax1=(20*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=[#TopBarCornerMinMax[#TopBarRoundCorners]]
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=([#DropdownCornerMinMax[#DropdownRoundCorners]]*0.83)
DropdownHighlightCorner=([#DropdownCornerMinMax[#DropdownRoundCorners]]*0.83)

;-------------------------

BLANK=255,255,255
