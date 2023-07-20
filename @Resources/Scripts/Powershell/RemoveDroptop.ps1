Add-Type -AssemblyName PresentationFramework

$skinspath=$args[0]
$appdata=$args[1]
$programpath=$args[2]

$ErrorActionPreference= 'silentlycontinue'

	Start-Process -FilePath "$programpath" -ArgumentList "!DeactivateConfigGroup", "DroptopSuite"
	Start-Process -FilePath "$programpath" -ArgumentList "!Quit"
	# taskkill /f /im "cmd.exe"
	
	cd "$skinspath"

	Remove-Item -Path ".\Droptop Community Apps" -Recurse
	Remove-Item -Path ".\Droptop Folders" -Recurse
	Remove-Item -Path ".\Droptop" -Recurse

	cd "$appdata"

	Remove-Item -Path ".\Rainmeter\Layouts\Droptop" -Recurse

	# Write-Host 'Files have been successfully removed from your PC. Starting Rainmeter...'

	# Start-Sleep -Seconds 5
	
	Start-Process -FilePath "$programpath"
	Exit