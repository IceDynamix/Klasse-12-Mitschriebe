# Verknüpfungen

```c
// P0 = 0b00011101
// P1 = 0b01101100
```

## Logische Verknüpfungen

|  &&   | \|\|  |   !   |
| :---: | :---: | :---: |
|  UND  | ODER  | NICHT |

```c
if (P0 > 128 && P1 < 128)
    LED = 1;
else
    LED = 0;
```

## Bitweise Verknüpfung

|   &   |  \|   |   ~   |   ^   |
| :---: | :---: | :---: | :---: |
|  UND  | ODER  | NICHT |  XOR  |

```c
LEDs = P0 & P1; // LEDs = 0b00001100
```
