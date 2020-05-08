/*
 *    Name: IceDynamix
 *   Datum: 2020-01-13
 * Aufgabe: Wuerfel
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sbit Taster = K1;
sfr at P0 LEDs;
unsigned char Zahl[6] = {1,2,3,10,11,14};
unsigned char n = 0;

void main()
{
    Grundeinstellungen();
    LEDs = 0;

    while (1) {
        if (Taster) // low-aktiv
            LEDs = Zahl[n];
        else if (++n > 5) {
            n = 0;
        }
    }
}
