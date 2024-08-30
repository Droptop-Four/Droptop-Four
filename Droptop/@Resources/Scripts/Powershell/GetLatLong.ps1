Add-Type -AssemblyName System.Device
$GeoWatcher = New-Object System.Device.Location.GeoCoordinateWatcher
$GeoWatcher.Start()
	
$limit = (Get-Date).AddSeconds(10)
	
while (($GeoWatcher.Status -ne 'Ready') -and ($GeoWatcher.Permission -ne 'Denied') -and (Get-Date) -le $limit) {
    Start-Sleep -Milliseconds 100
	}
if ($GeoWatcher.Permission -eq 'Denied'){
	Write-Error 'Access Denied for Location Information'
	} else {
		$MyLoc = $GeoWatcher.Position.Location | Select Latitude,Longitude
	}
	
Start-Process -FilePath "`"$programPath`"" -ArgumentList "!SetOption","String","MeasureLatLong","`"$MyLoc`"","`"${skinspath}Droptop\Other\BackgroundProcesses`""
Start-Process -FilePath "`"$programPath`"" -ArgumentList "!UpdateMeasure","MeasureLatLong","`"${skinspath}Droptop\Other\BackgroundProcesses`""
Start-Process -FilePath "`"$programPath`"" -ArgumentList "!EnableMeasureGroup","MeasureLatLong","`"${skinspath}Droptop\Other\BackgroundProcesses`""
