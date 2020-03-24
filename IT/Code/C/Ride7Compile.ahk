F8::
if !WinActive("ahk_exe Code.exe")
    return
Run("ride7") ; Start in a new window instead of an existing one
WinWait("About ride7")
Send("{Enter}")
WinActivate("ahk_exe Ride7.exe")
Send("{F7}") ; Build project
Sleep(250) ; Compensates for build time

if WinExist("ahk_exe FlashUtil.exe")
    WinClose("ahk_exe FlashUtil.exe")
Run("D:\SiLabs\MCU\Utilities\FLASH Programming\Static Programmers\Windows Console\FlashUtil.exe")
WinWait("ahk_exe FlashUtil.exe")
WinActivate("ahk_exe FlashUtil.exe")
Send("{TAB 5}{Enter}{Enter}") ; Connect
Send("+{Tab}{Right}{Tab}") ; Switch to Hex File Tab
Send(A_WorkingDir "\TI_4.HEX") ; Enter path
Send("{Tab 4}{Enter}") ; Download
WinWait("FlashUtil")
Send("{Enter}{Tab}{Enter}")
WinWait("FlashUtil")
Send("{Enter}")

WinClose("ahk_exe Ride7.exe") ; Only closes the last window (the one created at the beginning)
WinClose("ahk_exe FlashUtil.exe")
