[Recycle_Bin-Phan.Style]
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)

[Recycle_Bin-Phan]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle

[PhanDropAction]
Measure=Plugin
Plugin=RunCommand
Parameter=del /q "#PhanRecycleFile#"
State=Hide
OutputType=ANSI
OutputFile=
FinishAction=[Play "#SKINSPATH#Droptop Community Apps\Apps\Recycle_Bin-Phan\Sounds\recycle.wav"]
DynamicVariables=1

; [PhanDropArea]
; Measure=Plugin
; Plugin=Drag&Drop
; Parent=MeasureDrop
; Bounds=CustomApp2
; Action=Path
; OnOverAction=[!SetVariable PhanRecycleFile "$Directory$\$Name$.$Type$"][!UpdateMeasure PhanDropAction]
; OnDropAction=[!CommandMeasure PhanDropAction "Run"]
; Group=Droparea
; DynamicVariables=1
