Dim WshS
Set WshS = WScript.CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")

usrProfile = WshS.ExpandEnvironmentStrings("%UserProfile%")

arg = WScript.Arguments.Item(0)

'strMessage = "Icons have been updated."

'Msgbox strMessage, 0, ""



Const DESKTOP = &H10&

Set objShell = CreateObject("Shell.Application")

Set objFolder = objShell.NameSpace(arg & "Droptop Folders\Bookmarks")

' Set objFolder3 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Spotify Podcasts\Crime & Drama")

' Set objFolder4 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Spotify Podcasts\Politics")

' Set objFolder5 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Spotify Podcasts\Science & Technology")

' Set objFolder6 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Spotify Podcasts\Sex & Psychology")

' Set objFolder7 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Spotify Podcasts\Sports")

' Set objFolder8 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Spotify Podcasts\Talk Shows")

' Set objFolder9 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Spotify Podcasts\Past & Present")

Set objFolder10 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Shopping")

Set objFolder11 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Online tools")

' Set objFolder12 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\Online tools\Diagnostic")

' Set objFolder13 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\News & Media\Far-Left")

' Set objFolder14 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\News & Media\Far-Right")

' Set objFolder15 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\News & Media\International")

' Set objFolder16 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\News & Media\US Conservative")

' Set objFolder17 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\News & Media\US Democrat")

' Set objFolder18 = objShell.NameSpace(arg & "Droptop Folders\Bookmarks\News & Media\US Moderate")

Set objFolder19 = objShell.NameSpace(arg & "Droptop Folders\Other files\PaperclipShortcuts")



Set objFolderItem2 = objFolder.ParseName("Google Photos.url")

Set objShortcut2 = objFolderItem2.GetLink

objShortcut2.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Google Photos.ico", 0




Set objFolderItem3 = objFolder.ParseName("Disney+.url")

Set objShortcut3 = objFolderItem3.GetLink

objShortcut3.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Disney+.ico", 0




Set objFolderItem4 = objFolder.ParseName("Gmail.url")

Set objShortcut4 = objFolderItem4.GetLink

objShortcut4.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Inbox.ico", 0




Set objFolderItem5 = objFolder.ParseName("Netflix.url")

Set objShortcut5 = objFolderItem5.GetLink

objShortcut5.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Netflix.ico", 0




Set objFolderItem6 = objFolder.ParseName("Google Keep.url")

Set objShortcut6 = objFolderItem6.GetLink

objShortcut6.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Google Keep.ico", 0




Set objFolderItem7 = objFolder.ParseName("Reddit.url")

Set objShortcut7 = objFolderItem7.GetLink

objShortcut7.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Reddit.ico", 0




Set objFolderItem8 = objFolder.ParseName("Steam.url")

Set objShortcut8 = objFolderItem8.GetLink

objShortcut8.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Steam.ico", 0




Set objFolderItem9 = objFolder.ParseName("Google Maps.url")

Set objShortcut9 = objFolderItem9.GetLink

objShortcut9.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Google Maps.ico", 0




Set objFolderItem10 = objFolder.ParseName("Twitch.url")

Set objShortcut10 = objFolderItem10.GetLink

objShortcut10.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Twitch.ico", 0




Set objFolderItem11 = objFolder.ParseName("YouTube.url")

Set objShortcut11 = objFolderItem11.GetLink

objShortcut11.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\YouTube.ico", 0





'Games folder ###############################################################################################




' Set objFolderItem20 = objFolder2.ParseName("Quest Of Graal.url")

' Set objShortcut20 = objFolderItem20.GetLink

' objShortcut20.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Graal.ico", 0




' Set objFolderItem21 = objFolder2.ParseName("Magical Pet Swap.url")

' Set objShortcut21 = objFolderItem21.GetLink

' objShortcut21.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Pet Swap.ico", 0




' Set objFolderItem22 = objFolder2.ParseName("Quick, Draw!.url")

' Set objShortcut22 = objFolderItem22.GetLink

' objShortcut22.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Quick Draw.ico", 0




' Set objFolderItem23 = objFolder2.ParseName("Itch.io.url")

' Set objShortcut23 = objFolderItem23.GetLink

' objShortcut23.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Itchio.ico", 0




'Podcasts folder ###############################################################################################




'Crime & Drama folder ###############################################################################################




' Set objFolderItem30 = objFolder3.ParseName("Crime Show.url")

' Set objShortcut30 = objFolderItem30.GetLink

' objShortcut30.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem31 = objFolder3.ParseName("Heavyweight.url")

