[MeasureBatterySaverPS]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter=powercfg /setdcvalueindex SCHEME_CURRENT SUB_ENERGYSAVER ESBATTTHRESHOLD [#BatteryPowerLowThreshold0]; powercfg /setactive scheme_current
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1
UpdateDivider=-1
Disabled=1
FinishAction=
Group=BatterySaver