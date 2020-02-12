; Name:         ~
; Datum:        2019-09-30
; Aufgabe:      RNG
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc
LCALL Einstellungen

MOV A,#00000000b ; Setze Akku auf 0

M0:
JNB K1,M01 ; Taster gedr�ckt? Wenn Low Pegel (Taster ist Low-Aktiv), springe zu M0
JB 0E5h,M1 ; Wenn LED 5 an, dann springe zu M1
SJMP M2 ; Springe zu M2

M01:
MOV P0,A ; Akkuinhalt an LED
SJMP M0 ; Springe zu M0

M1:
MOV A,#00000000b ; Setze Akku auf 0
SJMP M3 ; Springe zu M3

M2:
RL A ; Rotiere Akku nach links
SJMP M3 ; Springe zu M3

M3:
INC A ; Inkrementiere Akku
SJMP M0 ; Springe zu M0



include Einstellungen.inc
END
