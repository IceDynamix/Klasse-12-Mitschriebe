; Name:         ~
; Datum:        2019-09-30
; Aufgabe:      RNG+
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc
LCALL Einstellungen

; MAIN ----------------------------------------------------------

MOV P0,#00111111b
MOV R0,#6
MOV DPTR,#Sieben_Segment

Loop:
JB K1,Loop
MOV P0,#0
SJMP Roll

Roll:
DEC R0
JB K1,Print
CJNE R0,#0,Roll
MOV R0,#6
SJMP Roll

Print:
MOV A,R0
MOVC A,@A+DPTR
MOV P0,A
SJMP Loop

; ---------------------------------------------------------------

Binary:
db 1,3,7,15,31,63

Wuerfel:
db 00000001b,00001000b,00001001b,00001010b,00001011b,00001110b

Sieben_Segment:
db 00000110b,01011011b,01001111b,01100110b,01101101b,01111101b

; ---------------------------------------------------------------

include Einstellungen.inc
END
