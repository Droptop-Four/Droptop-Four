[Variables]
; -------------------------------------------------------------------------------
; VariablesDefault.inc should be a copy of Variables.inc, but contain all of the 'default' settings when the app is first installed.
; Any settings changed by the user should be written to Variables.inc, not VariablesDefault.inc.
; VariablesDefault.inc and Variables.inc should contain all of the user-configurable options for your app.
; -------------------------------------------------------------------------------

; -------------------------------------------------------------------------------
; Below variables are required for the app's function. Do not remove or change.
; -------------------------------------------------------------------------------

MyAppID=Test-Test2
MyAppName=Test
MyAppAuthor=Test2
MyVariablesLoc=#SKINSPATH#Droptop Community Apps\Apps\Test-Test2\Variables\Variables.inc

; -------------------------------------------------------------------------------
; Add your variables below: 
; -------------------------------------------------------------------------------

;Main settings menu
CustomSetting3=1
CustomSetting4=1
CustomSetting5=1

CustomCheckmark=1

;Settings submenu 1
CustomSetting1.1=1
CustomSetting2.1=0
CustomSetting3.1=1

;Settings submenu 2
CustomSetting1.2=0
CustomSetting2.2=1
CustomSetting3.2=0
