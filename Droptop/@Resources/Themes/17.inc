[Variables]

AltFont1=0
AltFont2=0
AltFont3=0
AltFont4=0
AltFont5=0
AltFont6=0
AltFont7=0
AltFont8=0
AltFont9=0
AltFont10=0
AltFont11=0
AltFont12=0
AltFont13=0
AltFont14=0
AltFont15=0
AltFont16=0
AltFont17=0
AltFont18=0
AltFont19=0
AltFont20=0
AltFont21=0
AltFont22=0
AltFont23=0
AltFont24=0
AltFont25=0

;-------------------------

TopBarFontSize=((9*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
TopBarContentXOffset=((12*#DroptopSize#)-((12*#DroptopSize#)%1))
TopBarTitlePadding="((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0"
TopBarTextYOffset=((0*#DroptopSize#)+([#*FontYposOffset*]*#DroptopSize#))
TopBarSysIconTextOffset=((30*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
TopBarSysTextYPadding=((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
TopBarSysTextWPadding=(5*#DroptopSize#)
TopBarStrokeWidth=(1*#DroptopSize#)
TopBarHLStrokeWidth=0
TopBarRoundTop=1
TopBarHLRoundTop=0
TopBarBorderTopH=0
TopBarBorderBottomH=2
TopBarHLOffsetY=(3*#DroptopSize#)
TopBarHLOffsetH=(1*#DroptopSize#)
TopBarSkew=(-20*[#*TopBarHLSkew*])
TopBarIconHOffset=((-13*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
TopBarSectionSpacingX=(((15*#DroptopSize#)-((15*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=((0*#DroptopSize#)*#TopBarSections#)
TopBarSectionPadding=(((5*#DroptopSize#)-((5*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(3*#DroptopSize#)
TopBarGradientCutout=(0*#DroptopSize#)
TopBarDividerSpace=((8*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarDividerWidth=(#TopBarDividerSpace#/4)
TopBarDividerHeight=(0*#DroptopSize#)
TopBarShadowOffsetX=(0*#DroptopSize#)
TopBarShadowOffsetY=(2*#DroptopSize#)

;-------------------------

DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownItemHeight=((31*#DroptopSize#)-((31*#DroptopSize#)%1))
DropdownItemFontSize=((9*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
DropdownMenuYOffset=(2*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(5*#DroptopSize#)
DropdownIconYoffset=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
DropdownItemYOffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownItemPadding1=(33*#DroptopSize#)
DropdownItemPaddingY=((0+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=((200*#DroptopSize#)-((200*#DroptopSize#)%10))
DropdownContextMenuYOffset=(3*#DroptopSize#)
DropdownStrokeWidth=(1*#DroptopSize#)
DropdownHLStrokeWidth=(0.5*#DroptopSize#)
DropdownArrowHighlightW=((20*#DroptopSize#)-((20*#DroptopSize#)%1))
DropdownArrowXOffset=(7*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(3*#DroptopSize#)
DropdownArrowXOffsetRTL=(-1*#DroptopSize#)
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(6*#DroptopSize#)
DropdownMenuCutout=(1*#DroptopSize#)
DropdownHLOffsetX=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
DropdownMenuLandingHeight=(17*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=0,0,0
ChamLumB=255,255,255

ChamBG1=38,13,13
ChamBG2=81,47,49
ChamBG3=173,177,162
ChamFG1=197,193,166
ChamFG2=165,193,177

TopBarSolidColor=0

TopBarHLSolidColor=0
DropdownHLSolidColor=0

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=0
LockColorReset=0

RefreshOnColorReset=0

LockReverseDarkLightTopBar=1
LockReverseDarkLightDropdownMenu=1
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
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,40 | StrokeWidth 0

TopBarBlurType=[#BlurType[#BlurTypeNum][#TopBarSections]]

CurrentDayStrokeWidth=(1*#DroptopSize#)

TopBarHotCornerStrokeWidth=0

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings - Default settings applied when wallpaper changes or when "Reset" button is pressed in Color & Opacity Settings

; ChamTopBarBGColor1=[ChamBG1]
; ChamTopBarBGColor2=[ChamBG2]
; ChamTopBarBGColor3=[ChamBG3]
ChamTopBarBGColor1=[&TopBarBGColor.R.Calc1],[&TopBarBGColor.G.Calc1],[&TopBarBGColor.B.Calc1]
ChamTopBarBGColor2=[&TopBarBGColor.R.Calc1],[&TopBarBGColor.G.Calc1],[&TopBarBGColor.B.Calc1]
ChamTopBarBGColor3=[&TopBarBGColor.R.Calc1],[&TopBarBGColor.G.Calc1],[&TopBarBGColor.B.Calc1]
; ChamDropdownBGColor1=[ChamBG1]
ChamDropdownBGColor1=[&TopBarBGColor.R.Calc1],[&TopBarBGColor.G.Calc1],[&TopBarBGColor.B.Calc1]
ChamFolderHL=[&TopBarBGColor.R.Calc0],[&TopBarBGColor.G.Calc0],[&TopBarBGColor.B.Calc0]
ChamTopBarHL=[&TopBarBGColor.R.Calc0],[&TopBarBGColor.G.Calc0],[&TopBarBGColor.B.Calc0]
ChamDropdownFontColor1=[&TopBarBGColor.R.Calc0],[&TopBarBGColor.G.Calc0],[&TopBarBGColor.B.Calc0]
ChamDropdownFontColor2=[&TopBarBGColor.R.Calc1],[&TopBarBGColor.G.Calc1],[&TopBarBGColor.B.Calc1]
ChamTopBarFontColor1=[&TopBarBGColor.R.Calc0],[&TopBarBGColor.G.Calc0],[&TopBarBGColor.B.Calc0]
ChamTopBarFontColor2=[&TopBarBGColor.R.Calc1],[&TopBarBGColor.G.Calc1],[&TopBarBGColor.B.Calc1]
ChamDropdownStrokeColor=[ChamFG2]
ChamTopBarStrokeColor=[ChamFG2]
ChamTopBarHomeIconColor=[ChamLumB]
ChamBatteryFillColor=[ChamLumB]
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.5
ChamColorModFactor=0.835
ChamColorModFactorB=0.90

;-------------------------

