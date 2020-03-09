/*
 *    Name: IceDynamix
 *   Datum: 2019-01-27
 * Aufgabe:
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sbit lamp = D1;

void timer5s(void)
{
    unsigned char nLoops = 76;
    TR0 = 1;

    while (nLoops != 0)
    {
        while (!TF0)
            continue;
        TF0 = 0;
        nLoops--;
    }
}

void main(void)
{
    unsigned char temporary = 0;
    Grundeinstellungen();
    TMOD = 0b00000001; // Timer 0, 16-bit Modus
    lamp = 0;
    TR0 = 0;

    while (1)
    {
        lamp = 0;

        while (K1 && K2)
            continue;

        temporary = P0;

        while (temporary != 0)
        {
            lamp = 1;
            timer5s();
            temporary--;
            temporary >>= 1;
        }
    }
}
