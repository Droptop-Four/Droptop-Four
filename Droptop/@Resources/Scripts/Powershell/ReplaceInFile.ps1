(Get-Content $path) -replace $replace1,$replace2 | out-file $path
Set-Content -NoNewline -Encoding OEM $path -Value (Get-Content -Raw -Encoding $encoding $path)
	
Stop-Process -Name "notepad++"
Start-Process -FilePath "C:\Program Files\Notepad++\notepad++.exe"