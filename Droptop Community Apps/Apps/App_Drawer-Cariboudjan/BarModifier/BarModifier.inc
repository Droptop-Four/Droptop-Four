[AppDrawerX]
Measure=Calc
Formula=([#WORKAREAX[#DroptopDisplayMonitor]]+([App_Drawer-Cariboudjan:X]>(#TopBarWidth#*0.95)?(#TopBarWidth#*0.95):([App_Drawer-Cariboudjan:X]+([App_Drawer-Cariboudjan:W]/2)+([App_Drawer-Cariboudjan:X]*((#DisableDPINum#=1?(#DPIRescaleValue#-1):0)))))+#BarXposOffset#)
DynamicVariables=1
Group=TrayIconXY
RegExpSubstitute=1
Substitute="^0$":"-99999","":"-99999"

[AppDrawerY]
Measure=Calc
Formula=(([#WORKAREAY[#DroptopDisplayMonitor]]*(1-#AlwaysShowSkin#))+(#TopHeight#+(#TopHeight#*(#DisableDPINum#=1?(#DPIRescaleValue#-1):0))+#DropdownMenuYOffset#+#DropdownStrokeWidth#+#BarYposOffset#)+1)
DynamicVariables=1
Group=TrayIconXY
RegExpSubstitute=1
Substitute="^0$":"-99999","":"-99999"

[App_Drawer-Cariboudjan.Style]
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5)+(#TopBarSysAppWPadding#*2))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)+(#TopBarSysAppWPadding#*2))%1))
ImageAlpha=0

[App_Drawer-Cariboudjan]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\Styles\AppDrawer#AppDrawerStyle#[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
Padding=#SysIconPadding#
SolidColor=0,0,0,0
LeftMouseDownAction=[!UpdateMeasureGroup TrayIconXY]
LeftMouseUpAction=[!CommandMeasure MeasureActionTimer "Stop 3"][!EnableMouseActionGroup "MouseOverAction" Buttons00][#TrayButton1[#TraySelect]][!SetVariable TraySelect (#TraySelect#=1?0:1)][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!SetVariable ActiveAll 0][!UpdateMeterGroup SysTray][!Redraw][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
LeftMouseDoubleClickAction=[!SetVariable TraySelect 0][!UpdateMeter #CURRENTSECTION#]
MouseOverAction=[!Delay 10][!CommandMeasure MeasureActionTimer "Stop 3"]
