/*
 *    Name: IceDynamix
 *   Datum: 2019-01-27
 * Aufgabe:
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sbit lamp = D1;

void main(void)
{
    unsigned char nLoops = 76;
    Grundeinstellungen();
    TMOD = 0b00000001; // Timer 0, 16-bit Modus

    while (1)
    {
        lamp = 0;
        TR0 = 0;
        nLoops = 76;

        while (K1) // Taster ist low-aktiv
            continue;

        lamp = 1;
        TR0 = 1;

        while (nLoops != 0)
        {
            while (!TF0)
                continue;
            TF0 = 0;
            nLoops--;
        }
    }
}
