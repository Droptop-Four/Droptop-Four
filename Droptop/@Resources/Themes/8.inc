[Variables]

TopBarFontSize=((8*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
TopBarContentXOffset=((8*#DroptopSize#)-((8*#DroptopSize#)%1))
TopBarTitlePadding=((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
TopBarTextYOffset=((0*#DroptopSize#)+([#*FontYposOffset*]*#DroptopSize#))
TopBarSysTextYPadding=(0*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TopBarHLStrokeWidth=0
TopBarRoundTop=0
TopBarHLRoundTop=1
TopBarBorderTopH=1
TopBarBorderBottomH=1
TopBarHLOffsetY=(0*#DroptopSize#)
TopBarHLOffsetH=(0*#DroptopSize#)
TopBarSkew=(-20*[#*TopBarHLSkew*])
TopBarIconHOffset=((-8*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
TopBarSectionSpacingX=(((15*#DroptopSize#)-((15*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=((2*#DroptopSize#)*#TopBarSections#)
TopBarSectionPadding=(((6*#DroptopSize#)-((6*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(0*#DroptopSize#)
TopBarBlurCutout=((0*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarGradientCutout=#TopBarCutout#
TopBarDividerSpace=((8*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarDividerWidth=(#TopBarDividerSpace#/4)
TopBarDividerHeight=(0*#DroptopSize#)
TopBarShadowOffsetX=(0*#DroptopSize#)
TopBarShadowOffsetY=(2*#DroptopSize#)

;-------------------------

DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownItemHeight=((25*#DroptopSize#)-((25*#DroptopSize#)%1))
DropdownItemFontSize=((8*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(6*#DroptopSize#)
DropdownIconYOffset=((2*#DroptopSize#)-((2*#DroptopSize#)%1))
DropdownItemYOffset=(6*#DPIRescaleValue#)
DropdownItemPadding1=(32*#DroptopSize#)
DropdownItemPaddingY=((0+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYOffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=((165*#DroptopSize#)-((165*#DroptopSize#)%10))
DropdownContextMenuYOffset=(3*#DroptopSize#)
DropdownStrokeWidth=(1*#DroptopSize#)
DropdownHLStrokeWidth=(0*#DroptopSize#)
DropdownArrowHighlightW=((23*#DroptopSize#)-((23*#DroptopSize#)%1))
DropdownArrowXOffset=(1*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(0*#DroptopSize#)
DropdownMenuFlatTop=1
DropdownSubMenuXOffset=(5*#DroptopSize#)
DropdownMenuCutout=(1*#DroptopSize#)
DropdownHLOffsetX=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=0,0,0
ChamLumB=255,255,255

ChamBG1=11,14,20
ChamBG2=9,10,14
ChamBG3=13,15,20
ChamFG1=255,255,255
ChamFG2=255,255,255

TopBarSolidColor=0
TopBarExtraGradient=0

TopBarHLSolidColor=0
DropdownHLSolidColor=0

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=1
LockColorReset=0

RefreshOnColorReset=0

LockReverseDarkLightTopBar=0
LockReverseDarkLightDropdownMenu=0
LockTopBarShadowNum=1



;---
; ColorMode/Charging/BatteryLow/BatterySaver
BatteryFillColor0000=[#*TopBarFontColor1*]
BatteryFillColor0010=[#*TopBarFontColor1*]
BatteryFillColor0100=[#*TopBarFontColor1*]
BatteryFillColor0110=[#*TopBarFontColor1*]

BatteryFillColor1000=[#*TopBarFontColor1*]
BatteryFillColor1010=[#*BatteryDyingColor*]
BatteryFillColor1100=[#*BatteryChargingColor*]
BatteryFillColor1110=[#*BatteryDyingColor*]

BatteryFillColor0001=[#*TopBarFontColor1*]
BatteryFillColor0011=[#*TopBarFontColor1*]
BatteryFillColor0101=[#*TopBarFontColor1*]
BatteryFillColor0111=[#*TopBarFontColor1*]

BatteryFillColor1001=[#*BatterySaverColor*]
BatteryFillColor1011=[#*BatterySaverColor*]
BatteryFillColor1101=[#*BatteryChargingColor*]
BatteryFillColor1111=[#*BatteryChargingColor*]

;---

BatteryFillColor0000B=[#*TopBarFontColor2*]
BatteryFillColor0010B=[#*TopBarFontColor2*]
BatteryFillColor0100B=[#*TopBarFontColor2*]
BatteryFillColor0110B=[#*TopBarFontColor2*]

BatteryFillColor1000B=[#*TopBarFontColor2*]
BatteryFillColor1010B=[#*BatteryDyingColor*]
BatteryFillColor1100B=[#*BatteryChargingColor*]
BatteryFillColor1110B=[#*BatteryDyingColor*]

BatteryFillColor0001B=[#*TopBarFontColor2*]
BatteryFillColor0011B=[#*TopBarFontColor2*]
BatteryFillColor0101B=[#*TopBarFontColor2*]
BatteryFillColor0111B=[#*TopBarFontColor2*]

BatteryFillColor1001B=[#*BatterySaverColor*]
BatteryFillColor1011B=[#*BatterySaverColor*]
BatteryFillColor1101B=[#*BatteryChargingColor*]
BatteryFillColor1111B=[#*BatteryChargingColor*]

;-------------------------
; Opacities

BatteryFillOpacity=355

;-------------------------
; Shapes & backgrounds

DividerX=(#DropdownStrokeWidth#+1)
DividerSpace=(#DropdownIconYOffset#+#DropdownItemYOffset#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color [#*DropdownFontColor1*],40 | StrokeWidth 0
DividerShapeSub=Rectangle (#DividerX#+1),0,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color [#*DropdownFontColor1*],40 | StrokeWidth 0

TopBarBlurType=[#BlurType[#BlurTypeNum][#TopBarSections][#Win10Apps]]

MicaAvailable=0

CurrentDayStrokeWidth=(1*#DroptopSize#)

TopBarHotCornerStrokeWidth=#TopBarStrokeWidth#

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings - Default settings applied when wallpaper changes or when "Reset" button is pressed in Color & Opacity Settings

ChamTopBarBGColor1=98,95,86
ChamTopBarBGColor2=98,95,86
ChamTopBarBGColor3=98,95,86
ChamDropdownBGColor1=65,64,59
ChamFolderHL=238,117,69
ChamTopBarHL=238,117,69
ChamDropdownFontColor1=255,255,255
ChamDropdownFontColor2=255,255,255
ChamTopBarFontColor1=255,255,255
ChamTopBarFontColor2=255,255,255
ChamTopBarGradientColor1=11,11,15
ChamTopBarGradientColor2=211,211,215
ChamDropdownStrokeColor=0,0,0
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=255,255,255
ChamBatteryFillColor=255,255,255
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.5
ChamColorModFactor=0.835
ChamColorModFactorB=0.90

;-------------------------

