# Hierarchische Datenbank

- [Hierarchische Datenbank](#hierarchische-datenbank)
    - [Geschichte](#geschichte)
    - [Aufbau](#aufbau)
    - [Beispiel: Linux](#beispiel-linux)
    - [Vorteile](#vorteile)
    - [Nachteile](#nachteile)

## Geschichte

- Erstes Datenbankmodell
- Von IBM in 1960er entwickelt
- Relationale DBen haben schnell verdrängt
- XML popularisiertes dieses Modell etwas wieder
- Wird noch für Dateisysteme oder grographische Daten verwendet

## Aufbau

- Umgedrehter Baum
- Dateisystem wie z.B. in Windows
    - Aber keine Verknüpfungen!
- Hat eine Wurzel, welcher der Ursprung ist
    - Jeder Record-Typ kann nur einen Parent haben, nicht mehr nicht weniger
    - Parent Records können beliebig viele Children haben
    - Parents Records können aber auch keine Children haben (Blatt)

$\rightarrow$ 1:n

## Beispiel: Linux

- /
    - /bin
        - /bash
        - /cat
        - /vim
    - /home
        - /karl
        - /hans
        - /peter

## Vorteile

- Aufbau sehr einfach, verständlich und nutzerfreundlich
- Jeder ist damit vertraut

## Nachteile

- Keine Verknüfungen möglich (1:n)
- Ohne Ordnung kann viel Chaos entstehen
- Suche von bestimmten Children nicht optimiert bzw. extrem langsam
- Veränderung einer Struktur relativ schwer
