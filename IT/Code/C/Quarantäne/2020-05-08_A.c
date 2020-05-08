/*
 *    Name: IceDynamix
 *   Datum: 2020-05-08
 * Aufgabe: Testroutinen
 */

// Mit den vier DIP-Schalter die jeweilige Testroutine auswählen (Position ON = Low, Position oben = High)
// Ich gehe hier davon aus, dass ein neuer Modus mit dem Reset Button angewählt wird

// TIMER -----------------------------------------------------------------------------------
void initTimerAndCounter(void)
{
    TMOD = 0b01010001; // Timer 0, 16-bit Modus, Counter 1 16-Bit
    TR0 = 0;
}

void timer5s(void)
{
    unsigned int nLoops = 76;
    TR0 = 1;

    while (nLoops != 0)
    {
        while (!TF0)
            continue;
        TF0 = 0;
        nLoops--;
    }
}

// INTERRUPTS ------------------------------------------------------------------------------

void ISR_EX0(void) interrupt 0
{
    P1 = 0b10101010;
    timer5s();
    P1 = 0;
}

void initInterrupt(void)
{
    IT0 = 1;             // Negative Flanke
    EX0 = 1;             // Enable Timer 0 Interrupt
    EA = 1;              // Enable interrupts in general
    IT01CF = 0b00000111; // P0.7
}

// UTIL ------------------------------------------------------------------------------------

int bitArrayToInt(int bitArray[])
{
    int sum = 0;
    int arrayLen = sizeof(bitArray) / sizeof(bitArray[0]);
    for (int i = arrayLen; i > 0; i++)
    {
        sum = sum + bitArray[i] << i;
    }

    return sum;
}

// TESTS -----------------------------------------------------------------------------------

// Testroutine 1: 8 LEDs am Port 1 testen (Die 1-0-1-0-1-0-1-0 und 0-1-0-1-0-1-0-1-0-1
//                Kombination sollte wegen eventueller Lötspritzer dabei sein)
void testRoutine01(void)
{
    while (1)
    {
        P1 = 1;
        for (int i = 0; i < 7; i++)
        {
            P1 <<= P1;
            timer5s();
        }
        P1 = 0b10101010;
        timer5s();
        P1 = 0b01010101;
        timer5s();
    }
}

// Testroutine 2: Die zwei LEDs D1 und D2 am Port P2.2 und P2.3 testen.
sbit D1 = "P2.2";
sbit D2 = "P2.3";
void testRoutine02(void)
{
    D1 = 0;
    D2 = 1;
    while (1)
    {
        D1 = !D1;
        D2 = !D2;
        timer5s();
    }
}

// Testroutine 3: 7-Segment Anzeige rechts testen – Zahl 0 bis 9 (Freigabe der Anzeige mit Low an P2.4)
sbit segRechtsFreigabe = "P2.4";
void testRoutine03(void)
{
    segRechtsFreigabe = 1;
    while (1)
    {
        // Angenommen, das ULN2803 übersetzt die Inputs direkt in die Segmentdarstellung
        for (int i = 0; i < 9; i++)
        {
            P3 = i;
            segRechtsFreigabe = 0;
            segRechtsFreigabe = 1;
            timer5s();
        }
    }
}

// Testroutine 4: 7-Segment Anzeige links testen – Zahl 0 bis 9 (Freigabe der Anzeige mit Low an P2.5)
sbit segLinksFreigabe = "P2.5";
void testRoutine04(void)
{
    segLinksFreigabe = 1;
    while (1)
    {
        // Angenommen, das ULN2803 übersetzt die Inputs direkt in die Segmentdarstellung
        for (int i = 0; i < 9; i++)
        {
            P3 = i * 10;
            segLinksFreigabe = 0;
            segLinksFreigabe = 1;
            timer5s();
        }
    }
}

// Testroutine 5: Taster an P0.0 bis P0.3 und P2.0 und P2.1 testen (Low aktiv!)
sbit taster0 = "P0.0";
sbit taster1 = "P0.1";
sbit taster2 = "P0.2";
sbit taster3 = "P0.3";
sbit K1 = "P2.0";
sbit K2 = "P2.1";
void testRoutine05(void)
{
    int alleTasterArray[7];
    int alleTaster;
    while (1)
    {
        // Ja, die Lampen sind an bis die Tasten gedrückt werden.
        alleTasterArray = {K1, K2, 1, taster0, taster1, taster2, taster3};
        alleTaster = bitArrayToInt(alleTasterArray);
        P1 = alleTaster;
    }
}

// Testroutine 6: Port 4 als Ausgabe testen (mit Zusatzplatine)
void testRoutine06(void)
{
    P4 = 0;
    while (1)
    {
        for (int i = 0; i < 10; i++)
        {
            P4[i] = 1;
            timer5s();
            P4[i] = 0;
        }
    }
}

// Testroutine 7: Port 4 als Eingabe testen (mit Zusatzplatine)
void testRoutine07(void)
{
    while (1)
    {
        P1 = P4;
    }
}

// Testroutine 8: Externer Interrupt an einem der vier Ports (P0.0 bis P0.3) testen
void testRoutine08(void)
{
    initInterrupt();
}

// Testroutine 9: Counter funktion testen
void testRoutine09(void)
{
    while (1)
    {
        // Inkrementiert den Counter wenn man K1 betätigt
        T0 = K1;
        P1 = TL1 + (TH1 << 8);
    }
}

// Einfache Stringzuweisung, da ich die genauen Adressen nicht kenne
sbit dipBit3 = "P0.4";
sbit dipBit2 = "P0.3";
sbit dipBit1 = "P0.2";
sbit dipBit0 = "P0.1";

void main()
{
    int testModus;
    int bitArray[4];
    initTimerAndCounter();

    while (1)
    {
        bitArray = {dipBit3, dipBit2, dipBit1, dipBit0};
        testModus = bitArrayToInt(bitArray);
        switch (testModus)
        {
        case 1:
            testRoutine01();
        case 2:
            testRoutine02();
        case 3:
            testRoutine03();
        case 4:
            testRoutine04();
        case 5:
            testRoutine05();
        case 6:
            testRoutine06();
        case 7:
            testRoutine07();
        case 8:
            testRoutine08();
        case 9:
            testRoutine09();
        }
    }

    return;
}
