#SingleInstance, force
#NoTrayIcon
SetWinDelay, 0
SetWorkingDir %A_ScriptDir%

hVirtualDesktopAccessor := DllCall("LoadLibrary", "Str", A_ScriptDir . "\VirtualDesktopAccessor.dll", "Ptr")

GoToDesktopNumberProc := DllCall("GetProcAddress", "Ptr", hVirtualDesktopAccessor, "AStr", "GoToDesktopNumber", "Ptr")
CreateDesktopProc := DllCall("GetProcAddress", "Ptr", hVirtualDesktopAccessor, "AStr", "CreateDesktop", "Ptr")
RemoveDesktopProc := DllCall("GetProcAddress", "Ptr", hVirtualDesktopAccessor, "AStr", "RemoveDesktop", "Ptr")
GetDesktopCountProc := DllCall("GetProcAddress", "Ptr", hVirtualDesktopAccessor, "AStr", "GetDesktopCount", "Ptr")
GetCurrentDesktopNumberProc := DllCall("GetProcAddress", "Ptr", hVirtualDesktopAccessor, "AStr", "GetCurrentDesktopNumber", "Ptr")

Goto, %1%

;----------

DoNothing:
ExitApp

;----------

MoveToDesktop:
desktop = %2%
DllCall(GoToDesktopNumberProc, "Int", desktop-1)
DllCall("FreeLibrary", "Ptr", hVirtualDesktopAccessor)
ExitApp

;----------

CreateDesktop:
DllCall(CreateDesktopProc)
DllCall("FreeLibrary", "Ptr", hVirtualDesktopAccessor)
ExitApp

;----------

DeleteDesktop:
desktopcount := DllCall(GetDesktopCountProc, "Int")-1
DllCall(RemoveDesktopProc, "Int", desktopcount, "Int", desktopcount-1, "Int")
DllCall("FreeLibrary", "Ptr", hVirtualDesktopAccessor)
ExitApp

;----------

PreviousDesktop:
desktopcount := DllCall(GetDesktopCountProc, "Int")-1
desktopcurrent := DllCall(GetCurrentDesktopNumberProc, "Int")

if (desktopcurrent = 0) {
    DllCall(GoToDesktopNumberProc, "Int", desktopcount)
} else {
    DllCall(GoToDesktopNumberProc, "Int", desktopcurrent-1)
}

DllCall("FreeLibrary", "Ptr", hVirtualDesktopAccessor)
ExitApp

;----------

NextDesktop:
desktopcount := DllCall(GetDesktopCountProc, "Int")-1
desktopcurrent := DllCall(GetCurrentDesktopNumberProc, "Int")

if (desktopcurrent >= desktopcount) {
    DllCall(GoToDesktopNumberProc, "Int", 0)
} else {
    DllCall(GoToDesktopNumberProc, "Int", desktopcurrent+1)
}

DllCall("FreeLibrary", "Ptr", hVirtualDesktopAccessor)
ExitApp

;----------

HighlightDesktop:
desktopcurrent := DllCall(GetCurrentDesktopNumberProc, "Int")

if (desktopcurrent > 10){
    DllCall(GoToDesktopNumberProc, "Int", desktopcurrent)
}

DllCall("FreeLibrary", "Ptr", hVirtualDesktopAccessor)
ExitApp

;----------