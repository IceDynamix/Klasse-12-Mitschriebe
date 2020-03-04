# RC51 Cheatsheet

## Interrupts in C

|             |       | Bit 7 |  Bit 6  |  Bit 5  |  Bit 4  | Bit 3 | Bit 2 | Bit 1 | Bit 0 |
| :---------: | :---: | :---: | :-----: | :-----: | :-----: | :---: | :---: | :---: | :---: |
| IE-Register |       |  EA   | $\dots$ | $\dots$ | $\dots$ |  ET0  |  EX1  |  ET0  |  EX0  |

Bsp.: ISR_EX1

```c
void ISR_EX1(void) interrupt 2
{

}
```
