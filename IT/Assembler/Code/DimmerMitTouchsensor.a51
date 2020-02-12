; Name:         ~
; Datum:        2019-12-02
; Aufgabe:      Dimmer mit Touchsensor
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc

Sensor bit P0_0
Lampe bit P1_0
LJMP Main

; INTERRUPTS --------------------------

ORG 0003h
    INC A
    CJNE A,#1 MI0
    CLR Lampe
    SJMP ExitInterrupt

    MI0:
    CJNE A,#2,MI1
    SETB TR1
    SJMP ExitInterrupt

    MI1:
    SETB Lampe
    CLR TR1
    CLR A

ExitInterrupt:
RETI

; -------------------------------------

Main:
    LCALL Einstellungen
    LCALL Init
    Loop:
    SJMP Loop

; -------------------------------------

Init:
    MOV TMOD #00100000b     ; Timer 0 8-Bit AReload
    MOV TL0,#6
    MOV TH0,#6
    MOV IT01CF,#00001000b   ; EX0 auf P0 gesetzt
    SETB IT0                ; Positive Flanke
    SETB EX0                ; Freigabe vom externen Interrupt 0
    SETB ET1                ; Freigabe vom Timer Interrupt 1
    SETB EA                 ; Freigabe alle
RET

include Einstellungen.inc
END
