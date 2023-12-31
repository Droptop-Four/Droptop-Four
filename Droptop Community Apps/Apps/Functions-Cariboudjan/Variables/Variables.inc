[Variables]
; -------------------------------------------------------------------------------
; VariablesDefault.inc should be a copy of Variables.inc, but contain all of the 'default' settings when the app is first installed.
; Any settings changed by the user should be written to Variables.inc, not VariablesDefault.inc.
; VariablesDefault.inc and Variables.inc should contain all of the user-configurable options for your app.
; -------------------------------------------------------------------------------

; -------------------------------------------------------------------------------
; Below variables are required for the app's function. Do not remove or change.
; -------------------------------------------------------------------------------

MyAppID=Functions-Cariboudjan
MyAppGUID=db0b912b-43fd-404d-9f01-bd68066b52bb
MyAppName=Functions
MyAppAuthor=Cariboudjan
MyVariablesLoc=#SKINSPATH#Droptop Community Apps\Apps\Functions-Cariboudjan\Variables\Variables.inc

; -------------------------------------------------------------------------------
; Add your variables below: 
; -------------------------------------------------------------------------------

;Main settings menu
CustomSetting3=1
CustomSetting4=1
CustomSetting5=0

CustomCheckmark=1

;Settings submenu 1
CustomSetting1.1=1
CustomSetting2.1=0
CustomSetting3.1=1

;Settings submenu 2
CustomSetting1.2=0
CustomSetting2.2=1
CustomSetting3.2=0
MyAppIsWebView=0
SearchModeNum=0
ShowSearchButton=1
ShowVoiceTypingButton=0
ShowLanguageButton=0
ShowActionButton=0
