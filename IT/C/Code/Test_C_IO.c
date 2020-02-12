/*
 Name:      Captain
 Datum:     25.04.2019
 Aufgabe:   Test C Input/Output mit Timer
 Controller:C8051F340
 Taster K1=P2.0
 Taster K2=P2.1
 LED D1   =P2.2
 LED D2   =P2.3
 */

//-----------------------------------------------------------------------------
// Include Dateien
//-----------------------------------------------------------------------------
#include <C_8051F340.h>                //Erweiterte SFR Zuordnungen
#include <Einstellungen.h>             //beinhaltet die Funktion Grundeinstellungen

//-----------------------------------------------------------------------------
// Pin/Port Zuweisungen
//-----------------------------------------------------------------------------
sfr  at P4 LEDs;      //alternativ sfr LEDs = P1;
sbit at P3_0 S0;      //alternativ sbit S1  = P0_1;
sbit at P3_7 S7;

//-----------------------------------------------------------------------------
// Eigene Funktionen
//-----------------------------------------------------------------------------
void Zeit_VS (void) //Beachte: Zeit kann nicht exakt berechnet werden!!! 
{
//Hinweis: Mit MOV OSCICN,#80h  --> Frequenz-Clock 12MHz/8 = 1,5 MHz
//         Mit MOV OSCICN,#81h  --> Frequenz-Clock 12MHz/4 = 3,0 MHz 
//         Mit MOV OSCICN,#82h  --> Frequenz-Clock 12MHz/2 = 6,0 MHz
//         Mit MOV OSCICN,#83h  --> Frequenz-Clock 12MHz/1 = 12  MHz (siehe Einstellungen.inc)
    unsigned int x; //max. Wert = 65535       
    OSCICN = 0x80; //Einstellung 1,5 MHz
    for(x=50000; x>0; x--); //Zählschleife --> Frequenz ca. 1Hz
 }
 //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Zeit_Timer (void) //5 Sekunden = 5.000.000µs
{
//Beachte: Beim Timer die Einstellung MOV OSCICN,#83h lassen, 
//         dann wird alle µs das Zählregister um +1 erhöht!
//         Das ist in Einstellungen.h so voreingestellt!!!

unsigned char n = 77; //5.000.000/65.536=76,29 
    OSCICN = 0x83;    //Einstellung Oszillator -> 1µs je Zählimpuls
    TMOD   = 1;       //Timer 0 Modus 16Bit
    TH0    = 0xBC;    //Startwert TH0
    TL0    = 0xC0;    //Startwert TL0
    TR0    = 1;       //Timer 0 starten
    while (n>0)
    {
        while(TF0==0);//warten auf den Timer 0 Überlauf
        TF0=0;        //Überlaufbit löschen;
        n--;          //Überlaufzähler dekrementieren   
    }
    TR0 = 0;         //Timer 0 stoppen
}
//-----------------------------------------------------------------------------
// Hauptprogramm
//-----------------------------------------------------------------------------
void main (void)
{
    Grundeinstellungen(); //siehe Datei Einstellungen.h
    LEDs=0; //alle LEDs am Port 1 ausschalten
    D2=0;   //LED D2 am µC-Board ausschalten
    D3=0;   //LED D3 am µC-Board ausschalten
    while (1)
    {
        if(S0==0 && S7==0)     //Blinklicht mit Schalter S1 am Port P0.1 ein- bzw. ausschalten
        {
            LEDs = 0b11001100;
            Zeit_VS();
            LEDs = 0;
            Zeit_VS();    
        }
        else
        {
            LEDs = 0;
        }
    }
}



