$skinsPath = $args[0]
$programPath = $args[1]
$settingsPath = $args[2]
$downloadMode = $args[3]

$newVersionURL = $args[4]
$newVersion = $args[5]

$appName1 = $args[6]
$appURL1 = $args[7]
$updateAvailable1 = $args[8]

$appName2 = $args[9]
$appURL2 = $args[10]
$updateAvailable2 = $args[11]

$appName3 = $args[12]
$appURL3 = $args[13]
$updateAvailable3 = $args[14]

$appName4 = $args[15]
$appURL4 = $args[16]
$updateAvailable4 = $args[17]

$appName5 = $args[18]
$appURL5 = $args[19]
$updateAvailable5 = $args[20]

$ErrorActionPreference= 'silentlycontinue'

cd $skinsPath

New-Item -ItemType Directory -Path ".\Droptop Folders\Other files\@Downloads\Droptop Updates"
New-Item -ItemType Directory -Path ".\Droptop Folders\Other files\@Downloads\Community App Updates"

if ($downloadMode -eq 1)
{
	if ( $updateAvailable1 -eq 1 )
	{
		Write-Host ""
		Write-Host "Downloading latest version of $appname1. Please wait..."
		
		Invoke-WebRequest -Uri "$appURL1" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName1.rmskin"
	}

	if ( $updateAvailable2 -eq 1 )
	{
		Write-Host ""
		Write-Host "Downloading latest version of $appname2. Please wait..."
		
		Invoke-WebRequest -Uri "$appURL2" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName2.rmskin"
	}

	if ( $updateAvailable3 -eq 1 )
	{
		Write-Host ""
		Write-Host "Downloading latest version of $appname3. Please wait..."
		
		Invoke-WebRequest -Uri "$appURL3" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName3.rmskin"
	}

	if ( $updateAvailable4 -eq 1 )
	{
		Write-Host ""
		Write-Host "Downloading latest version of $appname4. Please wait..."
		
		Invoke-WebRequest -Uri "$appURL4" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName4.rmskin"
	}

	if ( $updateAvailable5 -eq 1 )
	{
		Write-Host ""
		Write-Host "Downloading latest version of $appname5. Please wait..."
		
		Invoke-WebRequest -Uri "$appURL5" -OutFile ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName5.rmskin"
	}
}

Write-Host ""
Write-Host "Downloading Droptop update $newVersion. Please wait..."

Invoke-WebRequest -Uri "https://github.com/Droptop-Four/Droptop-Four/releases/latest/download/Droptop_Update.rmskin" -OutFile ".\Droptop Folders\Other files\@Downloads\Droptop Updates\Droptop Update $newVersion.rmskin"

if ($downloadMode -eq 1)
{
	if ( $updateAvailable1 -eq 1 )
	{
		Write-Host ""
		Write-Host "Installing latest version of $appname1. Please wait..."
		
		& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName1.rmskin"
	}

	if ( $updateAvailable2 -eq 1 )
	{
		Write-Host ""
		Write-Host "Installing latest version of $appname2. Please wait..."
		
		& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName2.rmskin"
	}

	if ( $updateAvailable3 -eq 1 )
	{
		Write-Host ""
		Write-Host "Installing latest version of $appname3. Please wait..."
		
		& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName3.rmskin"
	}

	if ( $updateAvailable4 -eq 1 )
	{
		Write-Host ""
		Write-Host "Installing latest version of $appname4. Please wait..."
		
		& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName4.rmskin"
	}

	if ( $updateAvailable5 -eq 1 )
	{
		Write-Host ""
		Write-Host "Installing latest version of $appname5. Please wait..."
		
		& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --norestart --skin ".\Droptop Folders\Other files\@Downloads\Community App Updates\$appName5.rmskin"
	}
}

Write-Host ""
Write-Host "Installing Droptop update $newVersion. Please wait..."

& ".\Droptop\@Resources\Scripts\AppBuilder\RMSKINInstaller.exe" --skin ".\Droptop Folders\Other files\@Downloads\Droptop Updates\Droptop Update $newVersion.rmskin"