' Set objShortcut31 = objFolderItem31.GetLink

' objShortcut31.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem32 = objFolder3.ParseName("Nosy Neighbors.url")

' Set objShortcut32 = objFolderItem32.GetLink

' objShortcut32.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem33 = objFolder3.ParseName("Red Frontier.url")

' Set objShortcut33 = objFolderItem33.GetLink

' objShortcut33.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem34 = objFolder3.ParseName("Son of a Hitman.url")

' Set objShortcut34 = objFolderItem34.GetLink

' objShortcut34.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' 'Politics folder ###############################################################################################




' Set objFolderItem40 = objFolder4.ParseName("The NPR Politics Podcast.url")

' Set objShortcut40 = objFolderItem40.GetLink

' objShortcut40.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem41 = objFolder4.ParseName("Pod Save America.url")

' Set objShortcut41 = objFolderItem41.GetLink

' objShortcut41.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem42 = objFolder4.ParseName("The Daily.url")

' Set objShortcut42 = objFolderItem42.GetLink

' objShortcut42.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem43 = objFolder4.ParseName("Today, Explained.url")

' Set objShortcut43 = objFolderItem43.GetLink

' objShortcut43.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' 'Science & Technology folder ###############################################################################################




' Set objFolderItem50 = objFolder5.ParseName("Dope Labs.url")

' Set objShortcut50 = objFolderItem50.GetLink

' objShortcut50.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' 'Sex & Psychology folder ###############################################################################################




' Set objFolderItem60 = objFolder6.ParseName("Call Her Daddy.url")

' Set objShortcut60 = objFolderItem60.GetLink

' objShortcut60.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' 'Sports folder ###############################################################################################




' Set objFolderItem70 = objFolder7.ParseName("Fantasy Football Podcast.url")

' Set objShortcut70 = objFolderItem70.GetLink

' objShortcut70.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem71 = objFolder7.ParseName("The Ringer.url")

' Set objShortcut71 = objFolderItem71.GetLink

' objShortcut71.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' 'Talk Shows folder ###############################################################################################




' Set objFolderItem80 = objFolder8.ParseName("60 Songs That Explain the 90s.url")

' Set objShortcut80 = objFolderItem80.GetLink

' objShortcut80.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem81 = objFolder8.ParseName("Armchair Expert.url")

' Set objShortcut81 = objFolderItem81.GetLink

' objShortcut81.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem82 = objFolder8.ParseName("Bandsplain.url")

' Set objShortcut82 = objFolderItem82.GetLink

' objShortcut82.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem83 = objFolder8.ParseName("Black on the Air.url")

' Set objShortcut83 = objFolderItem83.GetLink

' objShortcut83.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem84 = objFolder8.ParseName("Jemele Hill Is Unbothered.url")

' Set objShortcut84 = objFolderItem84.GetLink

' objShortcut84.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem85 = objFolder8.ParseName("Renegades Born in the USA.url")

' Set objShortcut85 = objFolderItem85.GetLink

' objShortcut85.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' 'Past & Present folder ###############################################################################################




' Set objFolderItem90 = objFolder9.ParseName("Not Past It.url")

' Set objShortcut90 = objFolderItem90.GetLink

' objShortcut90.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




' Set objFolderItem91 = objFolder9.ParseName("Reply All.url")

' Set objShortcut91 = objFolderItem91.GetLink

' objShortcut91.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Podcasts.ico", 0




'Shopping folder ###############################################################################################




Set objFolderItem100 = objFolder10.ParseName("Amazon.url")

Set objShortcut100 = objFolderItem100.GetLink

objShortcut100.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Amazon.ico", 0




Set objFolderItem101 = objFolder10.ParseName("Ebay.com.url")

Set objShortcut101 = objFolderItem101.GetLink

objShortcut101.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Ebay.ico", 0




Set objFolderItem102 = objFolder10.ParseName("Etsy.url")

Set objShortcut102 = objFolderItem102.GetLink

objShortcut102.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Etsy.ico", 0




Set objFolderItem103 = objFolder10.ParseName("Newegg.url")

Set objShortcut103 = objFolderItem103.GetLink

objShortcut103.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Newegg.ico", 0




Set objFolderItem104 = objFolder10.ParseName("Steam.url")

Set objShortcut104 = objFolderItem104.GetLink

objShortcut104.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Steam.ico", 0




Set objFolderItem105 = objFolder10.ParseName("Walmart.com.url")

Set objShortcut105 = objFolderItem105.GetLink

objShortcut105.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Walmart.ico", 0




