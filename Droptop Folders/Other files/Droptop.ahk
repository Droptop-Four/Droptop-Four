#Persistent
#SingleInstance, force
#ErrorStdOut

Menu, Tray, Tip, Droptop Task Helper

PROGRAMPATH := "C:\Program Files\Rainmeter\Rainmeter.exe"

HotkeyModeZ := 0
ShowState := 0

FileRead, fileContent, DroptopData.ini
Loop, Parse, fileContent, `n, `r
{
    StringSplit, keyValue, A_LoopField, =
    if (keyValue1 = "PROGRAMPATH")
    {
        PROGRAMPATH := keyValue2
        break
    }
}

FileRead, fileContent, DroptopData.ini
Loop, Parse, fileContent, `n, `r
{
    StringSplit, keyValue, A_LoopField, =
    if (keyValue1 = "HotkeyModeZ")
    {
        HotkeyModeZ := keyValue2
        break
    }
}

Run, %PROGRAMPATH%
Sleep, 5000
Run, %PROGRAMPATH% !ActivateConfig Droptop\DropdownBar

SetTimer, CheckProgram, 10000 ; Check every 10 seconds
return

CheckProgram:
IfWinNotExist, ahk_exe Rainmeter.exe
{
    Run, %PROGRAMPATH%
	ShowState := 0
}
else
{
	ShowState := 0
}
return

~!Shift::
    Run, %PROGRAMPATH% !UpdateMeasure CurrentLanguageID.PSRM Droptop\Other\BackgroundProcesses
return

~#Space::
    Run, %PROGRAMPATH% !UpdateMeasure CurrentLanguageID.PSRM Droptop\Other\BackgroundProcesses
return

~!+d::
if ShowState = 0
{
	ShowState := 1
    Run, %PROGRAMPATH% !Hide "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !Zpos 1 "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !ShowFade "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !HideMeter Meter1 "Droptop\Other\BackgroundProcesses"
}
else
{
	ShowState := 0
    Run, %PROGRAMPATH% !Zpos %HotkeyModeZ% "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !ShowMeter Meter1 "Droptop\Other\BackgroundProcesses"
}
return

~!+1::
    Run, %PROGRAMPATH% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !SetVariable HotKeyTriggered 1 "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
return

~!+2::
    Run, %PROGRAMPATH% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !SetVariable HotKeyTriggered 2 "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
return

~!+3::
    Run, %PROGRAMPATH% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !SetVariable HotKeyTriggered 3 "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
return

~!4::
    Run, %PROGRAMPATH% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !SetVariable HotKeyTriggered 4 "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
return

~!+5::
    Run, %PROGRAMPATH% !EnableMeasure CommandHotkey "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !SetVariable HotKeyTriggered 5 "Droptop\DropdownBar"
    Run, %PROGRAMPATH% !UpdateMeasureGroup Commands "Droptop\DropdownBar"
return
