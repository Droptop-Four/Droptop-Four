[Variables]

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=0
TopBarHLSkew=1
TopBarSections=0

UseMicaBlur=0

DropdownMenuBlur=1
DropdownArrowStyle=1

CheckmarkStyle=1
ToggleStyle=1

;---

IconStyle=1

NewDesktopStyle=[#*IconStyle*]
TimeStyle=[#*IconStyle*]
MailStyle=[#*IconStyle*]
AlarmStyle=[#*IconStyle*]
VolumeStyle=[#*IconStyle*]
WeatherStyle=[#*IconStyle*]
WifiStyle=[#*IconStyle*]
BatteryStyle=[#*IconStyle*]
BatteryMaskStyle=1
DownloadsStyle=[#*IconStyle*]
RecentStyle=[#*IconStyle*]
CopyStyle=[#*IconStyle*]
AppDrawerStyle=[#*IconStyle*]

DropdownSliderStyle=2

;-------------------------
; Colors

SetColorByWallpaperOFF=0

TopBarBGColor1=0,0,0
TopBarBGColor2=0,0,0
TopBarBGColor3=0,0,0
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
TopBarHLColor1=255,255,255
TopBarHLColor2=255,255,255
TopBarHomeIconColor=255,255,255
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=255,255,255
TopBarShadowColor=0,0,0
TopBarGradientColor1=11,11,15
TopBarGradientColor2=211,211,215

SolidOverlayGradientColor1=255,255,255,0
SolidOverlayGradientColor2=255,255,255,0

DropdownBGColor1=0,0,0
DropdownFontColor1=255,255,255
DropdownFontColor2=255,255,255
DropdownItemHL=255,255,255
DropdownItemHL2=255,255,255
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

TopBarOpacity1=0
TopBarGradientOpacity1=76.5
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=0
TopBarSolidColorOpacity=15

DropdownMenuOpacity1=65
DropdownItemOpacity=255
DropdownStrokeOpacity=30

HighlightShapeOpacity=70
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=255
HighlightFontOpacity2=255

TopBarHLOpacity=65
DropdownHLOpacity=65

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(92*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(43*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

TopBarShadowOpacity=155

BlurTypeNum=1

ShowTopBarBlurBorder=1
ShowDropdownBlurBorder=0

;---

TopBarShadow=0
DropdownMenuShadow=0

TopBarFontShadow=1
TopBarFontShadowBlur=3

DropdownFontShadow=1
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=0
FontSizeOffset=1
IconSizeOffset=0
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=SF Pro Rounded

TopBarFontName=#FontName0#

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=600
ApplicationFontWeight=800

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
TopBarCornerMinMax1=6
DropdownCornerMinMax0=0
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(#TopBarCorner#*0.83)
DropdownHighlightCorner=(0*#DroptopSize#)

;-------------------------

BLANK=0
