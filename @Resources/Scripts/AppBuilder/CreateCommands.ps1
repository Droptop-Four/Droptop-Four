$commandsauthor=$args[0]
$skinspath=$args[1]

$ErrorActionPreference= 'silentlycontinue'

cd "$skinspath"

New-Item -ItemType "directory" -Path ".\Droptop Folders\Other files\@Rmskins\Droptop App Commands"
Remove-Item -Path ".\Droptop Folders\Other files\@Rmskins\Droptop App Commands\*" -Recurse
Remove-Item -Path ".\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\*" -Recurse
Copy-Item ".\Droptop Folders\Other files\UserAppCommands.inc" -Destination ".\Droptop\@Resources\Scripts\AppBuilder\CommandsTemplate\Skins\Droptop Folders\Other files" -Recurse

cd .\Droptop\@Resources\Scripts\AppBuilder
.\MakeRmSkin.ps1 -Skin CommandsTemplate
cd "$skinspath"
Move-Item -Path '.\Droptop\@Resources\Scripts\AppBuilder\@Rmskins\CommandsTemplate.rmskin' -Destination ".\Droptop Folders\Other files\@Rmskins\Droptop App Commands\Droptop App Commands - $commandsauthor.rmskin"
cd .\Droptop\@Resources\Scripts\AppBuilder
Remove-Item -Path ".\CommandsTemplate\Skins\Droptop Folders\Other files\UserAppCommands.inc" -Recurse
Remove-Item -Path ".\@Rmskins\*.zip" -Recurse
cd "$skinspath"
Invoke-Item '.\Droptop Folders\Other files\@Rmskins\Droptop App Commands'