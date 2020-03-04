/*
  Initialisierung/Einstellungen C8051F340 in C
  Karl Laber
  25.04.2019
*/

void Grundeinstellungen (void)
{
   OSCICN = 0x83;  //Einstellung System Clock = Interner Oszillator = 12MHz

   PCA0MD = 0;    //clear watchdog timer

   //alle Portpins sind auf den Reset Wert PnMDIN = 11111111 als digitale Eing�nge gesetzt
   //soll ein Eingang als analoger Eingang dienen, so muss in dem Register PnMDIN eine ent-
   //sprechende 0 eingetragen werden

   P0MDOUT = 0xFF;	//P0.0 bis P0.7 als push-pull Ausg�nge
   P1MDOUT = 0xFF;	//P1.0 bis P1.7 als push-pull Ausg�nge
   P2MDOUT = 0xFF;	//P2.0 bis P2.7 als push-pull Ausg�nge
   P3MDOUT = 0xFF;	//P3.0 bis P3.7 als push-pull Ausg�nge
   P4MDOUT = 0xFF;	//P0.0 bis P0.7 als push-pull Ausg�nge
   //eine 0 in PnMDOUT erzeugt ein OpenDrain Ausgang!

   XBR1 = 0x40;        //Enable crossbar and enable,weak pull-ups
}