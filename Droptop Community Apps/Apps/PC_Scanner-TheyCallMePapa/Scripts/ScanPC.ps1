#This gets the screen width and height
Add-Type @" 
using System;
using System.Runtime.InteropServices;
public class PInvoke {
    [DllImport("user32.dll")] public static extern IntPtr GetDC(IntPtr hwnd);
    [DllImport("gdi32.dll")] public static extern int GetDeviceCaps(IntPtr hdc, int nIndex);
}
"@

$hdc = [PInvoke]::GetDC([IntPtr]::Zero)
$screenWidth = [PInvoke]::GetDeviceCaps($hdc, 118) # width
$screenHeight = [PInvoke]::GetDeviceCaps($hdc, 117) # height

# This sets the window size
$pshost = get-host
$pswindow = $pshost.ui.rawui
$newsize = $pswindow.buffersize
$newsize.height = 3000
$newsize.width = 137
$pswindow.buffersize = $newsize
$newsize = $pswindow.windowsize
$newsize.height = 30
$newsize.width = 90
$pswindow.windowsize = $newsize
$pswindow.windowtitle = "PC Scan"
$pswindow.foregroundcolor = "White"
$pswindow.backgroundcolor = "Black"
$windowWidth = $pshost.ui.rawui.BufferSize.Width
$windowHeight = $pshost.ui.rawui.BufferSize.Height
cls

# Center the window on the screen.
Try { 
    [Void][Window]
}
Catch {
    Add-Type @"
    using System;
    using System.Runtime.InteropServices;
    public class Window {
        [DllImport("user32.dll")]
        [return: MarshalAs(UnmanagedType.Bool)]
        public static extern bool GetWindowRect(IntPtr hWnd, out RECT lpRect);
        [DllImport("user32.dll")]
        [return: MarshalAs(UnmanagedType.Bool)]
        public static extern bool MoveWindow(IntPtr handle, int x, int y, int width, int height, bool redraw);
        [DllImport("user32.dll")]
        [return: MarshalAs(UnmanagedType.Bool)]
        public static extern bool ShowWindow(IntPtr handle, int state);
    }
    public struct RECT {
        public int Left;   // x position of upper-left corner
        public int Top;    // y position of upper-left corner
        public int Right;  // x position of lower-right corner
        public int Bottom; // y position of lower-right corner
    }
"@
}

$XP = [System.Diagnostics.Process]::GetCurrentProcess().Id     # Get PID (of self)
$WH = (Get-Process -Id $XP).MainWindowHandle                   # Get (Current) Window Handle (from Get process info from PID)
$R = New-Object RECT                                          # Define A Rectangle Object
[Void][Window]::GetWindowRect($WH, [ref]$R)                      # Get the Rectangle Object in $R (and Result flag)

# Define the Window (Position, Size)
$X = [math]::round(($screenWidth / 3.5) - ($windowWidth * 2)) # $R.Left
$Y = [math]::round(($windowHeight / 4.5) - ($screenHeight / 2)) #R.Top
$Width = $R.Right - $R.Left
$Height = $R.Bottom - $R.Top

# Move the window to that position...
[Void][Window]::MoveWindow($WH, $X, $Y, $Width, $Height, $True)

# Check for admin rights and prompt if not admin
if (-NOT ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] "Administrator")) {  
    $arguments = "& '" + $myinvocation.mycommand.definition + "'"
    Start-Process powershell -Verb runAs -ArgumentList $arguments
    Break
}

# Ask user if they want to run sfc

$crlf = "`r`n"
Write-Host ""
Write-Host "Use the System File Checker tool to repair missing or corrupted system files."$crlf"This operation will take several minutes."
Write-Host ""
Write-Host "Do you want to run the System File Checker tool? (Y/N) " -NoNewLine -ForegroundColor Green

Do {
    $x = $Host.UI.RawUI.CursorPosition.X
    $y = $Host.UI.RawUI.CursorPosition.Y
    $choice = $Host.UI.ReadLine()
    #set the cursor coordinates back to before the Read-Host
    $Host.UI.RawUI.CursorPosition = New-Object System.Management.Automation.Host.Coordinates $x, $y
}
Until ($choice -eq 'y' -or $choice -eq 'n')

