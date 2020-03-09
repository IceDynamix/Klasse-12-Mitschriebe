// untested

/*
 *    Name: DerZauberer + IceDynamix
 *   Datum: 2020-03-09
 * Aufgabe: PWM Signal Dimmer
 */

#include <C_8051F340.h>
#include <Einstellungen.h>

sbit taster0 = P2_0;
sbit taster1 = P2_1;
sbit led = P2_2;
sbit timer0Aktiv = TR0;
sbit timer1Aktiv = TR1;
float g = 0.5;
float step = 0.05;
int periodInMicroSeconds = 200;

void ISR_T0(void) interrupt 1
{
    led = 0;
    timer0Aktiv = 0;
    timer1Aktiv = 1;
}

void ISR_T1(void) interrupt 3
{
    led = 1;
    timer0Aktiv = 0;
    timer1Aktiv = 1;
}

void initInterrupt()
{
    ET0 = 1; // Enable Timer 0 Interrupt
    ET1 = 1; // Enable Timer 1 Interrupt
    EA = 1;  // Enable interrupts in general
}

void initTimer(void)
{
    // 8-Bit Autoreload, Startwert 156
    TMOD = 0b00100010;
    TH0 = 156, TL0 = 156;
    TH1 = 156, TL1 = 156;
    timer0Aktiv = 0;
}

void adjustPeriod(int increment)
{
    int increment = (int)periodInMicroSeconds * step;
    TH0 += increment;
    TL0 += increment;
    TH1 -= increment;
    TL1 -= increment;
}

void main(void)
{
    Grundeinstellungen();
    initTimer();
    initInterrupt();

    // g = t_H/T
    // t_H = T * g

    // g = 0.55
    // t_H = 200µs * 0.55 = 110µs

    while (1)
    {
        // Button 0 is pressed
        while (!taster0)
        {
            adjustPeriod(1);
            while (!taster0) // Wait until Button 0 isn't pressed anymore
                continue;
        }

        // Button 0 is pressed
        while (!taster1)
        {
            adjustPeriod(-1);
            while (!taster1) // Wait until Button 0 isn't pressed anymore
                continue;
        }
    }
}
