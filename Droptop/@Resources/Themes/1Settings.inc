[Variables]

;-------------------------
; Menu options

TopBarBlur=1
TopBarGradient=0
TopBarHLSkew=0
TopBarSections=0

UseMicaBlur=0

DropdownMenuBlur=1
DropdownArrowStyle=2

CheckmarkStyle=2
ToggleStyle=1

;---

IconStyle=1

NewDesktopStyle=2
TimeStyle=[#*IconStyle*]
MailStyle=1
AlarmStyle=[#*IconStyle*]
VolumeStyle=2
WeatherStyle=[#*IconStyle*]
WifiStyle=[#*IconStyle*]
BatteryStyle=1
BatteryMaskStyle=1
DownloadsStyle=1
RecentStyle=[#*IconStyle*]
CopyStyle=2
AppDrawerStyle=3

DropdownSliderStyle=1

;-------------------------
; Colors

SetColorByWallpaperOFF=0

TopBarBGColor1=30,30,30
TopBarBGColor2=30,30,30
TopBarBGColor3=30,30,30
TopBarFontColor1=213,213,215
TopBarFontColor2=255,255,255
TopBarHLColor1=213,213,215
TopBarHLColor2=213,213,215
TopBarHomeIconColor=213,213,215
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=0,0,0
TopBarShadowColor=0,0,0
TopBarGradientColor1=11,11,15
TopBarGradientColor2=211,211,215

SolidOverlayGradientColor1=255,255,255,0
SolidOverlayGradientColor2=255,255,255,0

DropdownBGColor1=30,30,30
DropdownFontColor1=255,255,255
DropdownFontColor2=255,255,255
DropdownItemHL=213,213,215
DropdownItemHL2=213,213,215
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

TopBarOpacity1=165
TopBarGradientOpacity1=75
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=85
TopBarSolidColorOpacity=15

DropdownMenuOpacity1=160
DropdownItemOpacity=220
DropdownStrokeOpacity=85

HighlightShapeOpacity=85
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=5
HighlightFontOpacity1=255
HighlightFontOpacity2=255

TopBarHLOpacity=85
DropdownHLOpacity=85

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(92*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(43*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

TopBarShadowOpacity=155

BlurTypeNum=0

ShowTopBarBlurBorder=0
ShowDropdownBlurBorder=0

;---

TopBarShadow=0
DropdownMenuShadow=0

TopBarFontShadow=1
TopBarFontShadowBlur=2.5

DropdownFontShadow=1
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=0
FontSizeOffset=0
IconSizeOffset=0
FontSpaceOffset=0.1
TitleSpaOffset=0

FontName0=Urbanist Thin

TopBarFontName=#FontName0#

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=500
ApplicationFontWeight=700

TopBarTitleCaseNum=0
DegreeSymbol=°
PercentSymbol=%
MusicSymbol=♪
MailSymbol=✉

TopBarCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]
DropdownCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]

TopBarAntiAlias=1
DropdownAntiAlias=#TopBarAntiAlias#

;-------------------------
; Shapes & backgrounds

TopBarCornerMinMax0=0
TopBarCornerMinMax1=6
DropdownCornerMinMax0=0
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=((6*0.83)*#DroptopSize#)
DropdownHighlightCorner=0

;-------------------------

BLANK=30,30,30
