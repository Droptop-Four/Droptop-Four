[Variables]

CustomThemeTopBarHeight=44

; --------------------------

CustomThemeName=Catppuccin 2
CustomThemeAuthor=Cariboudjan
CustomThemeCompileDate=23.1125

CustomThemeMeasures=0

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=0
TopBarHomeShape=0
TopBarHLSkew=0
TopBarSections=0

DropdownMenuBlur=0
DropdownArrowStyle=2

TopBarDividerW=20
TopBarDividerH=3

;---

IconStyle=1

NewDesktopStyle=[#*IconStyle*]
ActionStyle=#IconStyle#
SearchStyle=#IconStyle#
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
NotesStyle=#IconStyle#
CopyStyle=[#*IconStyle*]
ExchangeStyle=[#*IconStyle*]
LanguageStyle=#IconStyle#
AppDrawerStyle=#IconStyle#
AssistantStyle=#IconStyle#

DropdownSliderStyle=3

;-------------------------
; Colors

SetColorByWallpaperOFF=1

TopBarBGColor1=23,23,28
TopBarBGColor2=23,23,28
TopBarBGColor3=23,23,28
TopBarFontColor1=224,223,230
TopBarFontColor2=224,223,230
TopBarHLColor1=255,248,255
TopBarAssistantIconTint1=35,37,42
TopBarAssistantIconTint2=255,255,255
TopBarHomeIconColor=224,223,230
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25,(55*(#TopBarOpacity1#/255))
TopBarBorderBottomColor=0,0,0,(26*(#TopBarOpacity1#/255))
TopBarStrokeColor=255,90,90

DropdownBGColor1=23,23,28
DropdownFontColor1=224,223,230
DropdownFontColor2=224,223,230
DropdownItemHL=255,248,255
DropdownIconTint=249, 226, 175
DropdownIconGreyscale=0
DropdownStrokeColor=255,90,90
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=166,218,149
BatteryDyingColor=237,135,151
BatterySaverColor=47,85,255

;-------------------------
; Opacities

TopBarOpacity1=255
TopBarGradientOpacity1=115
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=255

DropdownMenuOpacity1=255
DropdownItemOpacity=255
DropdownStrokeOpacity=255

HighlightShapeOpacity=155
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=255

TopBarHLOpacity=200
DropdownHLOpacity=60

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=44
TopBarBorderBottomOpacity=60

TopBarHLShadow=1
DropdownHLShadow=1

TopBarShadowOpacity=155

BlurTypeNum=1

;---

TopBarShadow=1
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
FontSpaceOffset=0.2
TitleSpaOffset=1

FontName0=JetBrains Mono

FontName1=JetBrains Mono
TopBarFontName=[#*FontName0*]

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

TopBarCharacterSpacing=#FontSpaceOffset# | #FontSpaceOffset#
DropdownCharacterSpacing=#FontSpaceOffset# | #FontSpaceOffset#

TopBarAntiAlias=1
DropdownAntiAlias=1

;-------------------------
; Shapes & backgrounds

TopBarCornerMinMax0=1
TopBarCornerMinMax1=4
DropdownCornerMinMax0=1
DropdownCornerMinMax1=(6*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=(8*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(3*#DroptopSize#)
DropdownHighlightCorner=(3*#DroptopSize#)

;-------------------------

BLANK=255
NoOpacity=255
