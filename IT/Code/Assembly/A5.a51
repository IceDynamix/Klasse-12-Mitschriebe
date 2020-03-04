; Name:         ~
; Datum:        2019-09-30
; Aufgabe:      Balkenanzeige
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc
LCALL Einstellungen

; Main -----------------------------------------------------

MOV OSCICN,#80h ; Frequenz 1,5MHz

Reset:
MOV A,#00000000b ; Setze Akku auf 0
MOV P0,A ; Akku an LED

Loop:
JNB K1,Rotate ; Taster gedr�ckt? Wenn Low Pegel (Taster ist Low-Aktiv), springe
JNB K2,Reset ; Taster gedr�ckt? Wenn Low Pegel (Taster ist Low-Aktiv), springe
SJMP Loop

Rotate:
RL A ; Rotiere Links
INC A ; Akku++
MOV P0,A ; Akku an LED
ACALL Delay_400ms
SJMP Loop


; ----------------------------------------------------------

Delay_400ms:
; f(x) = x*(1,5*10^6)/4
; f(0,4) = 150000 = 150 * 100 * 10
MOV R0,#10
Step1:
MOV R1,#100
Step2:
MOV R2,#150
Step3:
DJNZ R2,Step3
DJNZ R1,Step2
DJNZ R0,Step1
RET ; Return

include Einstellungen.inc
END
