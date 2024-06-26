[Variables]

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=0
TopBarHLSkew=0
TopBarSections=1

DropdownMenuBlur=1
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

TopBarBGColor1=41,7,10
TopBarBGColor2=41,7,10
TopBarBGColor3=41,7,10
TopBarFontColor1=254,220,223
TopBarFontColor2=41,7,10
TopBarHLColor1=254,220,223
TopBarHomeIconColor=255,255,255
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=255,255,255
TopBarShadowColor=0,0,0

DropdownBGColor1=41,7,10
DropdownFontColor1=254,220,223
DropdownFontColor2=41,7,10
DropdownItemHL=254,220,223
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

TopBarOpacity1=128
TopBarGradientOpacity1=76
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=55

DropdownMenuOpacity1=200
DropdownItemOpacity=255
DropdownStrokeOpacity=55

HighlightShapeOpacity=225
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=185
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=140
DropdownHLOpacity=165

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(166*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(78*(#TopBarOpacity1#/255))

TopBarHLShadow=1
DropdownHLShadow=1

TopBarShadowOpacity=155

BlurTypeNum=1

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

FontName0=Anuphan

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
TopBarCornerMinMax1=3
DropdownCornerMinMax0=1
DropdownCornerMinMax1=(6*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=(0*#DroptopSize#)
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(#TopBarCorner#*0.83)
DropdownHighlightCorner=(#DropdownBGCorner#*0.83)

;-------------------------

BLANK=140
