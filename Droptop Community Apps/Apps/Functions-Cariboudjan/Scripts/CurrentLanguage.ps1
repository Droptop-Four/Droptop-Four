function Get-CurrentInputLanguageThread {
    $ScriptBlock = {
        Add-Type -AssemblyName System.Windows.Forms
        [System.Windows.Forms.InputLanguage]::CurrentInputLanguage
    }
    $Job = Start-Job -ScriptBlock $ScriptBlock
    Wait-Job -Job $Job
    $CurrentLanguage = Receive-Job -Job $Job
    Remove-Job -Job $Job
    Return $CurrentLanguage.Culture.Name
}

# $Global:a = 1

# function Update
# {
    # $Global:a = $Global:a + 1
    # return $Global:a
# }