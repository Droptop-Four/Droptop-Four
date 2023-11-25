$isAdmin = ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)

if (-not $isAdmin) {
	$startInfo = New-Object System.Diagnostics.ProcessStartInfo
[System.Diagnostics.Process]::Start($startInfo) | Out-Null
} else {
	Start-Process -FilePath "$programPath" -ArgumentList "!DeactivateConfigGroup", "DroptopSuite"
	Start-Process -FilePath "$programPath" -ArgumentList "!DeactivateConfig", "Droptop\DropdownBar\AppBar"
	Start-Process -FilePath "$programPath" -ArgumentList "!Quit"
	
	cd "$skinsPath"

	Remove-Item -Path ".\Droptop Community Apps" -Recurse
	Remove-Item -Path ".\Droptop Folders" -Recurse
	Remove-Item -Path ".\Droptop" -Recurse

	cd "$appData"

	Remove-Item -Path ".\Rainmeter\Layouts\Droptop" -Recurse

	Start-Process -FilePath "$programPath"
	Exit
}
