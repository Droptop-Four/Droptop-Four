[Rainmeter]

[Variables]
NumberOfItems=1
NumberOfDividers=0

BTStatus1=0
BTStatus0=1

@IncludeBluetoothVariables=#SKINSPATH#Droptop\Other\BackgroundProcesses\BluetoothVariables.inc

[1]
Text=[#PopupMenuWifi1.[#BTStatus]]
; LeftMouseDownAction=[!Hide][!CommandMeasure "BluetoothStatusMeasure" "ToggleBluetooth" "Droptop\Other\BackgroundProcesses"][!UpdateMeasure BluetoothStatusMeasure "Droptop\Other\BackgroundProcesses"][!DisableMouseAction #CURRENTSECTION# "LeftMouseDownAction"][!SetVariable AnimateIconNum 99][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 4"][!SetOption 99Icon ImageName "#@#Icons\Fixed\#IconSize#\refresh.png"][!UpdateMeasureGroup BluetoothPlugin "Droptop\Other\BackgroundProcesses"][!CommandMeasure LuaScript "Refresh()" "Droptop\Other\BackgroundProcesses"][!CommandMeasure LuaScript "RefreshStatus()" "Droptop\Other\BackgroundProcesses"][!Delay 1000][!EnableMouseAction #CURRENTSECTION# "LeftMouseDownAction"][!UpdateMeter * "Droptop\Other\Apps\Wifi"][!Redraw "Droptop\Other\Apps\Wifi"][!UpdateMeter *][!Redraw][!EnableMeasure MeasureActionTimer.Actions "Droptop\Other\Apps\Wifi"][!UpdateMeasure MeasureActionTimer.Actions "Droptop\Other\Apps\Wifi"]
; LeftMouseDownAction=[!Hide][!WriteKeyValue Variables BTStatus (#BTStatus#=1?0:1) "#SKINSPATH#Droptop\Other\BackgroundProcesses\BluetoothVariables.inc"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfigGroup Tray][!DeactivateConfigGroup PopupMenu][!CommandMeasure "BluetoothStatusMeasure" "ToggleBluetooth" "Droptop\Other\BackgroundProcesses"][!UpdateMeasure BluetoothStatusMeasure "Droptop\Other\BackgroundProcesses"]
; LeftMouseDownAction=[!Hide][!HideGroup Tray][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetVariable BTStatus ([#BTStatus]=1?0:1)][!SetVariable BTStatus [#BTStatus] "Droptop\DropdownBar"][!WriteKeyValue Variables BTStatus [#BTStatus] "#SKINSPATH#Droptop\Other\BackgroundProcesses\BluetoothVariables.inc"][!CommandMeasure "BluetoothStatusMeasure" "ToggleBluetooth" "Droptop\Other\BackgroundProcesses"][!UpdateMeasure BluetoothStatusMeasure "Droptop\Other\BackgroundProcesses"][!UpdateMeasureGroup BluetoothPlugin "Droptop\Other\BackgroundProcesses"][!CommandMeasure LuaScript "Refresh()" "Droptop\Other\BackgroundProcesses"][!CommandMeasure LuaScript "RefreshStatus()" "Droptop\Other\BackgroundProcesses"][!DeactivateConfigGroup PopupMenu][!DeactivateConfigGroup Tray]
LeftMouseDownAction=[!Hide][!DeactivateConfig "Droptop\Other\Apps\Wifi\Folder"][!CommandMeasure "BluetoothStatusMeasure" "ToggleBluetooth" "Droptop\Other\BackgroundProcesses"][!UpdateMeasure BluetoothStatusMeasure "Droptop\Other\BackgroundProcesses"][!UpdateMeasureGroup BluetoothPlugin "Droptop\Other\BackgroundProcesses"][!CommandMeasure LuaScript "Refresh()" "Droptop\Other\BackgroundProcesses"][!CommandMeasure LuaScript "RefreshStatus()" "Droptop\Other\BackgroundProcesses"][!DeactivateConfigGroup PopupMenu]

[1Icon]
ImageName=#@#Icons\Fixed\#IconSize#\Bluetooth[#BTStatus[#BTStatus]].png

[2]
Text=
LeftMouseDownAction=

[2Icon]
ImageName=

;dummy
[1Arrow]
Meter=String
Hidden=1

[2Arrow]
Meter=String
Hidden=1

[3Arrow]
Meter=String
Hidden=1