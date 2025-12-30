#SingleInstance, force
#NoTrayIcon
SetWinDelay, 0
SetWorkingDir %A_ScriptDir%

hVirtualDesktopAccessor := DllCall("LoadLibrary", "Str", A_ScriptDir . "\VirtualDesktopAccessor.dll", "Ptr")

GoToDesktopNumberProc := DllCall("GetProcAddress", "Ptr", hVirtualDesktopAccessor, "AStr", "GoToDesktopNumber", "Ptr")
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
SetStoreCapsLockMode, Off
Send, #^d
DllCall("FreeLibrary", "Ptr", hVirtualDesktopAccessor)
ExitApp

;----------

DeleteDesktop:
SetStoreCapsLockMode, Off
Send, #^{f4}
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