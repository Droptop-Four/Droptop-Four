#Persistent
#SingleInstance, force

Menu, Tray, Tip, Droptop Task Helper

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

Run, %PROGRAMPATH%
Sleep, 5000
Run, %PROGRAMPATH% !ActivateConfig Droptop\DropdownBar

SetTimer, CheckProgram, 10000 ; Check every 10 seconds
return

CheckProgram:
IfWinNotExist, ahk_exe Rainmeter.exe
{
    Run, %PROGRAMPATH%
}
return

~!Shift::
    Run, %PROGRAMPATH% !UpdateMeasure CurrentLanguageID.PSRM Droptop\Other\BackgroundProcesses
return

~#Space::
    Run, %PROGRAMPATH% !UpdateMeasure CurrentLanguageID.PSRM Droptop\Other\BackgroundProcesses
return
