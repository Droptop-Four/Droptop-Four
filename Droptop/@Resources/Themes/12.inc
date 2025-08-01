[Variables]

TopBarFontSize=((12*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
TopBarContentXOffset=((7*#DroptopSize#)-((7*#DroptopSize#)%1))
TopBarTitlePadding=((8*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((8*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
TopBarTextYOffset=((0*#DroptopSize#)+([#*FontYposOffset*]*#DroptopSize#))
TopBarSysTextYPadding=(0*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TopBarHLStrokeWidth=0.5
TopBarRoundTop=0
TopBarHLRoundTop=1
TopBarBorderTopH=0
TopBarBorderBottomH=0
TopBarHLOffsetY=(0*#DroptopSize#)
TopBarHLOffsetH=(1*#DroptopSize#)
TopBarSkew=(-20*[#*TopBarHLSkew*])
TopBarIconHOffset=((-9*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
TopBarSectionSpacingX=(((13*#DroptopSize#)-((13*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=((2*#DroptopSize#)*#TopBarSections#)
TopBarSectionPadding=(((5*#DroptopSize#)-((5*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(0*#DroptopSize#)
TopBarBlurCutout=((0*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarGradientCutout=#TopBarCutout#
TopBarDividerSpace=((8*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarDividerWidth=(#TopBarDividerSpace#/4)
TopBarDividerHeight=(0*#DroptopSize#)
TopBarShadowOffsetX=(0*#DroptopSize#)
TopBarShadowOffsetY=(2*#DroptopSize#)

;-------------------------

DropdownMenuWidth=((315*#DroptopSize#)-((315*#DroptopSize#)%1))
DropdownItemHeight=((39*#DroptopSize#)-((39*#DroptopSize#)%1))
DropdownItemFontSize=((12*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
DropdownMenuYOffset=(3*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(5*#DroptopSize#)
DropdownIconYOffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownItemYOffset=(1*#DPIRescaleValue#)
DropdownItemPadding1=(40*#DroptopSize#)
DropdownItemPaddingY=((0+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYOffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=((210*#DroptopSize#)-((210*#DroptopSize#)%10))
DropdownContextMenuYOffset=(4*#DroptopSize#)
DropdownStrokeWidth=(1*#DroptopSize#)
DropdownHLStrokeWidth=0.5
DropdownArrowHighlightW=((29*#DroptopSize#)-((29*#DroptopSize#)%1))
DropdownArrowXOffset=(3*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(1*#DroptopSize#)
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(5*#DroptopSize#)
DropdownMenuCutout=(1*#DroptopSize#)
DropdownHLOffsetX=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownMenuLandingHeight=(23*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=30,30,30
ChamLumB=255,255,255

ChamBG1=94,134,124
ChamBG2=84,124,113
ChamBG3=91,131,121
ChamFG1=255,255,255
ChamFG2=255,255,255

TopBarSolidColor=0
TopBarExtraGradient=0

TopBarHLSolidColor=1
DropdownHLSolidColor=1

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=0
LockColorReset=0

RefreshOnColorReset=0

LockReverseDarkLightTopBar=0
LockReverseDarkLightDropdownMenu=0
LockTopBarShadowNum=0

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
DividerSpace=(5*#DroptopSize#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color [#*DropdownFontColor1*],40 | StrokeWidth 0
DividerShapeSub=Rectangle (#DividerX#+1),0,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color [#*DropdownFontColor1*],40 | StrokeWidth 0

TopBarBlurType=[#BlurType[#BlurTypeNum][#TopBarSections][#Win10Apps]]

MicaAvailable=1

CurrentDayStrokeWidth=(1*#DroptopSize#)

TopBarHotCornerStrokeWidth=#TopBarStrokeWidth#

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings - Default settings applied when wallpaper changes or when "Reset" button is pressed in Color & Opacity Settings

ChamTopBarBGColor1=[ChamLumA]
ChamTopBarBGColor2=[ChamLumA]
ChamTopBarBGColor3=[ChamLumA]
ChamDropdownBGColor1=[ChamLumA]
ChamFolderHL=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarHL=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamDropdownFontColor1=[ChamLumB]
ChamDropdownFontColor2=[ChamLumB]
ChamTopBarFontColor1=[ChamLumB]
ChamTopBarFontColor2=[ChamLumB]
ChamTopBarGradientColor1=11,11,15
ChamTopBarGradientColor2=211,211,215
ChamDropdownStrokeColor=0,0,0
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=[ChamLumB]
ChamBatteryFillColor=[ChamLumB]
ChamLightOffset=255
ChamDarkOffset=30
ChamLumThreshold=0.50
ChamColorModFactor=0.135
ChamColorModFactorB=0.90

;-------------------------
