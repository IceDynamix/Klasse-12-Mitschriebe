; Name:         ~
; Datum:        2019-11-04
; Aufgabe:      Autolicht mit Timer
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc

LCALL Einstellungen

MOV TMOD,#00000001b ; Timer auf 16 Bit Modus stellen

LED_off:
CLR D1 ; LED aus
CLR TR0 ; Timer aus
MOV R0,#77 ; Z�hlregister setzen
; Extra Zeit um genau auf 5s zu kommen
; t = 5s
; 2^16 - t*10^6%2^16 in hex = B4C0h
MOV TH0,#0B4h ; Timer high
MOV TL0,#0C0h ; Timer low

Loop:
JB P2.0,Loop ; Low-aktiver Taster
SETB D1 ; LED an
SETB TR0 ; Timer an
Timer:
JNB TF0,Timer ; �berlaufbit
CLR TF0
DJNZ R0,Timer
SJMP LED_off

include Einstellungen.inc
END
