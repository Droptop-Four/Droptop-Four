#SingleInstance, force
#NoTrayIcon
DetectHiddenWindows, On
SetWinDelay, 0

Goto, %1%

;----------

HideWebView:
SetTitleMatchMode RegEx
 WinHide ahk_class Chrome_WidgetWin_1 ahk_exe msedgewebview2.exe,,%2%,Chrome Legacy Window
ExitApp

;----------

SendClipboard:
 SendRaw %clipboard%
ExitApp

;----------

Lowercase:
{
 StringLower Clipboard, Clipboard
}
ExitApp

Uppercase:
{
 StringUpper Clipboard, Clipboard
}
ExitApp

Sentencecase:
{
StringLower, Clipboard, Clipboard
Clipboard := RegExReplace(Clipboard, "((?:^|[.!?]\s+)[a-z])", "$u1")
}
ExitApp

Capitalcase:
{
 StringUpper Clipboard, Clipboard, T
}
ExitApp

Oppositecase:
{
 Lab_Invert_Char_Out:= ""
 Loop % Strlen(Clipboard) {
    Lab_Invert_Char:= Substr(Clipboard, A_Index, 1)
    if Lab_Invert_Char is upper
       Lab_Invert_Char_Out:= Lab_Invert_Char_Out Chr(Asc(Lab_Invert_Char) + 32)
    else if Lab_Invert_Char is lower
       Lab_Invert_Char_Out:= Lab_Invert_Char_Out Chr(Asc(Lab_Invert_Char) - 32)
    else
       Lab_Invert_Char_Out:= Lab_Invert_Char_Out Lab_Invert_Char
 }
 clipboard := Lab_Invert_Char_Out
}
ExitApp

Alternatingcase:
{
 result := ""
 Loop, Parse, % Clipboard
	{
		if (Mod(A_Index, 2) = 0)
			result .= Format("{1:L}", A_LoopField)
		else
			result .= Format("{1:U}", A_LoopField)
	}
 clipboard := % result
}
ExitApp

Snakecase:
{
	Clipboard := StrReplace(Clipboard, " ", "_")
}
ExitApp

Kebabcase:
{
	Clipboard := StrReplace(Clipboard, " ", "-")
}
ExitApp

;----------

;Windows 10 tray
ActivateTray1:
X = %2%
Y = %3%
direction = %4%
IfWinActive, ahk_class NotifyIconOverflowWindow
	WinHide, ahk_class NotifyIconOverflowWindow
Else
{
	ControlClick, %5%, ahk_class Shell_TrayWnd
	WinGetPos,,,WidthOfTray,HeightOfTray,ahk_class NotifyIconOverflowWindow
	TrueX := X-WidthOfTray/2
	TrueY := Y-1.5
	WinSet, Transparent, 0, ahk_class NotifyIconOverflowWindow
	ControlClick, %5%, ahk_class Shell_TrayWnd
	WinMove, ahk_class NotifyIconOverflowWindow, , %TrueX%, %TrueY%
    WinShow, ahk_class Shell_TrayWnd
	WinSet, Transparent, OFF, ahk_class NotifyIconOverflowWindow
loop
{
	WinMove, ahk_class NotifyIconOverflowWindow, , %TrueX%, %TrueY%
	IfWinNotActive, ahk_class NotifyIconOverflowWindow
	ExitApp

}
}

;Windows 11 tray
ActivateTray0:
X = %2%
Y = %3%
direction = %4%
clickbutton = %5%
autohide = 0

IfWinActive, ahk_class TopLevelWindowForOverflowXamlIsland
{
    WinHide, ahk_class TopLevelWindowForOverflowXamlIsland
    ExitApp
}
Else
{
    WinGetPos,,YOfTaskbar,,, ahk_class Shell_TrayWnd
    If (YOfTaskbar = (A_ScreenHeight-2))
    {
        autohide = 1
        WinHide, ahk_class Shell_TrayWnd
    }
    Send, {Esc}
    Send, #b
    Send, {Space}
    WinWait, ahk_class TopLevelWindowForOverflowXamlIsland
    WinGetPos,,,WidthOfTray,HeightOfTray,ahk_class TopLevelWindowForOverflowXamlIsland
    TrueX := X-WidthOfTray/2
    TrueY := Y-1.5
    WinSet, Transparent, 0, ahk_class TopLevelWindowForOverflowXamlIsland
    WinMove, ahk_class TopLevelWindowForOverflowXamlIsland, , %TrueX%, %TrueY%
    If (autohide = 1)
    {
        WinShow, ahk_class Shell_TrayWnd
    }
    WinSet, Transparent, OFF, ahk_class TopLevelWindowForOverflowXamlIsland
    WinMove, ahk_class TopLevelWindowForOverflowXamlIsland, , %TrueX%, %TrueY%
    If (autohide = 1)
    {
        WinShow, ahk_class Shell_TrayWnd
    }
    loop
    {
        WinMove, ahk_class TopLevelWindowForOverflowXamlIsland, , %TrueX%, %TrueY%
    }
    ExitApp
}