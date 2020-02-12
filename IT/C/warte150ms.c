#include <C_8051F340.h>

// Clock 2µs
// Timer soll 42ms gehen

// Timer ist 16-bit
// Startwert = 2^16 - 21000 = 0xADF8
// 21000 da die Clock alle 2µs läuft anstatt 1µs

void init(void)
{
    TMOD = 0b00000001;
    TH0 = 0xAD;
    TL0 = 0xF8;
}

void timer(void)
{
    // Startwerte setzen
    TH0 = 0xAD;
    TL0 = 0xF8;

    // Timer starten
    TR0 = 1;

    // Auf Flag warten
    while (TF0 == 0)
        continue;

    // Timer stoppen
    TR0 = 0;
    TF0 = 0;
}

void main(void)
{
    init();
    while (1)
    {
        timer();
    }
}
