[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

[PhanRecycleSize]
Measure=RecycleManager
RecycleType=Size
Drives=ALL
IfCondition=PhanRecycleSize <= 214748364
IfTrueAction=[!SetOption CustomApp#Recycle_Bin-Phan# ImageName "#SKINSPATH#Droptop Community Apps\Apps\Recycle_Bin-Phan\Button\#TopIconSize#\Button0[#TopIconShadows[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]].png" "Droptop\DropdownBar"]
IfCondition2=PhanRecycleSize > 214748364
IfTrueAction2=[!SetOption CustomApp#Recycle_Bin-Phan# ImageName "#SKINSPATH#Droptop Community Apps\Apps\Recycle_Bin-Phan\Button\#TopIconSize#\Button1[#TopIconShadows[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]].png" "Droptop\DropdownBar"]
IfCondition3=PhanRecycleSize > 429496729
IfTrueAction3=[!SetOption CustomApp#Recycle_Bin-Phan# ImageName "#SKINSPATH#Droptop Community Apps\Apps\Recycle_Bin-Phan\Button\#TopIconSize#\Button2[#TopIconShadows[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]].png" "Droptop\DropdownBar"]
IfCondition4=PhanRecycleSize > 644245094
IfTrueAction4=[!SetOption CustomApp#Recycle_Bin-Phan# ImageName "#SKINSPATH#Droptop Community Apps\Apps\Recycle_Bin-Phan\Button\#TopIconSize#\Button3[#TopIconShadows[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]].png" "Droptop\DropdownBar"]
IfCondition5=PhanRecycleSize > 858993459
IfTrueAction5=[!SetOption CustomApp#Recycle_Bin-Phan# ImageName "#SKINSPATH#Droptop Community Apps\Apps\Recycle_Bin-Phan\Button\#TopIconSize#\Button4[#TopIconShadows[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]].png" "Droptop\DropdownBar"]
IfCondition6=PhanRecycleSize > 1073741824
IfTrueAction6=[!SetOption CustomApp#Recycle_Bin-Phan# ImageName "#SKINSPATH#Droptop Community Apps\Apps\Recycle_Bin-Phan\Button\#TopIconSize#\Button5[#TopIconShadows[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]].png" "Droptop\DropdownBar"]
IfCondition7=1=1
IfTrueAction7=[!UpdateMeter CustomApp#Recycle_Bin-Phan# "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
DynamicVariables=1
UpdateDivider=30