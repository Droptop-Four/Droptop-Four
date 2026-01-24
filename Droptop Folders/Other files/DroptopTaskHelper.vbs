On Error Resume Next

Set WshShell = CreateObject("WScript.Shell")
Set objArgs = WScript.Arguments

' Check if an argument was provided
If objArgs.Count > 0 Then
    appName = objArgs(0)
Else
    WScript.Quit
End If

' The 0 at the end hides the window
WshShell.Run chr(34) & "DroptopTaskHelper.bat" & chr(34) & " " & chr(34) & appName & chr(34), 0

' Clear any errors that occurred and exit
If Err.Number <> 0 Then
    Err.Clear
End If

Set WshShell = Nothing