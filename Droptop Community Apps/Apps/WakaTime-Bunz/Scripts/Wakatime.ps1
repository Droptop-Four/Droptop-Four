
function Reload {
    $ApiKey = $RmAPI.OptionStr('ApiKey')
    $VarsLocation = $RmAPI.OptionStr('VarsLocation')
    $ProfileImagePath = $RmAPI.OptionStr('ProfileImage')
    $App = $RmAPI.OptionStr('App')
    $Value = $RmAPI.OptionStr('Value')

    $user_endpoint = "https://wakatime.com/api/v1/users/current?api_key=$ApiKey"
    $user_response = Invoke-RestMethod -Uri $user_endpoint
    $user_data = $user_response.data

    $photo = $($user_data.photo)
    $username = $($user_data.username)
    $profile_url = $($user_data.profile_url)
    $timeout = $($user_data.timeout)

    $RmAPI.Bang('!SetVariable Username "' + $username + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Username "' + $username + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Profile_Url "' + $profile_url + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Profile_Url "' + $profile_url + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Profile_Photo "' + $photo + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Profile_Photo "' + $photo + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Timeout "' + $timeout + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Timeout "' + $timeout + '" "' + $VarsLocation + '"')
    
    $wc = New-Object System.Net.WebClient
    $wc.DownloadFile($photo, "$ProfileImagePath\1Icon.png")

    # TODAY
    $today_endpoint = "https://wakatime.com/api/v1/users/current/summaries?range=Today&api_key=$ApiKey"
    $today_response = Invoke-RestMethod -Uri $today_endpoint
    $today_data = $today_response
    Write-Debug $today_data

    $today_total_time = $($today_data.cumulative_total.text)

    $RmAPI.Bang('!SetVariable Top_Bar_Content_1 "' + $today_total_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Top_Bar_Content_1 "' + $today_total_time + '" "' + $VarsLocation + '"')

    $today_language_1 = $($today_data.data[0].languages[0].name)
    if ($today_language_1 -eq $null) {
        $today_language_1 = "No data"
        $today_language_1_time = "No data"
    }
    else {
        $today_language_1_time = $($today_data.data[0].languages[0].text)
    }
    $today_language_2 = $($today_data.data[0].languages[1].name)
    if ($today_language_2 -eq $null) {
        $today_language_2 = "No data"
        $today_language_2_time = "No data"
    }
    else {
        $today_language_2_time = $($today_data.data[0].languages[1].text)
    }
    $today_language_3 = $($today_data.data[0].languages[2].name)
    if ($today_language_3 -eq $null) {
        $today_language_3 = "No data"
        $today_language_3_time = "No data"
    }
    else {
        $today_language_3_time = $($today_data.data[0].languages[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Today_Language_1 "' + $today_language_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_1 "' + $today_language_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Language_1_Time "' + $today_language_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_1_Time "' + $today_language_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Today_Language_2 "' + $today_language_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_2 "' + $today_language_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Language_2_Time "' + $today_language_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_2_Time "' + $today_language_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Today_Language_3 "' + $today_language_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_3 "' + $today_language_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Language_3_Time "' + $today_language_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_3_Time "' + $today_language_3_time + '" "' + $VarsLocation + '"')

    $today_project_1 = $($today_data.data[0].projects[0].name)
    if ($today_project_1 -eq $null) {
        $today_project_1 = "No data"
        $today_project_1_time = "No data"
    }
    else {
        $today_project_1_time = $($today_data.data[0].projects[0].text)
    }
    $today_project_2 = $($today_data.data[0].projects[1].name)
    if ($today_project_2 -eq $null) {
        $today_project_2 = "No data"
        $today_project_2_time = "No data"
    }
    else {
        $today_project_2_time = $($today_data.data[0].projects[1].text)
    }
    $today_project_3 = $($today_data.data[0].projects[2].name)
    if ($today_project_3 -eq $null) {
        $today_project_3 = "No data"
        $today_project_3_time = "No data"
    }
    else {
        $today_project_3_time = $($today_data.data[0].projects[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Today_Project_1 "' + $today_project_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_1 "' + $today_project_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Project_1_Time "' + $today_project_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_1_Time "' + $today_project_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Today_Project_2 "' + $today_project_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_2 "' + $today_project_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Project_2_Time "' + $today_project_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_2_Time "' + $today_project_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Today_Project_3 "' + $today_project_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_3 "' + $today_project_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Project_3_Time "' + $today_project_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_3_Time "' + $today_project_3_time + '" "' + $VarsLocation + '"')

    # LAST 7 DAYS
    $last_7_endpoint = "https://wakatime.com/api/v1/users/current/stats/last_7_days?api_key=$ApiKey"
    $last_7_response = Invoke-RestMethod -Uri $last_7_endpoint
    $last_7_data = $last_7_response
    Write-Debug $last_7_data

    $last_7_total_time = $($last_7_data.data.human_readable_total_including_other_language)

    $RmAPI.Bang('!SetVariable Top_Bar_Content_2 "' + $last_7_total_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Top_Bar_Content_2 "' + $last_7_total_time + '" "' + $VarsLocation + '"')

    $last_7_language_1 = $($last_7_data.data[0].languages[0].name)
    if ($last_7_language_1 -eq $null) {
        $last_7_language_1 = "No data"
        $last_7_language_1_time = "No data"
    }
    else {
        $last_7_language_1_time = $($last_7_data.data[0].languages[0].text)
    }
    $last_7_language_2 = $($last_7_data.data[0].languages[1].name)
    if ($last_7_language_2 -eq $null) {
        $last_7_language_2 = "No data"
        $last_7_language_2_time = "No data"
    }
    else {
        $last_7_language_2_time = $($last_7_data.data[0].languages[1].text)
    }
    $last_7_language_3 = $($last_7_data.data[0].languages[2].name)
    if ($last_7_language_3 -eq $null) {
        $last_7_language_3 = "No data"
        $last_7_language_3_time = "No data"
    }
    else {
        $last_7_language_3_time = $($last_7_data.data[0].languages[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Last_7_Language_1 "' + $last_7_language_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_1 "' + $last_7_language_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Language_1_Time "' + $last_7_language_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_1_Time "' + $last_7_language_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_7_Language_2 "' + $last_7_language_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_2 "' + $last_7_language_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Language_2_Time "' + $last_7_language_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_2_Time "' + $last_7_language_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_7_Language_3 "' + $last_7_language_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_3 "' + $last_7_language_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Language_3_Time "' + $last_7_language_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_3_Time "' + $last_7_language_3_time + '" "' + $VarsLocation + '"')

    $last_7_project_1 = $($last_7_data.data[0].projects[0].name)
    if ($last_7_project_1 -eq $null) {
        $last_7_project_1 = "No data"
        $last_7_project_1_time = "No data"
    }
    else {
        $last_7_project_1_time = $($last_7_data.data[0].projects[0].text)
    }
    $last_7_project_2 = $($last_7_data.data[0].projects[1].name)
    if ($last_7_project_2 -eq $null) {
        $last_7_project_2 = "No data"
        $last_7_project_2_time = "No data"
    }
    else {
        $last_7_project_2_time = $($last_7_data.data[0].projects[1].text)
    }
    $last_7_project_3 = $($last_7_data.data[0].projects[2].name)
    if ($last_7_project_3 -eq $null) {
        $last_7_project_3 = "No data"
        $last_7_project_3_time = "No data"
    }
    else {
        $last_7_project_3_time = $($last_7_data.data[0].projects[2].text)
    }
        
    $RmAPI.Bang('!SetVariable Last_7_Project_1 "' + $last_7_project_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_1 "' + $last_7_project_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Project_1_Time "' + $last_7_project_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_1_Time "' + $last_7_project_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_7_Project_2 "' + $last_7_project_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_2 "' + $last_7_project_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Project_2_Time "' + $last_7_project_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_2_Time "' + $last_7_project_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_7_Project_3 "' + $last_7_project_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_3 "' + $last_7_project_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Project_3_Time "' + $last_7_project_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_3_Time "' + $last_7_project_3_time + '" "' + $VarsLocation + '"')

    # LAST 30 DAYS
    $last_30_endpoint = "https://wakatime.com/api/v1/users/current/stats/last_30_days?api_key=$ApiKey"
    $last_30_response = Invoke-RestMethod -Uri $last_30_endpoint
    $last_30_data = $last_30_response
    Write-Debug $last_30_data

    $last_30_total_time = $($last_30_data.data.human_readable_total_including_other_language)

    $RmAPI.Bang('!SetVariable Top_Bar_Content_3 "' + $last_30_total_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Top_Bar_Content_3 "' + $last_30_total_time + '" "' + $VarsLocation + '"')
    
    $last_30_language_1 = $($last_30_data.data[0].languages[0].name)
    if ($last_30_language_1 -eq $null) {
        $last_30_language_1 = "No data"
        $last_30_language_1_time = "No data"
    }
    else {
        $last_30_language_1_time = $($last_30_data.data[0].languages[0].text)
    }
    $last_30_language_2 = $($last_30_data.data[0].languages[1].name)
    if ($last_30_language_2 -eq $null) {
        $last_30_language_2 = "No data"
        $last_30_language_2_time = "No data"
    }
    else {
        $last_30_language_2_time = $($last_30_data.data[0].languages[1].text)
    }
    $last_30_language_3 = $($last_30_data.data[0].languages[2].name)
    if ($last_30_language_3 -eq $null) {
        $last_30_language_3 = "No data"
        $last_30_language_3_time = "No data"
    }
    else {
        $last_30_language_3_time = $($last_30_data.data[0].languages[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Last_30_Language_1 "' + $last_30_language_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_1 "' + $last_30_language_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Language_1_Time "' + $last_30_language_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_1_Time "' + $last_30_language_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_30_Language_2 "' + $last_30_language_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_2 "' + $last_30_language_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Language_2_Time "' + $last_30_language_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_2_Time "' + $last_30_language_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_30_Language_3 "' + $last_30_language_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_3 "' + $last_30_language_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Language_3_Time "' + $last_30_language_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_3_Time "' + $last_30_language_3_time + '" "' + $VarsLocation + '"')

    $last_30_project_1 = $($last_30_data.data[0].projects[0].name)
    if ($last_30_project_1 -eq $null) {
        $last_30_project_1 = "No data"
        $last_30_project_1_time = "No data"
    }
    else {
        $last_30_project_1_time = $($last_30_data.data[0].projects[0].text)
    }
    $last_30_project_2 = $($last_30_data.data[0].projects[1].name)
    if ($last_30_project_2 -eq $null) {
        $last_30_project_2 = "No data"
        $last_30_project_2_time = "No data"
    }
    else {
        $last_30_project_2_time = $($last_30_data.data[0].projects[1].text)
    }
    $last_30_project_3 = $($last_30_data.data[0].projects[2].name)
    if ($last_30_project_3 -eq $null) {
        $last_30_project_3 = "No data"
        $last_30_project_3_time = "No data"
    }
    else {
        $last_30_project_3_time = $($last_30_data.data[0].projects[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Last_30_Project_1 "' + $last_30_project_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_1 "' + $last_30_project_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Project_1_Time "' + $last_30_project_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_1_Time "' + $last_30_project_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_30_Project_2 "' + $last_30_project_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_2 "' + $last_30_project_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Project_2_Time "' + $last_30_project_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_2_Time "' + $last_30_project_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_30_Project_3 "' + $last_30_project_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_3 "' + $last_30_project_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Project_3_Time "' + $last_30_project_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_3_Time "' + $last_30_project_3_time + '" "' + $VarsLocation + '"')

    # ALL TIME
    $all_time_endpoint = "https://wakatime.com/api/v1/users/current/stats/all_time?api_key=$ApiKey"
    $all_time_response = Invoke-RestMethod -Uri $all_time_endpoint
    $all_time_data = $all_time_response
    Write-Debug $all_time_data

    $all_time_total_time = $($all_time_data.data.human_readable_total_including_other_language)

    $RmAPI.Bang('!SetVariable Top_Bar_Content_4 "' + $all_time_total_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Top_Bar_Content_4 "' + $all_time_total_time + '" "' + $VarsLocation + '"')

    $all_time_language_1 = $($all_time_data.data[0].languages[0].name)
    if ($all_time_language_1 -eq $null) {
        $all_time_language_1 = "No data"
        $all_time_language_1_time = "No data"
    }
    else {
        $all_time_language_1_time = $($all_time_data.data[0].languages[0].text)
    }
    $all_time_language_2 = $($all_time_data.data[0].languages[1].name)
    if ($all_time_language_2 -eq $null) {
        $all_time_language_2 = "No data"
        $all_time_language_2_time = "No data"
    }
    else {
        $all_time_language_2_time = $($all_time_data.data[0].languages[1].text)
    }
    $all_time_language_3 = $($all_time_data.data[0].languages[2].name)
    if ($all_time_language_3 -eq $null) {
        $all_time_language_3 = "No data"
        $all_time_language_3_time = "No data"
    }
    else {
        $all_time_language_3_time = $($all_time_data.data[0].languages[2].text)
    }
    
    $RmAPI.Bang('!SetVariable All_Time_Language_1 "' + $all_time_language_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_1 "' + $all_time_language_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Language_1_Time "' + $all_time_language_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_1_Time "' + $all_time_language_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable All_Time_Language_2 "' + $all_time_language_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_2 "' + $all_time_language_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Language_2_Time "' + $all_time_language_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_2_Time "' + $all_time_language_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable All_Time_Language_3 "' + $all_time_language_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_3 "' + $all_time_language_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Language_3_Time "' + $all_time_language_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_3_Time "' + $all_time_language_3_time + '" "' + $VarsLocation + '"')

    $all_time_project_1 = $($all_time_data.data[0].projects[0].name)
    if ($all_time_project_1 -eq $null) {
        $all_time_project_1 = "No data"
        $all_time_project_1_time = "No data"
    }
    else {
        $all_time_project_1_time = $($all_time_data.data[0].projects[0].text)
    }
    $all_time_project_2 = $($all_time_data.data[0].projects[1].name)
    if ($all_time_project_2 -eq $null) {
        $all_time_project_2 = "No data"
        $all_time_project_2_time = "No data"
    }
    else {
        $all_time_project_2_time = $($all_time_data.data[0].projects[1].text)
    }
    $all_time_project_3 = $($all_time_data.data[0].projects[2].name)
    if ($all_time_project_3 -eq $null) {
        $all_time_project_3 = "No data"
        $all_time_project_3_time = "No data"
    }
    else {
        $all_time_project_3_time = $($all_time_data.data[0].projects[2].text)
    }
    
    $RmAPI.Bang('!SetVariable All_Time_Project_1 "' + $all_time_project_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_1 "' + $all_time_project_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Project_1_Time "' + $all_time_project_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_1_Time "' + $all_time_project_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable All_Time_Project_2 "' + $all_time_project_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_2 "' + $all_time_project_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Project_2_Time "' + $all_time_project_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_2_Time "' + $all_time_project_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable All_Time_Project_3 "' + $all_time_project_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_3 "' + $all_time_project_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Project_3_Time "' + $all_time_project_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_3_Time "' + $all_time_project_3_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!Log "' + $Value + '"')
    $RmAPI.Bang('!SetOption CustomApp' + $App + ' Text "   ' + $Value + '   " "Droptop\DropdownBar"')
    $RmAPI.Bang('!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"')
    $RmAPI.Bang('!Redraw "Droptop\DropdownBar"')
    $RmAPI.Bang('!UpdateMeterGroup SysTray "Droptop\DropdownBar"')
    $RmAPI.Bang('!UpdateMeterGroup HL "Droptop\DropdownBar"')
    $RmAPI.Bang('!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"')
    $RmAPI.Bang('!Redraw "Droptop\DropdownBar"')
}


function Update_Data {
    $ApiKey = $RmAPI.OptionStr('ApiKey')
    $VarsLocation = $RmAPI.OptionStr('VarsLocation')
    $App = $RmAPI.OptionStr('App')
    $Value = $RmAPI.OptionStr('Value')

    # TODAY
    $today_endpoint = "https://wakatime.com/api/v1/users/current/summaries?range=Today&api_key=$ApiKey"
    $today_response = Invoke-RestMethod -Uri $today_endpoint
    $today_data = $today_response
    Write-Debug $today_data

    $today_total_time = $($today_data.cumulative_total.text)

    $RmAPI.Bang('!SetVariable Top_Bar_Content_1 "' + $today_total_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Top_Bar_Content_1 "' + $today_total_time + '" "' + $VarsLocation + '"')

    $today_language_1 = $($today_data.data[0].languages[0].name)
    if ($today_language_1 -eq $null) {
        $today_language_1 = "No data"
        $today_language_1_time = "No data"
    }
    else {
        $today_language_1_time = $($today_data.data[0].languages[0].text)
    }
    $today_language_2 = $($today_data.data[0].languages[1].name)
    if ($today_language_2 -eq $null) {
        $today_language_2 = "No data"
        $today_language_2_time = "No data"
    }
    else {
        $today_language_2_time = $($today_data.data[0].languages[1].text)
    }
    $today_language_3 = $($today_data.data[0].languages[2].name)
    if ($today_language_3 -eq $null) {
        $today_language_3 = "No data"
        $today_language_3_time = "No data"
    }
    else {
        $today_language_3_time = $($today_data.data[0].languages[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Today_Language_1 "' + $today_language_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_1 "' + $today_language_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Language_1_Time "' + $today_language_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_1_Time "' + $today_language_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Today_Language_2 "' + $today_language_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_2 "' + $today_language_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Language_2_Time "' + $today_language_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_2_Time "' + $today_language_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Today_Language_3 "' + $today_language_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_3 "' + $today_language_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Language_3_Time "' + $today_language_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Language_3_Time "' + $today_language_3_time + '" "' + $VarsLocation + '"')

    $today_project_1 = $($today_data.data[0].projects[0].name)
    if ($today_project_1 -eq $null) {
        $today_project_1 = "No data"
        $today_project_1_time = "No data"
    }
    else {
        $today_project_1_time = $($today_data.data[0].projects[0].text)
    }
    $today_project_2 = $($today_data.data[0].projects[1].name)
    if ($today_project_2 -eq $null) {
        $today_project_2 = "No data"
        $today_project_2_time = "No data"
    }
    else {
        $today_project_2_time = $($today_data.data[0].projects[1].text)
    }
    $today_project_3 = $($today_data.data[0].projects[2].name)
    if ($today_project_3 -eq $null) {
        $today_project_3 = "No data"
        $today_project_3_time = "No data"
    }
    else {
        $today_project_3_time = $($today_data.data[0].projects[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Today_Project_1 "' + $today_project_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_1 "' + $today_project_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Project_1_Time "' + $today_project_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_1_Time "' + $today_project_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Today_Project_2 "' + $today_project_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_2 "' + $today_project_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Project_2_Time "' + $today_project_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_2_Time "' + $today_project_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Today_Project_3 "' + $today_project_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_3 "' + $today_project_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Today_Project_3_Time "' + $today_project_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Today_Project_3_Time "' + $today_project_3_time + '" "' + $VarsLocation + '"')

    # LAST 7 DAYS
    $last_7_endpoint = "https://wakatime.com/api/v1/users/current/stats/last_7_days?api_key=$ApiKey"
    $last_7_response = Invoke-RestMethod -Uri $last_7_endpoint
    $last_7_data = $last_7_response
    Write-Debug $last_7_data

    $last_7_total_time = $($last_7_data.data.human_readable_total_including_other_language)

    $RmAPI.Bang('!SetVariable Top_Bar_Content_2 "' + $last_7_total_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Top_Bar_Content_2 "' + $last_7_total_time + '" "' + $VarsLocation + '"')

    $last_7_language_1 = $($last_7_data.data[0].languages[0].name)
    if ($last_7_language_1 -eq $null) {
        $last_7_language_1 = "No data"
        $last_7_language_1_time = "No data"
    }
    else {
        $last_7_language_1_time = $($last_7_data.data[0].languages[0].text)
    }
    $last_7_language_2 = $($last_7_data.data[0].languages[1].name)
    if ($last_7_language_2 -eq $null) {
        $last_7_language_2 = "No data"
        $last_7_language_2_time = "No data"
    }
    else {
        $last_7_language_2_time = $($last_7_data.data[0].languages[1].text)
    }
    $last_7_language_3 = $($last_7_data.data[0].languages[2].name)
    if ($last_7_language_3 -eq $null) {
        $last_7_language_3 = "No data"
        $last_7_language_3_time = "No data"
    }
    else {
        $last_7_language_3_time = $($last_7_data.data[0].languages[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Last_7_Language_1 "' + $last_7_language_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_1 "' + $last_7_language_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Language_1_Time "' + $last_7_language_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_1_Time "' + $last_7_language_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_7_Language_2 "' + $last_7_language_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_2 "' + $last_7_language_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Language_2_Time "' + $last_7_language_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_2_Time "' + $last_7_language_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_7_Language_3 "' + $last_7_language_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_3 "' + $last_7_language_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Language_3_Time "' + $last_7_language_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Language_3_Time "' + $last_7_language_3_time + '" "' + $VarsLocation + '"')

    $last_7_project_1 = $($last_7_data.data[0].projects[0].name)
    if ($last_7_project_1 -eq $null) {
        $last_7_project_1 = "No data"
        $last_7_project_1_time = "No data"
    }
    else {
        $last_7_project_1_time = $($last_7_data.data[0].projects[0].text)
    }
    $last_7_project_2 = $($last_7_data.data[0].projects[1].name)
    if ($last_7_project_2 -eq $null) {
        $last_7_project_2 = "No data"
        $last_7_project_2_time = "No data"
    }
    else {
        $last_7_project_2_time = $($last_7_data.data[0].projects[1].text)
    }
    $last_7_project_3 = $($last_7_data.data[0].projects[2].name)
    if ($last_7_project_3 -eq $null) {
        $last_7_project_3 = "No data"
        $last_7_project_3_time = "No data"
    }
    else {
        $last_7_project_3_time = $($last_7_data.data[0].projects[2].text)
    }
        
    $RmAPI.Bang('!SetVariable Last_7_Project_1 "' + $last_7_project_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_1 "' + $last_7_project_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Project_1_Time "' + $last_7_project_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_1_Time "' + $last_7_project_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_7_Project_2 "' + $last_7_project_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_2 "' + $last_7_project_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Project_2_Time "' + $last_7_project_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_2_Time "' + $last_7_project_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_7_Project_3 "' + $last_7_project_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_3 "' + $last_7_project_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_7_Project_3_Time "' + $last_7_project_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_7_Project_3_Time "' + $last_7_project_3_time + '" "' + $VarsLocation + '"')

    # LAST 30 DAYS
    $last_30_endpoint = "https://wakatime.com/api/v1/users/current/stats/last_30_days?api_key=$ApiKey"
    $last_30_response = Invoke-RestMethod -Uri $last_30_endpoint
    $last_30_data = $last_30_response
    Write-Debug $last_30_data

    $last_30_total_time = $($last_30_data.data.human_readable_total_including_other_language)

    $RmAPI.Bang('!SetVariable Top_Bar_Content_3 "' + $last_30_total_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Top_Bar_Content_3 "' + $last_30_total_time + '" "' + $VarsLocation + '"')
    
    $last_30_language_1 = $($last_30_data.data[0].languages[0].name)
    if ($last_30_language_1 -eq $null) {
        $last_30_language_1 = "No data"
        $last_30_language_1_time = "No data"
    }
    else {
        $last_30_language_1_time = $($last_30_data.data[0].languages[0].text)
    }
    $last_30_language_2 = $($last_30_data.data[0].languages[1].name)
    if ($last_30_language_2 -eq $null) {
        $last_30_language_2 = "No data"
        $last_30_language_2_time = "No data"
    }
    else {
        $last_30_language_2_time = $($last_30_data.data[0].languages[1].text)
    }
    $last_30_language_3 = $($last_30_data.data[0].languages[2].name)
    if ($last_30_language_3 -eq $null) {
        $last_30_language_3 = "No data"
        $last_30_language_3_time = "No data"
    }
    else {
        $last_30_language_3_time = $($last_30_data.data[0].languages[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Last_30_Language_1 "' + $last_30_language_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_1 "' + $last_30_language_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Language_1_Time "' + $last_30_language_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_1_Time "' + $last_30_language_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_30_Language_2 "' + $last_30_language_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_2 "' + $last_30_language_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Language_2_Time "' + $last_30_language_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_2_Time "' + $last_30_language_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_30_Language_3 "' + $last_30_language_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_3 "' + $last_30_language_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Language_3_Time "' + $last_30_language_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Language_3_Time "' + $last_30_language_3_time + '" "' + $VarsLocation + '"')

    $last_30_project_1 = $($last_30_data.data[0].projects[0].name)
    if ($last_30_project_1 -eq $null) {
        $last_30_project_1 = "No data"
        $last_30_project_1_time = "No data"
    }
    else {
        $last_30_project_1_time = $($last_30_data.data[0].projects[0].text)
    }
    $last_30_project_2 = $($last_30_data.data[0].projects[1].name)
    if ($last_30_project_2 -eq $null) {
        $last_30_project_2 = "No data"
        $last_30_project_2_time = "No data"
    }
    else {
        $last_30_project_2_time = $($last_30_data.data[0].projects[1].text)
    }
    $last_30_project_3 = $($last_30_data.data[0].projects[2].name)
    if ($last_30_project_3 -eq $null) {
        $last_30_project_3 = "No data"
        $last_30_project_3_time = "No data"
    }
    else {
        $last_30_project_3_time = $($last_30_data.data[0].projects[2].text)
    }
    
    $RmAPI.Bang('!SetVariable Last_30_Project_1 "' + $last_30_project_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_1 "' + $last_30_project_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Project_1_Time "' + $last_30_project_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_1_Time "' + $last_30_project_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_30_Project_2 "' + $last_30_project_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_2 "' + $last_30_project_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Project_2_Time "' + $last_30_project_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_2_Time "' + $last_30_project_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable Last_30_Project_3 "' + $last_30_project_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_3 "' + $last_30_project_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable Last_30_Project_3_Time "' + $last_30_project_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Last_30_Project_3_Time "' + $last_30_project_3_time + '" "' + $VarsLocation + '"')

    # ALL TIME
    $all_time_endpoint = "https://wakatime.com/api/v1/users/current/stats/all_time?api_key=$ApiKey"
    $all_time_response = Invoke-RestMethod -Uri $all_time_endpoint
    $all_time_data = $all_time_response
    Write-Debug $all_time_data

    $all_time_total_time = $($all_time_data.data.human_readable_total_including_other_language)

    $RmAPI.Bang('!SetVariable Top_Bar_Content_4 "' + $all_time_total_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Top_Bar_Content_4 "' + $all_time_total_time + '" "' + $VarsLocation + '"')

    $all_time_language_1 = $($all_time_data.data[0].languages[0].name)
    if ($all_time_language_1 -eq $null) {
        $all_time_language_1 = "No data"
        $all_time_language_1_time = "No data"
    }
    else {
        $all_time_language_1_time = $($all_time_data.data[0].languages[0].text)
    }
    $all_time_language_2 = $($all_time_data.data[0].languages[1].name)
    if ($all_time_language_2 -eq $null) {
        $all_time_language_2 = "No data"
        $all_time_language_2_time = "No data"
    }
    else {
        $all_time_language_2_time = $($all_time_data.data[0].languages[1].text)
    }
    $all_time_language_3 = $($all_time_data.data[0].languages[2].name)
    if ($all_time_language_3 -eq $null) {
        $all_time_language_3 = "No data"
        $all_time_language_3_time = "No data"
    }
    else {
        $all_time_language_3_time = $($all_time_data.data[0].languages[2].text)
    }
    
    $RmAPI.Bang('!SetVariable All_Time_Language_1 "' + $all_time_language_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_1 "' + $all_time_language_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Language_1_Time "' + $all_time_language_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_1_Time "' + $all_time_language_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable All_Time_Language_2 "' + $all_time_language_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_2 "' + $all_time_language_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Language_2_Time "' + $all_time_language_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_2_Time "' + $all_time_language_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable All_Time_Language_3 "' + $all_time_language_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_3 "' + $all_time_language_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Language_3_Time "' + $all_time_language_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Language_3_Time "' + $all_time_language_3_time + '" "' + $VarsLocation + '"')

    $all_time_project_1 = $($all_time_data.data[0].projects[0].name)
    if ($all_time_project_1 -eq $null) {
        $all_time_project_1 = "No data"
        $all_time_project_1_time = "No data"
    }
    else {
        $all_time_project_1_time = $($all_time_data.data[0].projects[0].text)
    }
    $all_time_project_2 = $($all_time_data.data[0].projects[1].name)
    if ($all_time_project_2 -eq $null) {
        $all_time_project_2 = "No data"
        $all_time_project_2_time = "No data"
    }
    else {
        $all_time_project_2_time = $($all_time_data.data[0].projects[1].text)
    }
    $all_time_project_3 = $($all_time_data.data[0].projects[2].name)
    if ($all_time_project_3 -eq $null) {
        $all_time_project_3 = "No data"
        $all_time_project_3_time = "No data"
    }
    else {
        $all_time_project_3_time = $($all_time_data.data[0].projects[2].text)
    }
    
    $RmAPI.Bang('!SetVariable All_Time_Project_1 "' + $all_time_project_1 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_1 "' + $all_time_project_1 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Project_1_Time "' + $all_time_project_1_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_1_Time "' + $all_time_project_1_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable All_Time_Project_2 "' + $all_time_project_2 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_2 "' + $all_time_project_2 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Project_2_Time "' + $all_time_project_2_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_2_Time "' + $all_time_project_2_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!SetVariable All_Time_Project_3 "' + $all_time_project_3 + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_3 "' + $all_time_project_3 + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable All_Time_Project_3_Time "' + $all_time_project_3_time + '"')
    $RmAPI.Bang('!WriteKeyValue Variables All_Time_Project_3_Time "' + $all_time_project_3_time + '" "' + $VarsLocation + '"')

    $RmAPI.Bang('!Log "' + $Value + '"')
    $RmAPI.Bang('!SetOption CustomApp' + $App + ' Text "   ' + $Value + '   " "Droptop\DropdownBar"')
    $RmAPI.Bang('!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"')
    $RmAPI.Bang('!Redraw "Droptop\DropdownBar"')
    $RmAPI.Bang('!UpdateMeterGroup SysTray "Droptop\DropdownBar"')
    $RmAPI.Bang('!UpdateMeterGroup HL "Droptop\DropdownBar"')
    $RmAPI.Bang('!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"')
    $RmAPI.Bang('!Redraw "Droptop\DropdownBar"')
}
