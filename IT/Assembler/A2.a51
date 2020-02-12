; Name:         ~
; Datum:        2019-09-16
; Aufgabe:      RS-Flipflop
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc
LCALL Einstellungen

; ------------------------
; Normal

; M0:
; MOV 80h,#0
; M1:
; JB 0A0h,M1
; MOV 80h,#255
; M2:
; JB 0A1h,M2
; SJMP M0

; ------------------------
; Funktionsgleichung
; LED = /K1 + (LED*K2)

M0:
MOV C,0A1h
ANL C,80h
ORL C,/0A0h
MOV 80h,C
SJMP M0

include Einstellungen.inc
END
