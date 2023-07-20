function ReadIni($filePath)
{
    $ini = @{}
    $content=Get-Content -Path $filePath
    switch -regex ($content)
    {
        “^\[(.+)\]” # Section
        {
            $section = $matches[1]
            $ini[$section] = @{}
            $CommentCount = 0
        }
        “^(;.*)$” # Comment
        {
            $value = $matches[1]
            $CommentCount = $CommentCount + 1
            $name = “Comment” + $CommentCount
            $ini[$section][$name] = $value
        }
        “(.+?)\s*=(.*)” # Key
        {
            $name,$value = $matches[1..2]
            $ini[$section][$name] = $value
        }
    }
    return $ini
}
# # $ini['<sectionName>']['<keyName>']

# Function built to export strings to skin
function Export-Vars()
{
    Start-Sleep -Milliseconds 100
    $Resource = $RmAPI.VariableStr('@')
    $ini=ReadIni($Resource + '\GlobalVar\UserSettings.inc')
    $LanguageNum=$ini['Variables']['LanguageNum']
    $ini=ReadIni($Resource + '\GlobalVar\Control.inc')
    $Language=$ini['Variables']['Language'+$LanguageNum]
    $ini=ReadIni($Resource + '\GlobalVar\Languages\'+$Language+'.inc')
    $FetchCount = $RmAPI.OptionInt('FetchStringCount')
    $i=1
    for (;$i -le $FetchCount;$i++)
    {
        $CurrentString = $RmAPI.OptionStr('Fetch'+$i)
        $OptionArray = $CUrrentString.Split('|')
        # $RmAPI.Log($OptionArray[0])
        $RmAPI.Bang('!SetOption '+$OptionArray[1]+' Text """'+$ini['Variables'][$OptionArray[0]]+'"""')
        $RmAPI.Bang('!UpdateMeter "'+$OptionArray[1]+'"')
    }

    $RmAPI.Bang('!Redraw')
}