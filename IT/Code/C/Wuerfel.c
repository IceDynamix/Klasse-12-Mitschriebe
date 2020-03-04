/*
 *    Name: ~
 *   Datum: 2020-01-13
 * Aufgabe: Wuerfel
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sbit Taster = K1;
sfr at P0 LEDs;

void main()
{
    Grundeinstellungen();
    ACC = 0;
    while (1)
    {
        if (Taster)
        {
            LEDs = ACC;
        }
        else
        {
            if (ACC & 0b00100000) // Bit 5 gesetzt
            {
                ACC = 0;
            }
            else
            {
                ACC <<= 1;
            }
            ACC++;
        }
    }
}
