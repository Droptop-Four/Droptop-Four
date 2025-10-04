#Persistent
#SingleInstance, force
#ErrorStdOut

Menu, Tray, Tip, Droptop Task Helper

;%1%=PROGRAMPATH
;%2%=HotkeyModeZ

ShowState := 0

; Run, %1%
; Sleep, 5000
; Run, %1% !ActivateConfig Droptop\DropdownBar

SetTimer, CheckProgram, 5000 ; Check every 5 seconds
return

CheckProgram:
IfWinNotExist, ahk_exe Rainmeter.exe
{
    Run, %1%
	ShowState := 0
}
else
{
	ShowState := 0
	ProcessNum := 0, ProcessName := "Droptop.exe"
	for Process in ComObjGet("winmgmts:").ExecQuery("Select * from Win32_Process")
	ProcessNum += Process.Name = ProcessName
	; MsgBox,% ProcessNum " " ProcessName
	if ProcessNum > 1
	{
		Process, Close, %ProcessName%
	}
}
return

~!Shift::
    Run, %1% !UpdateMeasure CurrentLanguageID.PSRM Droptop\Other\BackgroundProcesses
return

~#Space::
    Run, %1% !UpdateMeasure CurrentLanguageID.PSRM Droptop\Other\BackgroundProcesses
return

~!+=::
if ShowState = 0
{
	ShowState := 1
    Run, %1% !Hide "Droptop\DropdownBar"
    Run, %1% !Zpos 1 "Droptop\DropdownBar"
    Run, %1% !ShowFade "Droptop\DropdownBar"
    Run, %1% !HideMeter Meter1 "Droptop\Other\BackgroundProcesses"
}
else
{
	ShowState := 0
    Run, %1% !Zpos %2% "Droptop\DropdownBar"
    Run, %1% !ShowMeter Meter1 "Droptop\Other\BackgroundProcesses"
}
return

; ~!+1::
    ; Run, %1% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    ; Run, %1% !SetVariable HotKeyTriggered 1 "Droptop\DropdownBar"
    ; Run, %1% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
; return

; ~!+2::
    ; Run, %1% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    ; Run, %1% !SetVariable HotKeyTriggered 2 "Droptop\DropdownBar"
    ; Run, %1% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
; return

; ~!+3::
    ; Run, %1% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    ; Run, %1% !SetVariable HotKeyTriggered 3 "Droptop\DropdownBar"
    ; Run, %1% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
; return

; ~!4::
    ; Run, %1% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    ; Run, %1% !SetVariable HotKeyTriggered 4 "Droptop\DropdownBar"
    ; Run, %1% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
; return

; ~!+5::
    ; Run, %1% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    ; Run, %1% !SetVariable HotKeyTriggered 5 "Droptop\DropdownBar"
    ; Run, %1% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
; return