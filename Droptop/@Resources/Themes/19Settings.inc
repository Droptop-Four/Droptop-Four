[Variables]

; --------------------------
; Menu options

TopBarBlur=1
TopBarGradient=0
TopBarHLSkew=0
TopBarSections=0

UseMicaBlur=0

DropdownMenuBlur=1
DropdownArrowStyle=2

CheckmarkStyle=1
ToggleStyle=1

;---

IconStyle=1

NewDesktopStyle=2
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

SetColorByWallpaperOFF=1

TopBarBGColor1=230,255,214
TopBarBGColor2=230,255,214
TopBarBGColor3=230,255,214
TopBarFontColor1=21,30,21
TopBarFontColor2=230,255,214
TopBarHLColor1=49,105,82
TopBarHLColor2=49,105,82
TopBarHomeIconColor=21,30,21
TopBarIconGreyscale=0
TopBarBorderTopColor=55,55,55
TopBarBorderBottomColor=55,55,55
TopBarStrokeColor=21,30,21
TopBarShadowColor=0,0,0
TopBarGradientColor1=11,11,15
TopBarGradientColor2=211,211,215

SolidOverlayGradientColor1=255,255,255,0
SolidOverlayGradientColor2=255,255,255,0

DropdownBGColor1=230,255,214
DropdownFontColor1=21,30,21
DropdownFontColor2=230,255,214
DropdownItemHL=49,105,82
DropdownItemHL2=49,105,82
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=21,30,21
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=155
TopBarGradientOpacity1=76.5
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=255
TopBarSolidColorOpacity=15

DropdownMenuOpacity1=155
DropdownItemOpacity=255
DropdownStrokeOpacity=255

HighlightShapeOpacity=215
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=[#*HighlightShapeOpacity*]
DropdownHLOpacity=[#*HighlightShapeOpacity*]

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(55*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(26*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

TopBarShadowOpacity=155

BlurTypeNum=1

ShowTopBarBlurBorder=0
ShowDropdownBlurBorder=0

;---

TopBarShadow=0
DropdownMenuShadow=0

TopBarFontShadow=0
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

FontName0=Pixeloid Sans

TopBarFontName=#FontName0#

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=400
ApplicationFontWeight=600

TopBarTitleCaseNum=0
DegreeSymbol=°
PercentSymbol="%"
MusicSymbol=#NotificationPlaying#
MailSymbol=#NotificationMail#

TopBarCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]
DropdownCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]

TopBarAntiAlias=0
DropdownAntiAlias=#TopBarAntiAlias#

;-------------------------
; Shapes & backgrounds

TopBarCornerMinMax0=0
TopBarCornerMinMax1=6
DropdownCornerMinMax0=1
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(0*#DroptopSize#)
DropdownHighlightCorner=(0*#DroptopSize#)

;-------------------------

BLANK=155
