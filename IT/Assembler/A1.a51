; Name:         ~
; Datum:        2019-09-16
; Aufgabe:      Test Assembler Input/Output
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc
LCALL Einstellungen
M0:
MOV 80h,#0 ; schalte alle Port 0 Bits aus, alternativ MOV P0,#0
M1:
JB 0A0h,M0 ; wenn Taster = 1, springe zu M0
MOV 80h,#10101010b ; alternativ #255d, #0FFh
SJMP M1 ; springe zu M1

include Einstellungen.inc
END
