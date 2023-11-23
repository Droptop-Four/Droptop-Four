$downloadDate = Get-Date -Format "yy.MMdd"

$folderPath = "$skinspath"

cd $skinsPath

$isAdmin = ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)
	
if (-not $isAdmin) {
	$startInfo = New-Object System.Diagnostics.ProcessStartInfo
	$startInfo.FileName = 'powershell.exe'
	$startInfo.Arguments = "-Command `"Add-MpPreference -ExclusionPath '$folderPath'`""
	$startInfo.Verb = "runas"
[System.Diagnostics.Process]::Start($startInfo) | Out-Null
} else {
	Add-MpPreference -ExclusionPath $folderPath
	Set-ExecutionPolicy RemoteSigned -Force
}

# Write-Host "Droptop update in progress..."

New-Item -ItemType Directory -Path ".\Droptop Folders\Other files\@Downloads\Droptop Updates"
New-Item -ItemType Directory -Path ".\Droptop Folders\Other files\@Downloads\Community App Updates"

# Write-Host "Downloading Droptop update $newVersion. Please wait..."

Invoke-WebRequest -Uri "https://github.com/Droptop-Four/Droptop-Four/releases/latest/download/Droptop_Update.rmskin" -OutFile ".\Droptop Folders\Other files\@Downloads\Droptop Updates\Droptop Update $downloadDate.rmskin"

if ( $updateAvailable1 -eq 1 )
{
	# Write-Host "Downloading latest version of $appname1. Please wait..."

	Invoke-WebRequest -Uri "$appURL1" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName1.rmskin"
}

if ( $updateAvailable2 -eq 1 )
{
	# Write-Host "Downloading latest version of $appname2. Please wait..."
	
	Invoke-WebRequest -Uri "$appURL2" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName2.rmskin"
}

if ( $updateAvailable3 -eq 1 )
{
	# Write-Host "Downloading latest version of $appname3. Please wait..."
	
	Invoke-WebRequest -Uri "$appURL3" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName3.rmskin"
}

if ( $updateAvailable4 -eq 1 )
{
	# Write-Host "Downloading latest version of $appname4. Please wait..."
	
	Invoke-WebRequest -Uri "$appURL4" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName4.rmskin"
}

if ( $updateAvailable5 -eq 1 )
{
	# Write-Host "Downloading latest version of $appname5. Please wait..."
	
	Invoke-WebRequest -Uri "$appURL5" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName5.rmskin"
}






if ( $updateAvailable1 -eq 1 )
{
	# Write-Host "Installing latest version of $appname1. Please wait..."
	
	& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName1.rmskin"
}

if ( $updateAvailable2 -eq 1 )
{
	# Write-Host "Installing latest version of $appname2. Please wait..."

	& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName2.rmskin"
}

if ( $updateAvailable3 -eq 1 )
{
	# Write-Host "Installing latest version of $appname3. Please wait..."
	
	& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName3.rmskin"
}

if ( $updateAvailable4 -eq 1 )
{
	# Write-Host "Installing latest version of $appname4. Please wait..."
		
	& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName4.rmskin"
}

if ( $updateAvailable5 -eq 1 )
{
	# Write-Host "Installing latest version of $appname5. Please wait..."
	
	& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName5.rmskin"
}

# Write-Host "Installing Droptop update $newVersion. Please wait..."

# & ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Droptop Updates\Droptop Update $downloadDate.rmskin"

Start-Process -FilePath "$programPath" -ArgumentList "!CommandMeasure","RunCommand.Restart",'"Run"','"Droptop\Other\WindowMenu"'

