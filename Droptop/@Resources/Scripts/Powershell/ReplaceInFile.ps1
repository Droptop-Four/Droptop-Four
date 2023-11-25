# $replace1=$args[0]
# $replace2=$args[1]
# $path=$args[2]
# $encoding=$args[3]

(Get-Content $path) -replace $replace1,$replace2 | out-file $path
Set-Content -NoNewline -Encoding OEM $path -Value (Get-Content -Raw -Encoding $encoding $path)
	
Stop-Process -Name "notepad++"
Start-Process -FilePath "C:\Program Files\Notepad++\notepad++.exe"
