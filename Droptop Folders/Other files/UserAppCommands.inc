[Variables]

; Define up to 5 actions per application. By selecting the "Create app commands..." button.

; See the sample below for a reference on how to configure your commands. 

; Actions use AutoHotkey script. For information on how to create AutoHotkey commands, 
; go here: https://www.autohotkey.com/docs/Hotkeys.htm

; ^ = Control
; + = Shift
; ! = Alt
; # = Windows key
; {Tab} {Esc} {Enter} {Backspace} {F1} {F2} {F3} {Up} {Down} {Left} {Right} {Space}

; When finished, save this document and refresh Rainmeter to view your changes.



;Example
;---------------------------------------
;Replace "APPLICATIONNAME" with the name of the application you are creating commands for
;Set APPLICATIONNAME.exe.CommandCount= to the number of commands you have created

APPLICATIONNAME.exe.CommandCount=5

;Name the command and then set its keyboard shortcut action
APPLICATIONNAME.exe.CommandUnicodeIcon01=1
APPLICATIONNAME.exe.CommandName01=Open Explorer
APPLICATIONNAME.exe.CommandAction01=#e
APPLICATIONNAME.exe.CommandActionType01=Send

;Example: "^+t" means Control+Shift+T
APPLICATIONNAME.exe.CommandUnicodeIcon02=2
APPLICATIONNAME.exe.CommandName02=New tab
APPLICATIONNAME.exe.CommandAction02=^t
APPLICATIONNAME.exe.CommandActionType02=Send

;Set ActionType to "Send" to send a hotkey, or set ActionType to "Run" to run a command!
APPLICATIONNAME.exe.CommandUnicodeIcon03=3
APPLICATIONNAME.exe.CommandName03=Go to Google.com
APPLICATIONNAME.exe.CommandAction03=https://www.google.com
APPLICATIONNAME.exe.CommandActionType03=Run

APPLICATIONNAME.exe.CommandUnicodeIcon04=4
APPLICATIONNAME.exe.CommandName04=Send email
APPLICATIONNAME.exe.CommandAction04=mailto:someone@somedomain.com
APPLICATIONNAME.exe.CommandActionType04=Run

APPLICATIONNAME.exe.CommandUnicodeIcon05=5
APPLICATIONNAME.exe.CommandName05=My Computer
APPLICATIONNAME.exe.CommandAction05=::{20d04fe0-3aea-1069-a2d8-08002b30309d}
APPLICATIONNAME.exe.CommandActionType05=Run

;(Optional) Assign a color that will appear under the app commands in the bar, RRR,GGG,BBB format (eg. 205,105,25)
APPLICATIONNAME.exe.CommandColor=[#*TopBarFontColor1*]
;---------------------------------------

;---------------------------------------