'Online tools folder ###############################################################################################




Set objFolderItem110 = objFolder11.ParseName("CloudConvert.url")

Set objShortcut110 = objFolderItem110.GetLink

objShortcut110.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\CloudConvert.ico", 0




Set objFolderItem111 = objFolder11.ParseName("Dictionary.com.url")

Set objShortcut111 = objFolderItem111.GetLink

objShortcut111.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Dictionary.ico", 0




Set objFolderItem112 = objFolder11.ParseName("DropBox.url")

Set objShortcut112 = objFolderItem112.GetLink

objShortcut112.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\DropBox.ico", 0




Set objFolderItem113 = objFolder11.ParseName("Google Drive.url")

Set objShortcut113 = objFolderItem113.GetLink

objShortcut113.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Google Drive.ico", 0




Set objFolderItem114 = objFolder11.ParseName("RTINGS.com.url")

Set objShortcut114 = objFolderItem114.GetLink

objShortcut114.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\RTINGS.ico", 0




Set objFolderItem115 = objFolder11.ParseName("PCPartPicker.url")

Set objShortcut115 = objFolderItem115.GetLink

objShortcut115.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\PCPartPicker.ico", 0




Set objFolderItem116 = objFolder11.ParseName("ReviewMeta.url")

Set objShortcut116 = objFolderItem116.GetLink

objShortcut116.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\ReviewMeta.ico", 0




Set objFolderItem117 = objFolder11.ParseName("Thesaurus.com.url")

Set objShortcut117 = objFolderItem117.GetLink

objShortcut117.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Thesaurus.ico", 0




Set objFolderItem118 = objFolder11.ParseName("Urban Dictionary.url")

Set objShortcut118 = objFolderItem118.GetLink

objShortcut118.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Urban Dictionary.ico", 0




Set objFolderItem119 = objFolder11.ParseName("WolframAlpha.url")

Set objShortcut119 = objFolderItem119.GetLink

objShortcut119.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\WolframAlpha.ico", 0




'Diagnostic folder ###############################################################################################




' Set objFolderItem120 = objFolder12.ParseName("Bottleneck Calculator.url")

' Set objShortcut120 = objFolderItem120.GetLink

' objShortcut120.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Hammer.ico", 0




' Set objFolderItem121 = objFolder12.ParseName("DPI Calculator.url")

' Set objShortcut121 = objFolderItem121.GetLink

' objShortcut121.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Hammer.ico", 0




' Set objFolderItem122 = objFolder12.ParseName("Mouse Rate Checker.url")

' Set objShortcut122 = objFolderItem122.GetLink

' objShortcut122.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Hammer.ico", 0




' Set objFolderItem123 = objFolder12.ParseName("UFO Test.url")

' Set objShortcut123 = objFolderItem123.GetLink

' objShortcut123.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Hammer.ico", 0




' Set objFolderItem124 = objFolder12.ParseName("VirusTotal by Google.url")

' Set objShortcut124 = objFolderItem124.GetLink

' objShortcut124.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Hammer.ico", 0




'Far-Left folder ###############################################################################################




' Set objFolderItem130 = objFolder13.ParseName("CounterPunch.url")

' Set objShortcut130 = objFolderItem130.GetLink

' objShortcut130.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem131 = objFolder13.ParseName("It's Going Down.url")

' Set objShortcut131 = objFolderItem131.GetLink

' objShortcut131.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem132 = objFolder13.ParseName("Truthout.url")

' Set objShortcut132 = objFolderItem132.GetLink

' objShortcut132.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' 'Far-Right folder ###############################################################################################




' Set objFolderItem140 = objFolder14.ParseName("Breitbart.url")

' Set objShortcut140 = objFolderItem140.GetLink

' objShortcut140.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem141 = objFolder14.ParseName("Drudge Report.url")

' Set objShortcut141 = objFolderItem141.GetLink

' objShortcut141.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem142 = objFolder14.ParseName("TheBlaze.url")

' Set objShortcut142 = objFolderItem142.GetLink

' objShortcut142.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' 'International folder ###############################################################################################




' Set objFolderItem150 = objFolder15.ParseName("BBC News.url")

' Set objShortcut150 = objFolderItem150.GetLink

' objShortcut150.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem151 = objFolder15.ParseName("The Guardian.url")

' Set objShortcut151 = objFolderItem151.GetLink

' objShortcut151.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem152 = objFolder15.ParseName("Yahoo World News.url")

' Set objShortcut152 = objFolderItem152.GetLink

