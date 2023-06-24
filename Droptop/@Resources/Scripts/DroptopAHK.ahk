#SingleInstance, force
#NoTrayIcon
DetectHiddenWindows, On
SetWinDelay, 0

Goto, %1%

;----------

DoNothing:
ExitApp

;----------

WindowsSearch:
 SetStoreCapsLockMode, Off
 Send, #s
ExitApp

AlternateSearch:
 SetStoreCapsLockMode, Off
 Send, !{Space}
ExitApp

;----------

StartMenu:
 SetStoreCapsLockMode, Off
 Send, {LWin}
ExitApp

ShowDesktop:
 SetStoreCapsLockMode, Off
 Send, #d
ExitApp

TaskView:
 SetStoreCapsLockMode, Off
 Send, #{Tab}
ExitApp

OpenCortana:
 SetStoreCapsLockMode, Off
 Send, #c
ExitApp

CloseCortana:
 SetStoreCapsLockMode, Off
 ControlClick, x0 y0, Cortana
 Send, {Esc}
ExitApp

VoiceTyping:
 SetStoreCapsLockMode, Off
 Send, !{Esc}
 Sleep, 200
 Send, #h
ExitApp

AppDrawer:
 Send, {Esc}
 Send, #b
 Send, {Space}
ExitApp

QuickSettings:
 SetStoreCapsLockMode, Off
 Send, #a
ExitApp

CloseApplication:
 Send, !{Esc}
 Send, !{F4}
ExitApp

WinWidgets:
 SetStoreCapsLockMode, Off
 Send, #w
ExitApp

AppSwitcher:
 SetStoreCapsLockMode, Off
 Send, ^!{Tab}
ExitApp

AppToggle:
 SetStoreCapsLockMode, Off
 Send, {Alt down}{Tab}
 Sleep, 100
 Send, {Tab}{Alt up}
ExitApp

AppCycle:
 Send, !{Esc}
 Send, !{Esc}
 Send, #{Up}
ExitApp

ClipToggle:
 Send, !{Esc}
 Sleep, 100
 Send, #v
ExitApp

LangSwitcher:
 Send, !{Esc}
 Send, {LAlt down}{LShift}
 KeyWait, LButton, U
 Send, {LAlt up}
ExitApp

LangToggle:
 Send, {LAlt down}{LShift}{LAlt up}
 ;KeyWait, LButton, U
 ;Send, {LWin up}
ExitApp

HangulToggle:
 Send, !{Esc}
 Sendinput, {vk15}
ExitApp

;----------

NextDesktop:
 SetStoreCapsLockMode, Off
 Send, #^{Right}
ExitApp

PreviousDesktop:
 SetStoreCapsLockMode, Off
 Send, #^{Left}
ExitApp

NewDesktop:
 SetStoreCapsLockMode, Off
 Send, #^d
ExitApp

CloseDesktop:
 SetStoreCapsLockMode, Off
 Send, #^{f4}
ExitApp

;----------

PrintScreen:
 Send, {PrintScreen}
ExitApp

SnippingTool:
 SetStoreCapsLockMode, Off
 Sleep, 50
 Send, #+s
ExitApp

;----------

OpenAppCmd:
 Run, cmd.exe
 WinWaitActive, C:\WINDOWS\SYSTEM32\cmd.exe, , 2
 Send, ^v
ExitApp

CustomHotkey:
 Send, !{Esc}
 Sleep, 50
 Goto, %3%
ExitApp

Send:
 Send, %2%
ExitApp

Run:
 Run, %2%
ExitApp

EscapeKey:
 SetStoreCapsLockMode, Off
 Send, {Esc}
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

ActivateTray:
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
	WinSet, Transparent, OFF, ahk_class NotifyIconOverflowWindow
loop 
{
	WinMove, ahk_class NotifyIconOverflowWindow, , %TrueX%, %TrueY%
	IfWinNotActive, ahk_class NotifyIconOverflowWindow
	ExitApp

}
}


