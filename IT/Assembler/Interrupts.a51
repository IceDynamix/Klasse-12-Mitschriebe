; Name:         ~
; Datum:        2019-11-25
; Aufgabe:      Externer Interrupt
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc
LCALL Einstellungen
LJMP Main ; Sprung zum Hauptprogramm

; INTERRUPTROUTINEN ---------------------------------------------------------------


ORG 0003h ; Interruptroutine Extern 0 (Taster P0.0)
    INC R0 ; Highzeit
    DEC R1 ; Lowzeit
RETI

; ---------------------------------------------------------------------------------

ORG 0013h ; Interruptroutine Extern 1 (Taster P0.1)
    DEC R0 ; Highzeit
    INC R1 ; Lowzeit
RETI

; MAIN ----------------------------------------------------------------------------

Main:
    LCALL Init

    Loop:
    MOV R0,#15
    MOV R1,#185
    SETB P1.0

    On:
    LCALL Zeit_100us
    DJNZ R0,On
    CLR P1.0

    Off:
    LCALL Zeit_100us
    DJNZ R1,Off
    SJMP Loop

; UNTERPROGRAMME ------------------------------------------------------------------

Init:
    MOV TMOD,#00000010b     ; Timer 8-Bit Auto-Reload
    MOV TH0,#156            ; Reloadregister (Start Offset)
    MOV TL0,#156            ; Z�hlregister (Reset zu diesem Wert beim Reload)
    MOV IT01CF,#01110000b   ; a
    SETB EX0                ; Freigabe vom externen Interrupt 0
    SETB EX1                ; Freigabe vom externen Interrupt 1
    SETB EA                 ; Freigabe alle
RET

; ---------------------------------------------------------------------------------

Zeit_100us:
    SETB TR0           ; Timer Start
    Timer_Loop:
    JNB TF0,Timer_Loop ; Check �berlaufbit
    CLR TF0            ; �berlaufbit l�schen
    CLR TR0            ; Timer stoppen
RET

; ---------------------------------------------------------------------------------

include Einstellungen.inc
END
