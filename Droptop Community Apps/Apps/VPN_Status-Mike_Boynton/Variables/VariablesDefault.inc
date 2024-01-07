[Variables]
; -------------------------------------------------------------------------------
; VariablesDefault.inc should contain all or most of the variables required for the app's function, especially user settings.
; VariablesDefault.inc keys and values are the default settings when the app is first installed or reinstalled.
; Any settings changed by the user should be written to Variables.inc, not VariablesDefault.inc.
; All keys in Variables.inc supercede the identical keys of VariablesDefault.inc. 
; VariablesDefault.inc acts as a backup and fallback.
; -------------------------------------------------------------------------------

; -------------------------------------------------------------------------------
; Below variables are required for the app's function. Do not remove or change.
; -------------------------------------------------------------------------------

MyAppID=VPN_Status-Mike_Boynton
MyAppName=VPN Status
MyAppAuthor=Mike Boynton
MyVariablesLoc=#SKINSPATH#Droptop Community Apps\Apps\VPN_Status-Mike_Boynton\Variables\Variables.inc

MaxDownloadMbits=293.78
MaxUploadMbits=10.05

CustomAppName=VPN Status
CustomAppVersion=23.0429
CustomAppCreators=Mike Boynton
; -------------------------------------------------------------------------------
; Add your variables below: 
; -------------------------------------------------------------------------------

VPNSubstitute="":"0","\u":"[\x","\[\\x(....)":"[\x\1]"
FColor=255,0,0,255
VPNOnOffText=OFF
VPNOnOff=0
VPNWANIP=76.9.48.145
VPNRegion=Yukon
VPNCity=Whitehorse
VPNLat=60.7211871
VPNLong=-135.0568449
MyAppGUID=d70859a7-dcb2-4d25-80e4-cd2dbe0d9fcd
