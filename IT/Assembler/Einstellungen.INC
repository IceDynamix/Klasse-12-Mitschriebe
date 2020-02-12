;Initialisierung/Einstellungen C8051F340 in Assembler
;Karl Laber
;17.09.2019

Einstellungen:
MOV OSCICN,#83h  ;Einstellung System Clock = Interner Oszillator = 12MHz

MOV PCA0MD,#0    ;clear watchdog timer

;alle Portpins sind auf den Reset Wert PnMDIN = 11111111 als digitale Eingänge gesetzt
;soll ein Eingang als analoger Eingang dienen, so muss in dem Register PnMDIN eine ent-
;sprechende 0 eingetragen werden

MOV P0MDOUT,#0FFh;P0.0 bis P0.7 als push-pull Ausgänge
MOV P1MDOUT,#0FFh;P1.0 bis P1.7 als push-pull Ausgänge
MOV P2MDOUT,#0FFh;P2.0 bis P2.7 als push-pull Ausgänge
MOV P3MDOUT,#0FFh;P3.0 bis P3.7 als push-pull Ausgänge
MOV P4MDOUT,#0FFh;P0.0 bis P0.7 als push-pull Ausgänge
;eine 0 in PnMDOUT erzeugt ein OpenDrain Ausgang!

MOV XBR1,#40h    ;Enable crossbar and enable weak pull-ups
RET