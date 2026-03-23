Add-Type @"
using System;
using System.Runtime.InteropServices;
public class Window {
    [DllImport("user32.dll")]
    public static extern IntPtr GetForegroundWindow();
    [DllImport("user32.dll")]
    public static extern bool GetWindowRect(IntPtr hWnd, out RECT lpRect);
}
public struct RECT {
    public int Left;
    public int Top;
    public int Right;
    public int Bottom;
}
"@
$hwnd = [Window]::GetForegroundWindow()
$rect = New-Object RECT
if ([Window]::GetWindowRect($hwnd, [ref]$rect)) {
    # Output as "X,Y" for Rainmeter to parse
    Write-Output "$($rect.Left), $($rect.Top)"
}
