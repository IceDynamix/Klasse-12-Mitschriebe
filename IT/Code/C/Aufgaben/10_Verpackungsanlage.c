/*
 *         Name: DerZauberer
 *        Datum: 2020-03-09
 *      Aufgabe: Verpackungsanlage
 * Beschreibung: Mit einer einfachen Lichtschranke soll die von 9V-Batterien einer Verpackungsanlage erfasst werden.
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sfr at P0 LEDs;
sbit taster = P2_0;

void init(void)
{
    XBR1 = 0b0101000;
    P0SKIP = 0xFF;
    P1SKIP = 0xFF;
    P2SKIP = 0xFF;
    P3SKIP = 0xFF;
    LEDs = 0;
    TMOD = 0b00000110;
    TH0 = 252;
    TL0 = 252;
    TR0 = 1;
}

void main()
{
    Grundeinstellungen();
    init();

    while (1)
    {
        if (TF0 == 1)
        {
            LEDs <<= 1;
            LEDs++;
            TF0 = 0;
        }
    }
}