if ($choice -eq "Y" -or $choice -eq "y") {

    # Run System File Checker (SFC)

    Write-Host ""
    Write-Host ""
    Write-Host "Running sfc /scannow"

    sfc /scannow

}
else {
    exit
}

# Prompt to run DISM Check Health tool

Write-Host ""
Write-Host "Check the image to see whether any corruption has been detected."
Write-Host ""
Write-Host "Do you want to run the DISM Check Health tool? (Y/N) " -NoNewLine -ForegroundColor Green

Do {
    $x = $Host.UI.RawUI.CursorPosition.X
    $y = $Host.UI.RawUI.CursorPosition.Y
    $choice = $Host.UI.ReadLine()
    #set the cursor coordinates back to before the Read-Host
    $Host.UI.RawUI.CursorPosition = New-Object System.Management.Automation.Host.Coordinates $x, $y
}
Until ($choice -eq 'y' -or $choice -eq 'n')

if ($choice -eq "Y" -or $choice -eq "y") {

    if (-NOT ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] "Administrator")) {  
        $arguments = "& '" + $myinvocation.mycommand.definition + "'"
        Start-Process powershell -Verb runAs -ArgumentList $arguments
        Break
    }
    Write-Host ""
    Write-Host ""
    Write-Host "Running DISM /Online /Cleanup-Image /CheckHealth"

    DISM /Online /Cleanup-Image /CheckHealth
    # Prompt to run DISM Scan Health tool
    Write-Host ""
    Write-Host "Scan the image to check for corruption. This operation will take several minutes."
    Write-Host ""
    Write-Host "Do you want to run the DISM Scan Health tool? (Y/N) " -NoNewLine -ForegroundColor Green

    Do {
        $x = $Host.UI.RawUI.CursorPosition.X
        $y = $Host.UI.RawUI.CursorPosition.Y
        $choice = $Host.UI.ReadLine()
        #set the cursor coordinates back to before the Read-Host
        $Host.UI.RawUI.CursorPosition = New-Object System.Management.Automation.Host.Coordinates $x, $y
    }
    Until ($choice -eq 'y' -or $choice -eq 'n')

    if ($choice -eq "Y" -or $choice -eq "y") {

        if (-NOT ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] "Administrator")) {  
            $arguments = "& '" + $myinvocation.mycommand.definition + "'"
            Start-Process powershell -Verb runAs -ArgumentList $arguments
            Break
        }
        Write-Host ""
        Write-Host ""
        Write-Host "Running DISM /Online /Cleanup-Image /ScanHealth"

        DISM /Online /Cleanup-Image /ScanHealth

        # Prompt to run DISM Scan Health tool
        Write-Host ""
        Write-Host "To repair an image, use the /RestoreHealth argument to repair the image."$crlf"This operation will take several minutes."
        Write-Host ""
        Write-Host "Do you want to run the DISM Restore Health tool? (Y/N) " -NoNewLine -ForegroundColor Green

        Do {
            $x = $Host.UI.RawUI.CursorPosition.X
            $y = $Host.UI.RawUI.CursorPosition.Y
            $choice = $Host.UI.ReadLine()
            #set the cursor coordinates back to before the Read-Host
            $Host.UI.RawUI.CursorPosition = New-Object System.Management.Automation.Host.Coordinates $x, $y
        }
        Until ($choice -eq 'y' -or $choice -eq 'n')

        if ($choice -eq "Y" -or $choice -eq "y") {

            if (-NOT ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] "Administrator")) {  
                $arguments = "& '" + $myinvocation.mycommand.definition + "'"
                Start-Process powershell -Verb runAs -ArgumentList $arguments
                Break
            }
            Write-Host ""
            Write-Host ""
            Write-Host "Running DISM /Online /Cleanup-Image /RestoreHealth"

            DISM /Online /Cleanup-Image /RestoreHealth
        }
        else {
            exit
        }
    }
    else {
        exit
    }
}
else {
    exit
}

Write-Host ""
Write-Host ""
Write-Host "Repairs are complete."
Write-Host ""
cmd /c 'pause'
