[Variables]

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=1
TopBarHLSkew=0
TopBarSections=0

UseMicaBlur=0

DropdownMenuBlur=1
DropdownArrowStyle=1

CheckmarkStyle=1
ToggleStyle=1

;---

IconStyle=1

NewDesktopStyle=3
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

DropdownSliderStyle=2

;-------------------------
; Colors

SetColorByWallpaperOFF=1

TopBarBGColor1=1,38,20
TopBarBGColor2=1,38,20
TopBarBGColor3=1,38,20
TopBarFontColor1=15,255,132
TopBarFontColor2=15,255,132
TopBarHLColor1=15,255,132
TopBarHLColor2=[#*TopBarHLColor1*]
TopBarHomeIconColor=15,255,132
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=15,255,132
TopBarShadowColor=0,0,0
TopBarGradientColor1=11,11,15
TopBarGradientColor2=211,211,215

SolidOverlayGradientColor1=255,255,255,0
SolidOverlayGradientColor2=255,255,255,0

DropdownBGColor1=1,38,20
DropdownFontColor1=15,255,132
DropdownFontColor2=15,255,132
DropdownItemHL=15,255,132
DropdownItemHL2=[#*DropdownItemHL*]
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=15,255,132
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=215
TopBarGradientOpacity1=76.5
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=255
TopBarSolidColorOpacity=15

DropdownMenuOpacity1=235
DropdownItemOpacity=255
DropdownStrokeOpacity=255

HighlightShapeOpacity=255
HighlightShapeOpacityDivisor1A=5
HighlightShapeOpacityDivisor1B=5
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=[#*HighlightShapeOpacity*]
DropdownHLOpacity=[#*HighlightShapeOpacity*]

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(92*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(43*(#TopBarOpacity1#/255))

TopBarHLShadow=1
DropdownHLShadow=1

TopBarShadowOpacity=155

BlurTypeNum=1

ShowTopBarBlurBorder=0
ShowDropdownBlurBorder=0

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

FontName0=Pixeloid Sans

TopBarFontName=#FontName0#

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
TopBarCornerMinMax1=6
DropdownCornerMinMax0=1
DropdownCornerMinMax1=(7*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=0
DropdownHighlightCorner=(6*#DPIRescaleValue#)

;-------------------------

BLANK=215
