function Help {

    Limit-PowerShellVersion

    $skinSig = "[-Skin] <full_name>"
    $forceSig = "[-Force]"
    $packageWiki = "https://docs.rainmeter.skin/cli/package"
    $initWiki = "https://docs.rainmeter.skin/cli/init"

    $commands = @(
        [pscustomobject]@{
            Name        = "update"
            Signature   = "$forceSig"
            Description = "updates the skins list"
        }, 
        [pscustomobject]@{
            Name        = "install"
            Signature   = "$skinSig $forceSig"
            Description = "installs the specified skin"
        }, 
        [pscustomobject]@{
            Name        = "list"
            Signature   = ""
            Description = "lists installed skins"
        }, 
        [pscustomobject]@{
            Name        = "search"
            Signature   = "[-Query] <keyword> [-Property <property>]"
            Description = "searches the skin list"
        }, 
        [pscustomobject]@{
            Name        = "upgrade"
            Signature   = "$skinSig $forceSig"
            Description = "upgrades the specified skin"
        }, 
        [pscustomobject]@{
            Name        = "uninstall"
            Signature   = "$skinSig $forceSig"
            Description = "uninstalls the specified skin"
        }, 
        [pscustomobject]@{
            Name        = "restore"
            Signature   = "$skinSig $forceSig"
            Description = "restores an upgraded or uninstalled skin from $($MetersOnDemand.Removed)"
        },
        [pscustomobject]@{
            Name        = "version"
            Signature   = ""
            Description = "prints the MonD version"
        },
        [pscustomobject]@{
            Name        = "help"
            Signature   = "[-Command] [dev]"
            Description = "show this help. use 'mond help dev' for a list of dev commands"
        }
    )

    $devCommands = @(
        [pscustomobject]@{
            Name        = "package"
            Signature   = "[[-Skin] <rootconfig>] [...]"
            Description = "creates a .rmskin package of the specified skin"
            Wiki        = $packageWiki
        }, 
        [pscustomobject]@{
            Name        = "init"
            Signature   = "[-Skin] <skin_name>"
            Description = "creates a new skin folder from a template"
            Wiki        = $initWiki
        },
        [pscustomobject]@{
            Name        = "open"
            Signature   = "$($skinSig)"
            Description = "Opens the specified skins #ROOTCONFIG# in your #CONFIGEDITOR#"
        },
        [pscustomobject]@{
            Name        = "lock"
            Signature   = "$($skinSig)"
            Description = "Generates a .lock.inc file for the specified skin"
        },
        [pscustomobject]@{
            Name        = "config"
            Signature   = ""
            Description = "Prints debug information of the main $($MetersOnDemand.FileName) script"
        },
        [pscustomobject]@{
            Name        = ""
            Signature   = "<property>"
            Description = "Prints the specified property if it's present in MetersOnDemand.ps1 `$MetersOnDemand or the mond cache.json"
        },
        [pscustomobject]@{
            Name        = "dir"
            Signature   = ""
            Description = "Opens #SKINSPATH#\$($MetersOnDemand.Directory)"
        },
        [pscustomobject]@{
            Name        = "refresh"
            Signature   = ""
            Description = "Reinstalls Meters on Demand"
        }
    )

    if ($Parameter -eq "dev") {
        foreach ($command in $devCommands) {
            Write-Host "$($command.name) " -ForegroundColor White -NoNewline
            Write-Host "$($command.signature) " -ForegroundColor Cyan
            Write-Host " $($command.Description)" -ForegroundColor Gray -NoNewline
            if ($command.Wiki) {
                Write-Host "`n $($command.Wiki)" -ForegroundColor Blue -NoNewline
            }
            Write-Host "`n"
        }
        return
    }

    if ($Parameter) {
        if ($Parameter -eq "api") { 
            Start-Process "$($MetersOnDemand.Api.Wiki)"
            return
        }
        $command = $commands | Where-Object { $_.Name -eq $Parameter }
        if (!$command) { $command = $devCommands | Where-Object { $_.Name -eq $Parameter } }
        if (!$command) { 
            throw "$($Parameter) is not a command. Use 'mond help' to see all available commands."
        }
        if ($Parameter -eq "package") { 
            Start-Process "$($packageWiki)"
            return
        }
        Write-Host "$($command.Name) " -ForegroundColor White -NoNewline
        Write-Host "$($command.Signature) " -ForegroundColor Cyan
        Write-Host " $($command.Description)" -ForegroundColor Gray
        return
    }

    foreach ($command in $commands) {
        Write-Host "$($command.name) " -ForegroundColor White -NoNewline
        Write-Host "$($command.signature) " -ForegroundColor Cyan
        Write-Host " $($command.Description)" -ForegroundColor Gray -NoNewline
        if ($command.Wiki) {
            Write-Host "`n $($command.Wiki)" -ForegroundColor Blue -NoNewline
        }
        Write-Host "`n"
    }
    
    Write-Host "Check out the Meters on Demand wiki! " -NoNewline
    Write-Host $MetersOnDemand.Wiki -ForegroundColor Blue

    return 
}
