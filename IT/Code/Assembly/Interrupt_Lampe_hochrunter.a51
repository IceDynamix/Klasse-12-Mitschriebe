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
    SETB TR1 ; Timer 1 starten
RETI

ORG 0013h ; ISR EX1 (Extern 1)
    CLR TR1 ; Timer 1 stoppen
RETI

ORG 001Bh ; ISR ET0 (Timer 0)
    DJNZ R0,Exit ; Counts twice
    MOV R0,#2
    MOV A,P1
    CJNE R1,#0,RotL
    SJMP RotR

    RotL:
    RL A
    SJMP Check

    RotR:
    RR A
    SJMP Check

    Check:
    CJNE A,#00010000b,Check2
    MOV R1,#0
    SJMP Load

    Check2:
    CJNE A,#00000001b,Load
    MOV R1,#1

    Load:
    MOV P1,A
    Exit:
RETI

; MAIN ----------------------------------------

Main:
    LCALL Einstellungen
    MOV R0,#2
    MOV P1,#1
    MOV TMOD,#00010000b ; Timer 1 8-Bit Autoreload
    MOV TH1,#79h ; Reloadwerte
    MOV TL1,#60h
    SETB IT0 ; Negative Flanke EX0
    MOV IT01CF,#01110000b ; EX0 an P0.0, EX1 an P0.7
    SETB IT1 ; Negative Flanke EX1
    MOV IE,#10001101b
    Loop:
    SJMP Loop

include Einstellungen.inc
END
