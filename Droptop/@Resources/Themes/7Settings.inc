[Variables]

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=1
TopBarHLSkew=0
TopBarSections=1

UseMicaBlur=0

DropdownMenuBlur=0
DropdownArrowStyle=1

CheckmarkStyle=1
ToggleStyle=1

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

DropdownSliderStyle=1

;-------------------------
; Colors

SetColorByWallpaperOFF=0

TopBarBGColor1=56,60,74
TopBarBGColor2=56,60,74
TopBarBGColor3=56,60,74
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
TopBarHLColor1=0,135,255
TopBarHLColor2=0,135,255
TopBarHomeIconColor=255,255,255
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=0,0,0
TopBarShadowColor=0,0,0
TopBarGradientColor1=11,11,15
TopBarGradientColor2=211,211,215

SolidOverlayGradientColor1=255,255,255,0
SolidOverlayGradientColor2=255,255,255,0

DropdownBGColor1=56,60,74
DropdownFontColor1=255,255,255
DropdownFontColor2=255,255,255
DropdownItemHL=0,135,255
DropdownItemHL2=0,135,255
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=255,255,255
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=255
TopBarGradientOpacity1=76.5
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=0
TopBarSolidColorOpacity=15

DropdownMenuOpacity1=255
DropdownItemOpacity=255
DropdownStrokeOpacity=75

HighlightShapeOpacity=255
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

TopBarHLShadow=1
DropdownHLShadow=1

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
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=FF DIN Round Pro

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
TopBarCornerMinMax1=8
DropdownCornerMinMax0=2
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(2*#DroptopSize#)
DropdownHighlightCorner=(#DropdownBGCorner#*0.83)

;-------------------------

BLANK=0,135,255
