[Variables]
Functions.SearchButton=Search
Functions.VoiceTypingButton=VoiceTyping
Functions.LanguageButton=Language
Functions.ActionButton=Action
Functions.WidgetsButton=Widgets

SearchLink0=[#SearchMode[#SearchModeNum]]
SearchLink1=[]
SearchLinkSelect=0

VoiceTypingButton1=["#@#Scripts\DroptopAHK.#AHKType#" "VoiceTyping"]
VoiceTypingButton0=["#@#Scripts\DroptopAHK.#AHKType#" "EscapeKey"]
VoiceTypingSelect=0

ActionButton0=[ms-actioncenter:]
ActionButton1=[]
ActionSelect=0

[Functions-Cariboudjan.Style]
ImageAlpha=0
W=(((((#TopHeight#+#TopBarIconHOffset#)*1.5)+(#TopBarSysAppWPadding#*2))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)+(#TopBarSysAppWPadding#*2))%1))*(#ShowSearchButton#+#ShowVoiceTypingButton#+#ShowLanguageButton#+#ShowActionButton#+#ShowWidgetsButton#))
MouseOverAction=[]

[Functions-Cariboudjan]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
LeftMouseDownAction=[]
MouseOverAction=[!Delay 10][!SetOption MeasureActionTimer Click1B[&mItemSubFolderID] """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID]
MouseLeaveAction=[!SetOptionGroup FunctionButtons ImageAlpha "#*TopBarTitleOpacity*#"][!UpdateMeterGroup FunctionButtons]

[FunctionsButtonStyle]
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Functions-Cariboudjan\Icons\[##CURRENTSECTION#]\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]
Padding=#SysIconPadding#
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)*([#Show[##CURRENTSECTION#]Button]))
H=(#TopHeight#+#TopBarIconHOffset#)
Y=r
X=R
DynamicVariables=1
MouseOverAction=[!SetOptionGroup FunctionButtons ImageAlpha "(#*HighlightFontOpacity1*#/2)"][!SetOption #CURRENTSECTION# ImageAlpha "#*HighlightFontOpacity1*#"][!UpdateMeterGroup FunctionButtons][!Redraw]
MouseLeaveAction=
Group=SysTray | CustomApp#Functions-Cariboudjan#Sys | FunctionButtons
Hidden=(([#Show[##CURRENTSECTION#]Button]-1)*-1)

[Functions.SearchButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
X=[Functions-Cariboudjan:X]
Y=[Functions-Cariboudjan:Y]
LeftMouseDownAction=[!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!EnableMouseActionGroup "MouseOverAction" Buttons00][#SearchLink[#SearchLinkSelect]][!SetVariable SearchLinkSelect (#SearchLinkSelect#=1?0:1)][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!HideMeterGroup HighlightSelected][!UpdateMeterGroup SysTray][!UpdateMeter #CURRENTSECTION#][!Redraw][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable SearchLinkSelect 0][!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#]

[Functions.VoiceTypingButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
; LeftMouseDownAction=[!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!HideMeterGroup HighlightSelected][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!UpdateMeterGroup SysTray][!Redraw][#VoiceTypingButton[#VoiceTypingSelect]][!SetVariable VoiceTypingSelect (#VoiceTypingSelect#=1?0:1)][!UpdateMeter #CURRENTSECTION#][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
LeftMouseDownAction=[!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!HideMeterGroup HighlightSelected][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!UpdateMeterGroup SysTray][!Redraw]["#@#Scripts\DroptopAHK.#AHKType#" "VoiceTyping"][!UpdateMeter #CURRENTSECTION#][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable VoiceTypingSelect 0][!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#]

[Functions.LanguageButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
ImageFlip=[#LangImageFlip[#LangImageFlip]]
LeftMouseDownAction=[!SetVariable LangImageFlip (#LangImageFlip#=1?0:1)]["#@#Scripts\DroptopAHK.#AHKType#" "LangSwitcher"][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!HideMeterGroup HighlightSelected][!UpdateMeterGroup SysTray][!Redraw][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#]

[Functions.ActionButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
LeftMouseDownAction=[!CommandMeasure MeasureActionTimer "Stop 3"][#ActionButton[#ActionSelect]][!SetVariable ActionSelect (#ActionSelect#=1?0:1)][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!HideMeterGroup HighlightSelected][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\Folders\Folder#ActiveFolder#"][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\PowerMenu"][!UpdateMeter *][!Redraw][!Log "#ErrorMessage#" Notice][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Functions.WidgetsButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
LeftMouseDownAction=[!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!HideMeterGroup HighlightSelected][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!UpdateMeterGroup SysTray][!Redraw]["#@#Scripts\DroptopAHK.#AHKType#" "WinWidgets"][!UpdateMeter #CURRENTSECTION#][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#][!Redraw]
