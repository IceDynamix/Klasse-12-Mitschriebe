/*
 *    Name: IceDynamix
 *   Datum:
 * Aufgabe:
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sfr at P0 siebenSeg;
unsigned char zahl[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
unsigned char zeit = 2;
unsigned char index = 0;

void timer1s(void)
{
    unsigned int nLoops = 4; // ceiling[(n*10^6)/2^16]
    TR0 = 1;

    while (nLoops != 0)
    {
        while (!TF0)
            continue;
        TF0 = 0;
        nLoops--;
    }
}

void timer3s(void)
{
    timer1s();
    timer1s();
    timer1s();
}

void countdown(void)
{
    index = zeit;

    while (index != 0)
    {
        siebenSeg = zahl[index];
        timer1s();
    }

    siebenSeg = 0b10000000;
    timer3s();

    siebenSeg = zahl[zeit];
}

void main(void)
{
    Grundeinstellungen();
    TMOD = 0b00000001; // Timer 0, 16-bit Modus
    TR0 = 0;
    siebenSeg = zahl[zeit];

    while (1)
    {
        // Taster sind low-aktiv! -> Für Lesbarkeit einfach im Kopf negieren
        if (!K1) // Starte Countdown
        {
            siebenSeg = 0;
            countdown();
            while (!K1)
                continue;
        }

        if (!K2) // Bearbeite Countdown Zeit
        {
            zeit++;
            if (zeit == 10)
                zeit = 1;
            siebenSeg = zahl[zeit];
            while (!K2)
                continue;
        }
    }
}
