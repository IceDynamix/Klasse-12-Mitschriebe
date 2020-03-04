; Name:         ~
; Datum:        2019-10-14
; Aufgabe       Elektr. Dimmer
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc
LCALL Einstellungen

; Main -----------------------------------------------------
MOV OSCICN,#80h ; Takt auf 1.5Mhz setzen

SETB P0_0 ; Lampe
MOV R0,#2 ; Loop Switch
CLR 30h ; Taster 1
CLR 31h ; Taster 2
MOV R6,#5 ; t_h
MOV R7,#5 ; t_l

Loop:
JNB K1,Plus
CLR 30h
JNB K2,Minus
CLR 31h
SJMP Lamp

Plus:
JB 30h,Lamp
INC R6
DEC R7
SETB 30h
SJMP Lamp

Minus:
JB 31h,Lamp
DEC R6
INC R7
SETB 31h
SJMP Lamp

Lamp:
CJNE R0,#2,Off
MOV A,R6
SETB P0_0
SJMP Delay

Off:
MOV A,R7
CLR P0_0
SJMP Delay

Delay:
ACALL Delay_1ms
DEC A
JNZ Delay
DJNZ R0,Lamp
SJMP Preloop

Preloop:
MOV R0,#2
SJMP Loop

; ----------------------------------------------------------

Delay_1ms:
; f(x) = x*(1,5*10^6)/4
; f(0,001) = 375 = 75*5
MOV R3,#5
Step1:
MOV R4,#75
Step2:
DJNZ R4,Step2
DJNZ R3,Step1
RET

include Einstellungen.inc
END
