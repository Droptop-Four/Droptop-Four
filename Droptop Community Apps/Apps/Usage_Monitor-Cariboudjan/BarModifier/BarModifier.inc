[Variables]
CPUPercent=0
RAMPercent=0
GPUPercent=0
HDDPercent=0

[Usage_Monitor-Cariboudjan.Style]
ImageAlpha=0
W=(((((#TopHeight#+#TopBarIconHOffset#)*1.5)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)%1))+((#TopBarSysAppWPadding#*2)-((#TopBarSysAppWPadding#*2)%1)))*(4-(#UsageCPUInactive#+#UsageGPUInactive#+#UsageRAMInactive#+#UsageHDDInactive#)))
Y=(#TopHeight#/2)

[Usage_Monitor-Cariboudjan]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle

[CPUSquareBG]
Meter=Image
MeterStyle=InfoStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Static\CPU\Static0[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]CPU.png
MaskImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Mask\CPU\#CPUPercent#B.png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#UsageCPUInactive#))
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
X=([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])
Y=r
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=([#HideAppCustomApp[#Usage_Monitor-Cariboudjan]]=1?1:#UsageCPUInactive#)
Container=SystemTrayContainer
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton

[CPUSquare]
Meter=Image
MeterStyle=InfoStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Static\CPU\Static1[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]CPU.png
MaskImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Mask\CPU\#CPUPercent#A.png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#UsageCPUInactive#))
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
X=r
Y=r
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=([#HideAppCustomApp[#Usage_Monitor-Cariboudjan]]=1?1:#UsageCPUInactive#)
Container=SystemTrayContainer
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton

[RAMSquareBG]
Meter=Image
MeterStyle=InfoStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Static\RAM\Static0[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]RAM.png
MaskImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Mask\RAM\#RAMPercent#B.png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#UsageRAMInactive#))
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
X=R
Y=r
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=([#HideAppCustomApp[#Usage_Monitor-Cariboudjan]]=1?1:#UsageRAMInactive#)
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton
Container=SystemTrayContainer

[RAMSquare]
Meter=Image
MeterStyle=InfoStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Static\RAM\Static1[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]RAM.png
MaskImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Mask\RAM\#RAMPercent#A.png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#UsageRAMInactive#))
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
X=r
Y=r
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=([#HideAppCustomApp[#Usage_Monitor-Cariboudjan]]=1?1:#UsageRAMInactive#)
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton
Container=SystemTrayContainer

[GPUSquareBG]
Meter=Image
MeterStyle=InfoStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Static\GPU\Static0[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]GPU.png
MaskImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Mask\GPU\#GPUPercent#B.png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#UsageGPUInactive#))
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
X=R
Y=r
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=([#HideAppCustomApp[#Usage_Monitor-Cariboudjan]]=1?1:#UsageGPUInactive#)
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton
Container=SystemTrayContainer

[GPUSquare]
Meter=Image
MeterStyle=InfoStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Static\GPU\Static1[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]GPU.png
MaskImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Mask\GPU\#GPUPercent#A.png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#UsageGPUInactive#))
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
X=r
Y=r
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=([#HideAppCustomApp[#Usage_Monitor-Cariboudjan]]=1?1:#UsageGPUInactive#)
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton
Container=SystemTrayContainer

[HDDSquareBG]
Meter=Image
MeterStyle=InfoStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Static\HDD\Static0[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]HDD.png
MaskImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Mask\HDD\#HDDPercent#B.png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#UsageHDDInactive#))
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
X=R
Y=r
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=([#HideAppCustomApp[#Usage_Monitor-Cariboudjan]]=1?1:#UsageHDDInactive#)
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton
Container=SystemTrayContainer

[HDDSquare]
Meter=Image
MeterStyle=InfoStyle
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Static\HDD\Static1[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]HDD.png
MaskImageName=#SKINSPATH#Droptop Community Apps\Apps\Usage_Monitor-Cariboudjan\Button\Mask\HDD\#HDDPercent#A.png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#UsageHDDInactive#))
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
X=r
Y=r
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=([#HideAppCustomApp[#Usage_Monitor-Cariboudjan]]=1?1:#UsageHDDInactive#)
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton
Container=SystemTrayContainer

