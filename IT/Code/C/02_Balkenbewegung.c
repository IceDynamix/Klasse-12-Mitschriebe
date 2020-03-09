/*
 * Name:    IceDynamix
 * Datum:   2020-01-13
 * Aufgabe: Balkenbewegung
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sbit T1 = K1;
sbit T2 = K2;
sfr at P0 LEDs;

void main()
{
    Grundeinstellungen();
    LEDs = 0b00011000;

    while (1)
    {
        if (!T1)
        {
            LEDs <<= 1;
            while (!T1)
                continue;
        }
        if (!T2)
        {
            LEDs >>= 1;
            while (!T2)
                continue;
        }
    }
}
