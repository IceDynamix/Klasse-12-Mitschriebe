# Relationale Datenbanken

- Daten werden in Tabellen erfasst
- Jede Zeile einer Tabelle entspricht einem Datensatz
- Eine Entität einer Datenbank einer relationalen Datenbank entspricht einem Datensatz
    - Die Entität beschreibt ein Objekt, eine Sache, ein Ding etc.
- Tabellen haben Beziehungen zueinander über Schlüsselattribute#
- In relationalen Datenbanken unterscheidet man Fremd- und Primärschlüssel

| id <sup>Primärschlüssel</sup> | Name <sup>Attribut einer Entität</sup> | Vorname <sup>Attribut einer Entität</sup> | $\dots$ |
| :---------------------------: | -------------------------------------- | ----------------------------------------- | ------- |
|               0               | Mustermann                             | Max                                       |         |
|               1               | Musterfrau                             | Maxi                                      |         |
|           $\vdots$            | $\vdots$                               | $\vdots$                                  |         |

## Primärschlüssel

- Identifiziert einen Datensatz eindeutig

## Fremdschlüssel

- Beschreibt eine Beziehung $(1:\text{n})$ zu einer Tabelle, in der dieses Schlüsselattribut ein Primärschlüssel ist

### Person

| id <sup>Primärschlüssel</sup> | Name       | $\dots$ |
| ----------------------------: | ---------- | ------- |
|                             1 | Mustermann | $\dots$ |

### Parkplatz

|   id | Pos            | PersNr <sup>Fremdschlüssel</sup> | $\dots$ |
| ---: | -------------- | -------------------------------: | ------- |
|    1 | Innenhof links |                                3 | $\dots$ |
|    2 | Innenhof links |                                1 | $\dots$ |
|    3 | Straße         |                                1 | $\dots$ |

## Relationenschreibweise

- Person(**id**, Name, Vorname, $\dots$)
- Parkplatz(**id**, Pos, *PersNr*, $\dots$)

Primärschlüssel **fett**

Fremdschlüssel *kursiv*
