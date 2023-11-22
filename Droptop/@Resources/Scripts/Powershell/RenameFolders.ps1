cd "$path\Bookmarks\News & media"

Rename-Item -Path ".\Far-Left" -NewName "$newsMediaFol1" -Force
Rename-Item -Path ".\Far-Right" -NewName "$newsMediaFol2" -Force
Rename-Item -Path ".\International" -NewName "$newsMediaFol3" -Force

cd "$path\Bookmarks\Online tools"

Rename-Item -Path ".\Diagnostic" -NewName "$onlineToolsFol1" -Force

cd "$path\Bookmarks\Spotify Podcasts"

Rename-Item -Path ".\Crime & Drama" -NewName "$podcastsFol1" -Force
Rename-Item -Path ".\Past & Present" -NewName "$podcastsFol2" -Force
Rename-Item -Path ".\Politics" -NewName "$podcastsFol3" -Force
Rename-Item -Path ".\Science & Technology" -NewName "$podcastsFol4" -Force
Rename-Item -Path ".\Sex & Psychology" -NewName "$podcastsFol5" -Force
Rename-Item -Path ".\Sports" -NewName "$podcastsFol6" -Force
Rename-Item -Path ".\Talk shows" -NewName "$podcastsFol7" -Force

cd "$path\Bookmarks"

Rename-Item -Path ".\News & media" -NewName "$bookmarksFol1" -Force
Rename-Item -Path ".\Online tools" -NewName "$bookmarksFol2" -Force
Rename-Item -Path ".\Spotify Podcasts" -NewName "$bookmarksFol3" -Force
Rename-Item -Path ".\Shopping" -NewName "$bookmarksFol4" -Force

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

Rename-Item -Path ".\Advanced controls" -NewName "$controlFol1" -Force
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

Rename-Item -Path ".\Action" -NewName "$gamesCamFol1" -Force
Rename-Item -Path ".\Horror" -NewName "$gamesCamFol2" -Force
Rename-Item -Path ".\Relaxed" -NewName "$gamesCamFol3" -Force
Rename-Item -Path ".\RPG" -NewName "$gamesCamFol4" -Force
Rename-Item -Path ".\Survival" -NewName "$gamesCamFol5" -Force

cd "$path\Games\Local multiplayer"

Rename-Item -Path ".\Co-op" -NewName "$gamesLocFol1" -Force
Rename-Item -Path ".\Party" -NewName "$gamesLocFol2" -Force
Rename-Item -Path ".\Versus" -NewName "$gamesLocFol3" -Force

cd "$path\Games\Online multiplayer"

Rename-Item -Path ".\Battle Royale" -NewName "$gamesOnlFol1" -Force
Rename-Item -Path ".\MMO" -NewName "$gamesOnlFol2" -Force
Rename-Item -Path ".\Shooter" -NewName "$gamesOnlFol3" -Force
Rename-Item -Path ".\Strategy" -NewName "$gamesOnlFol4" -Force

cd "$path\Games"

Rename-Item -Path ".\Campaign" -NewName "$gamesFol2" -Force
Rename-Item -Path ".\Casual" -NewName "$gamesFol3" -Force
Rename-Item -Path ".\Indie" -NewName "$gamesFol4" -Force
Rename-Item -Path ".\Local multiplayer" -NewName "$gamesFol5" -Force
Rename-Item -Path ".\Online multiplayer" -NewName "$gamesFol6" -Force
Rename-Item -Path ".\Simulation" -NewName "$gamesFol7" -Force
Rename-Item -Path ".\Sports & racing" -NewName "$gamesFol8" -Force
Rename-Item -Path ".\Virtual Reality" -NewName "$gamesFol9" -Force

# Start-Sleep
