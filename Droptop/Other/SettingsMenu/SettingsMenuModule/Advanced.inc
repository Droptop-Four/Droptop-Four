[Rainmeter]

[Variables]
DisableDPIAction0=reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers" /v "C:\Program Files\Rainmeter\Rainmeter.exe" /t "REG_SZ" /d "" /f
DisableDPIAction1=reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers" /v "C:\Program Files\Rainmeter\Rainmeter.exe" /t "REG_SZ" /d "~ HIGHDPIAWARE" /f

[1]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[]
MouseLeaveAction=[]
LeftMouseDownAction=[]

[3]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[]
MouseLeaveAction=[]
LeftMouseDownAction=[]

[RunCommand.DisableDPI]
Measure=Plugin
Plugin=RunCommand
Parameter=[#DisableDPIAction[#DisableDPINum]]
State=Hide
OutputType=ANSI
OutputFile=

[6]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[]
MouseLeaveAction=[]
LeftMouseDownAction=[]

[7]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[]
MouseLeaveAction=[]
LeftMouseDownAction=[]