' objShortcut152.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' 'US Conservative folder ###############################################################################################




' Set objFolderItem160 = objFolder16.ParseName("Fox News.url")

' Set objShortcut160 = objFolderItem160.GetLink

' objShortcut160.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem161 = objFolder16.ParseName("National Review.url")

' Set objShortcut161 = objFolderItem161.GetLink

' objShortcut161.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem162 = objFolder16.ParseName("The Economist.url")

' Set objShortcut162 = objFolderItem162.GetLink

' objShortcut162.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' 'US Democrat folder ###############################################################################################




' Set objFolderItem170 = objFolder17.ParseName("The Atlantic.url")

' Set objShortcut170 = objFolderItem170.GetLink

' objShortcut170.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem171 = objFolder17.ParseName("The New York Times.url")

' Set objShortcut171 = objFolderItem171.GetLink

' objShortcut171.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem172 = objFolder17.ParseName("Washington Post.url")

' Set objShortcut172 = objFolderItem172.GetLink

' objShortcut172.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' 'US Moderate folder ###############################################################################################




' Set objFolderItem180 = objFolder18.ParseName("NPR National Public Radio.url")

' Set objShortcut180 = objFolderItem180.GetLink

' objShortcut180.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem181 = objFolder18.ParseName("PBS NewsHour.url")

' Set objShortcut181 = objFolderItem181.GetLink

' objShortcut181.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' Set objFolderItem182 = objFolder18.ParseName("Reuters Politics.url")

' Set objShortcut182 = objFolderItem182.GetLink

' objShortcut182.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\News.ico", 0




' 'Paperclip Shortcuts ###############################################################################################




Set objFolderItem183 = objFolder19.ParseName("Calculator.lnk")

Set objShortcut183 = objFolderItem183.GetLink

objShortcut183.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Calculator.ico", 0




Set objFolderItem184 = objFolder19.ParseName("Notepad.lnk")

Set objShortcut184 = objFolderItem184.GetLink

objShortcut184.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Notepad.ico", 0




Set objFolderItem185 = objFolder19.ParseName("Paint 3D.lnk")

Set objShortcut185 = objFolderItem185.GetLink

objShortcut185.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Paint.ico", 0




Set objFolderItem186 = objFolder19.ParseName("Sticky Notes.lnk")

Set objShortcut186 = objFolderItem186.GetLink

objShortcut186.SetIconLocation arg & "Droptop\@Resources\Icons\Presets\Color\Sticky.ico", 0




objShortcut2.Save

objShortcut3.Save

objShortcut4.Save

objShortcut5.Save

objShortcut6.Save

objShortcut7.Save

objShortcut8.Save

objShortcut9.Save

objShortcut10.Save

objShortcut11.Save




' objShortcut20.Save

' objShortcut21.Save

' objShortcut22.Save

' objShortcut23.Save



' objShortcut30.Save

' objShortcut31.Save

' objShortcut32.Save

' objShortcut33.Save

' objShortcut34.Save




' objShortcut40.Save

' objShortcut41.Save

' objShortcut42.Save

' objShortcut43.Save




' objShortcut50.Save




' objShortcut60.Save




' objShortcut70.Save

' objShortcut71.Save




' objShortcut80.Save

' objShortcut81.Save

' objShortcut82.Save

' objShortcut83.Save

' objShortcut84.Save

' objShortcut85.Save




' objShortcut90.Save

' objShortcut91.Save




objShortcut100.Save

objShortcut101.Save

objShortcut102.Save

objShortcut103.Save

objShortcut104.Save

objShortcut105.Save




objShortcut110.Save

objShortcut111.Save

objShortcut112.Save

objShortcut113.Save

objShortcut114.Save

objShortcut115.Save

objShortcut116.Save

objShortcut117.Save

objShortcut118.Save

objShortcut119.Save




' objShortcut120.Save

' objShortcut121.Save

' objShortcut122.Save

' objShortcut123.Save

' objShortcut124.Save




' objShortcut130.Save

' objShortcut131.Save

' objShortcut132.Save




' objShortcut140.Save

' objShortcut141.Save

' objShortcut142.Save




' objShortcut150.Save

' objShortcut151.Save

' objShortcut152.Save




' objShortcut160.Save

' objShortcut161.Save

' objShortcut162.Save




' objShortcut170.Save

' objShortcut171.Save

' objShortcut172.Save




' objShortcut180.Save

' objShortcut181.Save

' objShortcut182.Save




objShortcut183.Save

objShortcut184.Save

objShortcut185.Save

objShortcut186.Save