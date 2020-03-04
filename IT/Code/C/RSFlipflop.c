/*
 * Name:    ~
 * Datum:   2019-01-13
 * Aufgabe: RS-Flipflop
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sbit S = P2_0;
sbit R = P2_1;
sbit LED = P2_2;

void main()
{

    Grundeinstellungen();
    LED = 0;

    while (1)
    {
        while (S == 1) continue;
        LED = 1;
        while (R == 1) continue;
        LED = 0;
    }
}
