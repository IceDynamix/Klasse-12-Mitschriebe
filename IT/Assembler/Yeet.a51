; Name:         ~
; Datum:        2019-09-30
; Aufgabe:      RNG+
; Controller:   C8051F340
; Taster K1     =P2.0
; Taster K2     =P2.1
; LED D2        =D1
; LED D3        =D2

include C8051F340.inc
LCALL Einstellungen

; MAIN ----------------------------------------------------------

MOV P0,#0
MOV R0,#0
MOV A,#0
MOV DPTR,#Yeet

Loop:
MOV P0,#0
ACALL Delay_400ms

MOV P0,#0
ACALL Delay_40ms

MOV P0,#01111010b
ACALL Delay_400ms

MOV P0,#0
ACALL Delay_40ms

MOV P0,#01111001b
ACALL Delay_400ms

MOV P0,#0
ACALL Delay_40ms

MOV P0,#01111001b
ACALL Delay_400ms

MOV P0,#0
ACALL Delay_40ms

MOV P0,#01111000b
ACALL Delay_400ms

MOV P0,#0
ACALL Delay_40ms

SJMP Loop

; Loop:
; ACALL Delay_400ms
; INC R0
; CJNE R0,#6,Print
; MOV R0,#0

; Print:
; MOV A,R0
; MOVC A,@A+DPTR
; MOV P0,A
; SJMP Loop

; ----------------------------------------------------------

Delay_400ms:
; f(x) = x*(1,5*10^6)/4
; f(0.4) = 150000 = 150 * 100 * 10
MOV R0,#100
Step1:
MOV R1,#100
Step2:
MOV R2,#150
Step3:
DJNZ R2,Step3
DJNZ R1,Step2
DJNZ R0,Step1
RET ; Return

; ----------------------------------------------------------

Delay_40ms:
; f(x) = x*(1,5*10^6)/4
; f(0.4) = 150000 = 150 * 100 * 10
MOV R0,#1
Step1_1:
MOV R1,#100
Step2_2:
MOV R2,#150
Step3_3:
DJNZ R2,Step3_3
DJNZ R1,Step2_2
DJNZ R0,Step1_1
RET ; Return


; ---------------------------------------------------------------

Binary:
db 1,3,7,15,31,63

Wuerfel:
db 00000001b,00001000b,00001001b,00001010b,00001011b,00001110b

Sieben_Segment:
db 00000110b,01011011b,01001111b,01100110b,01101101b,01111101b

Yeet:
db 0,01101110b,01111001b,01111001b,01111000b
;    76543210 ,76543210 ,76543210 ,76543210

; ---------------------------------------------------------------

include Einstellungen.inc
END
