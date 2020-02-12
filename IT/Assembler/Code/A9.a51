;       Name:   ~
;      Datum:   2019-11-18
;    Aufgabe:   Counter
; Controller:   C8051F340
;  Taster K1  = P2.0
;  Taster K2  = P2.1
;     LED D2  = D1
;     LED D3  = D2

include C8051F340.inc

LEDs data P0
LCALL Einstellungen
MOV XBR1,#01010000b   ; T0-Bit enable
MOV P0SKIP,#11111111b ; Skip, bis man in Port 3 ankommt, ersetzbar mit #00FFh
MOV P1SKIP,#11111111b
MOV P2SKIP,#11111111b
MOV P3SKIP,#00001111b ; T0-Bit auf P3.4, wenn #00011111b dann P3.5 etc.

; --------------------------------------------------------------------------------

MOV TMOD,#00000110b ; Counter 0, 8-bit Auto-Reload Modus
SETB TR0 ; Aktiviert den Counter

; Jetzt wird mit jedem Signal auf das T0-Bit (jetzt auf P3.4) der Counter hochgez�hlt
; Aufgabe: Balkenanzeige soll alle 10 mal hochz�hlen

MOV A,#0
MOV TL0,#246 ; 255-10
MOV TH0,#245 ; 255-10

Loop:
MOV LEDs,A ; Gibt den Z�hlerstand aus
JNB K1,Reset
JB TF0,Increment
SJMP Loop

Reset:
MOV TL0,#0
SJMP Loop

Increment:
CLR TF0
RL A
INC A
SJMP Loop

include Einstellungen.inc
END
