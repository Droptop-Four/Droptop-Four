$ErrorActionPreference= 'silentlycontinue'

New-Item -ItemType "directory" -Path "$skinspath\Droptop Folders\Other files\@Rmskins\Droptop App Commands"
Remove-Item -Path "$skinspath\Droptop Folders\Other files\@Rmskins\Droptop App Commands\*" -Recurse
Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*" -Recurse
Copy-Item "$skinspath\Droptop Folders\Other files\UserAppCommands.inc" -Destination "$skinspath\Droptop\@Resources\Scripts\AppBuilder\CommandsTemplate\Skins\Droptop Folders\Other files" -Recurse

[System.IO.Directory]::CreateDirectory("$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins") | Out-Null
Write-Host $skinspath\Droptop\@Resources\Scripts\AppBuilder

Get-ChildItem -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\CommandsTemplate\" -rec -file *.* | Where-Object { $_.LastWriteTime -lt (Get-Date).AddYears(-20) } | ForEach-Object { try { $_.LastWriteTime = '01/01/2020 00:00:00' } catch {} }

Compress-Archive -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\CommandsTemplate\*" -DestinationPath "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\CommandsTemplate.zip" -CompressionLevel Optimal -Force -ErrorAction Stop
Rename-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\CommandsTemplate.zip" -NewName "CommandsTemplate.rmskin" -Force -ErrorAction Stop
&"$skinspath\Droptop\@Resources\Scripts\AppBuilder\AddRmFooter" "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\CommandsTemplate.rmskin"

Move-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\CommandsTemplate.rmskin" -Destination "$skinspath\Droptop Folders\Other files\@Rmskins\Droptop App Commands\Droptop App Commands - $commandsauthor.rmskin"

Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\CommandsTemplate\Skins\Droptop Folders\Other files\UserAppCommands.inc" -Recurse
Remove-Item -Path "$skinspath\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*.zip" -Recurse

Invoke-Item "$skinspath\Droptop Folders\Other files\@Rmskins\Droptop App Commands"