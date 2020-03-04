; Name:         ~
; Datum:        2019-09-24
; Aufgabe:      LEDs rotieren
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc

LCALL Einstellungen

MOV A,#00011000b

M0:
MOV P0,A
JNB K1,M1
JNB K2,M2
SJMP M0

M1:
JB P0_7,M0
RL A
M11:
JB K1,M0
SJMP M11

M2:
JB P0_0,M0
RR A
M21:
JB K2,M0
SJMP M21

include Einstellungen.inc
END
