; Name:         ~
; Datum:        2019-12-09
; Aufgabe:      Lauflicht mit Interrupts
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc

LJMP Main

; INTERRUPTS ----------------------------------

ORG 0003h ; Interrupt Service routine (ISR) EX0
    CLR D1
    CLR D2
RETI

ORG 0013h ; ISR EX1 (Extern 1)

    ; if (signalB) {
    ;   Left()
    ; } else {
    ;   Right()
    ; }

    JB P0.2,Right
    SJMP Left ; else: left

    Left:
    SETB D1
    CLR D2
    SJMP Exit

    Right:
    CLR D1
    SETB D2
    SJMP Exit

    Exit:

RETI

; MAIN ----------------------------------------

Main:
    LCALL Einstellungen
    SETB IT0 ; EX0 auf negative Flanke setzen
    SETB IT1 ; EX1 auf negative Flanke setzen
    MOV IT01CF,#00011000b ; EX1 an P0.1, EX0 an P0.0
    MOV IE,#10000101b ; EA, ... , EX1, EX0
    Loop:
    SJMP Loop

include Einstellungen.inc
END
