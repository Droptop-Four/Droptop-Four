$path=$args[0]

$gamesfol2=$args[1]
$gamesfol3=$args[2]
$gamesfol4=$args[3]
$gamesfol5=$args[4]
$gamesfol6=$args[5]
$gamesfol7=$args[6]
$gamesfol8=$args[7]
$gamesfol9=$args[8]
$gamescamfol1=$args[9]
$gamescamfol2=$args[10]
$gamescamfol3=$args[11]
$gamescamfol4=$args[12]
$gamescamfol5=$args[13]
$gameslocfol1=$args[14]
$gameslocfol2=$args[15]
$gameslocfol3=$args[16]
$gamesonlfol1=$args[17]
$gamesonlfol2=$args[18]
$gamesonlfol3=$args[19]
$gamesonlfol4=$args[20]

$newsmediafol1=$args[21]
$newsmediafol2=$args[22]
$newsmediafol3=$args[23]

$onlinetools1fol=$args[24]

$podcastsfol1=$args[25]
$podcastsfol2=$args[26]
$podcastsfol3=$args[27]
$podcastsfol4=$args[28]
$podcastsfol5=$args[29]
$podcastsfol6=$args[30]
$podcastsfol7=$args[31]

$bookmarksfol1=$args[32]
$bookmarksfol2=$args[33]
$bookmarksfol3=$args[34]
$bookmarksfol4=$args[35]

$advanced1=$args[36]
$advanced2=$args[37]
$advanced3=$args[38]
$advanced4=$args[39]
$advanced5=$args[40]
$advanced6=$args[41]
$advanced7=$args[42]
$advanced8=$args[43]
$advanced9=$args[44]
$advanced10=$args[45]
$advanced11=$args[46]
$advanced12=$args[47]

$controlfol1=$args[48]
$control1=$args[49]
$control2=$args[50]
$control3=$args[51]
$control4=$args[52]
$control5=$args[53]
$control6=$args[54]
$control7=$args[55]
$control8=$args[56]
$control9=$args[57]
$control10=$args[58]
$control11=$args[59]

$ErrorActionPreference= 'silentlycontinue'

cd "$path\Bookmarks\News & media"

Rename-Item -Path ".\Far-Left" -NewName "$newsmediafol1" -Force
Rename-Item -Path ".\Far-Right" -NewName "$newsmediafol2" -Force
Rename-Item -Path ".\International" -NewName "$newsmediafol3" -Force

cd "$path\Bookmarks\Online tools"

Rename-Item -Path ".\Diagnostic" -NewName "$onlinetools1fol" -Force

cd "$path\Bookmarks\Spotify Podcasts"

Rename-Item -Path ".\Crime & Drama" -NewName "$podcastsfol1" -Force
Rename-Item -Path ".\Past & Present" -NewName "$podcastsfol2" -Force
Rename-Item -Path ".\Politics" -NewName "$podcastsfol3" -Force
Rename-Item -Path ".\Science & Technology" -NewName "$podcastsfol4" -Force
Rename-Item -Path ".\Sex & Psychology" -NewName "$podcastsfol5" -Force
Rename-Item -Path ".\Sports" -NewName "$podcastsfol6" -Force
Rename-Item -Path ".\Talk shows" -NewName "$podcastsfol7" -Force

cd "$path\Bookmarks"

Rename-Item -Path ".\News & media" -NewName "$bookmarksfol1" -Force
Rename-Item -Path ".\Online tools" -NewName "$bookmarksfol2" -Force
Rename-Item -Path ".\Spotify Podcasts" -NewName "$bookmarksfol3" -Force
Rename-Item -Path ".\Shopping" -NewName "$bookmarksfol4" -Force

cd "$path\Control\Advanced controls"

