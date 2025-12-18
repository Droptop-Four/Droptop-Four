#Persistent
#SingleInstance Force
#ErrorStdOut
#NoTrayIcon

Menu, Tray, Tip, Droptop Task Helper

;%1%=PROGRAMPATH
;%2%=HotkeyModeZ

ShowState := 0

AntiCheatProcess := "EAAntiCheat.GameServiceLauncher.exe|EasyAntiCheat.exe|EasyAntiCheat_EOS.exe|PioneerGame.exe"
FoundAntiCheatProcess = 
FullPath := ""

; Run, %1%
; Sleep, 5000
; Run, %1% !ActivateConfig Droptop\DropdownBar

; _hwnd := ""
; settimer, currentwindow

; currentwindow:
	; hwnd := winexist("a")
	; if !(hwnd = _hwnd) {
		; _hwnd := hwnd
		; gosub foolproof
	; }
; return

; foolproof:
; Loop, parse, AntiCheatProcess, |
; {
    ; CurrentProcess := A_LoopField
    
    ; ; The Process command sets ErrorLevel to the PID (non-zero) if found, or 0 if not.
    ; Process, Exist, %CurrentProcess%
    
    ; if ErrorLevel  ; ErrorLevel is non-zero (True) if the process was found
    ; {
        ; ExitApp
    ; }
; }
; return

SetTimer, CheckProgram, 3000 ; Check every 3 seconds
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
  ; Variable to store the name of the first found process

Loop, parse, AntiCheatProcess, |
{
    CurrentProcess := A_LoopField
    
    ; The Process command sets ErrorLevel to the PID (non-zero) if found, or 0 if not.
    Process, Exist, %CurrentProcess%
    
    if ErrorLevel  ; ErrorLevel is non-zero (True) if the process was found
    {
        ExitApp
    }
}






; Process, Exist, %AntiCheatProcess%

; If ErrorLevel  ; If ErrorLevel is non-zero (meaning the Anti-Cheat process exists)
; {
	; ExitApp
	; ; ; Query WMI for the process by name
	; ; for process in ComObjGet("winmgmts:").ExecQuery("Select * from Win32_Process where Name = '" AntiCheatProcess "'")
	; ; {
		; ; FullPath := process.ExecutablePath
		; ; ; You can stop after the first match if you only need one instance
		; ; break
	; ; }

	; ; if (FullPath)
	; ; {
		; ; Process, Close, %AntiCheatProcess%
	; ; }
; }
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