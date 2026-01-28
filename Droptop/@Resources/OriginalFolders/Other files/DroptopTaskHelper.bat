@echo off
title Droptop_Task_Helper

set "app=%~1"

:loop
tasklist /fi "imagename eq %app%" | find /i "%app%" > nul

if %errorlevel% neq 0 (
    start "" "%app%"
)

timeout /t 5 > nul
goto loop