Rename-Item -Path ".\Command prompt.lnk" -NewName "$($advanced1).lnk" -Force
Rename-Item -Path ".\Device manager.lnk" -NewName "$($advanced2).lnk" -Force
Rename-Item -Path ".\Disk cleanup.lnk" -NewName "$($advanced3).lnk" -Force
Rename-Item -Path ".\Disk management.lnk" -NewName "$($advanced4).lnk" -Force
Rename-Item -Path ".\Registry editor.lnk" -NewName "$($advanced5).lnk" -Force
Rename-Item -Path ".\Resource monitor.lnk" -NewName "$($advanced6).lnk" -Force
Rename-Item -Path ".\Startup apps.url" -NewName "$($advanced7).url" -Force
Rename-Item -Path ".\Storage spaces.lnk" -NewName "$($advanced8).lnk" -Force
Rename-Item -Path ".\System configuration.lnk" -NewName "$($advanced9).lnk" -Force
Rename-Item -Path ".\Windows firewall.lnk" -NewName "$($advanced10).lnk" -Force
Rename-Item -Path ".\Windows PowerShell.lnk" -NewName "$($advanced11).lnk" -Force
Rename-Item -Path ".\Windows services.lnk" -NewName "$($advanced12).lnk" -Force

cd "$path\Control"

Rename-Item -Path ".\Advanced controls" -NewName "$controlfol1" -Force
Rename-Item -Path ".\Desktop background.lnk" -NewName "$($control1).lnk" -Force
Rename-Item -Path ".\Display settings.url" -NewName "$($control2).url" -Force
Rename-Item -Path ".\Magnify.lnk" -NewName "$($control3).lnk" -Force
Rename-Item -Path ".\On-screen keyboard.lnk" -NewName "$($control4).lnk" -Force
Rename-Item -Path ".\Power options.lnk" -NewName "$($control5).lnk" -Force
Rename-Item -Path ".\Recycle bin.lnk" -NewName "$($control6).lnk" -Force
Rename-Item -Path ".\Switch display.lnk" -NewName "$($control7).lnk" -Force
Rename-Item -Path ".\System information.lnk" -NewName "$($control8).lnk" -Force
Rename-Item -Path ".\Task manager.lnk" -NewName "$($control9).lnk" -Force
Rename-Item -Path ".\Uninstall a program.url" -NewName "$($control10).url" -Force
Rename-Item -Path ".\User accounts.lnk" -NewName "$($control11).lnk" -Force

cd "$path\Games\Campaign"

Rename-Item -Path ".\Action" -NewName "$gamescamfol1" -Force
Rename-Item -Path ".\Horror" -NewName "$gamescamfol2" -Force
Rename-Item -Path ".\Relaxed" -NewName "$gamescamfol3" -Force
Rename-Item -Path ".\RPG" -NewName "$gamescamfol4" -Force
Rename-Item -Path ".\Survival" -NewName "$gamescamfol5" -Force

cd "$path\Games\Local multiplayer"

Rename-Item -Path ".\Co-op" -NewName "$gameslocfol1" -Force
Rename-Item -Path ".\Party" -NewName "$gameslocfol2" -Force
Rename-Item -Path ".\Versus" -NewName "$gameslocfol3" -Force

cd "$path\Games\Online multiplayer"

Rename-Item -Path ".\Battle Royale" -NewName "$gamesonlfol1" -Force
Rename-Item -Path ".\MMO" -NewName "$gamesonlfol2" -Force
Rename-Item -Path ".\Shooter" -NewName "$gamesonlfol3" -Force
Rename-Item -Path ".\Strategy" -NewName "$gamesonlfol4" -Force

cd "$path\Games"

Rename-Item -Path ".\Campaign" -NewName "$gamesfol2" -Force
Rename-Item -Path ".\Casual" -NewName "$gamesfol3" -Force
Rename-Item -Path ".\Indie" -NewName "$gamesfol4" -Force
Rename-Item -Path ".\Local multiplayer" -NewName "$gamesfol5" -Force
Rename-Item -Path ".\Online multiplayer" -NewName "$gamesfol6" -Force
Rename-Item -Path ".\Simulation" -NewName "$gamesfol7" -Force
Rename-Item -Path ".\Sports & racing" -NewName "$gamesfol8" -Force
Rename-Item -Path ".\Virtual Reality" -NewName "$gamesfol9" -Force

# Start-Sleep