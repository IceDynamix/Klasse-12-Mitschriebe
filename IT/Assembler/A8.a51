; Name:         ~
; Datum:        2019-09-16
; Aufgabe:      Einstellbares Treppenlicht
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc

LCALL Einstellungen

MOV TMOD,#00000001b ; Timer auf 16 Bit Modus stellen
CLR TF0 ; Timer aus

oof:
MOV P0,#0 ; LED Leiste aus

loppowo:
JNB K1,led ; low-aktiv
JNB K2,led ; low-aktiv
SJMP loppowo

led:
MOV P0,#11111111b ; LED Leiste an
MOV A,P1

timeshift:
JZ oof
ACALL timer_15s
; FIX THIS POOP AOHAISDOJASNNFOKJIDSFKLDJSF
DEC A ; A--
RR A ; A>>1
SJMP timeshift

timer_30s:
; calling the 15s function twice bc im too lazy to use two counting bytes lmao
ACALL timer_15s
ACALL timer_15s
RET

timer_15s:
MOV R0,#229 ; ceiling[(15*10^6)/2^16] = 229
SETB TR0 ; Timer an
timer:
JNB TF0,timer ; �berlaufbit
CLR TF0
DJNZ R0,timer
CLR TR0 ; Timer aus
RET

include Einstellungen.inc
END
