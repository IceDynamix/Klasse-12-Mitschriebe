# Relationale Datenbanken

> Tabellarische Darstellung

- [Relationale Datenbanken](#relationale-datenbanken)
    - [Aufbau](#aufbau)
    - [Relation](#relation)
    - [Entity-Relationship Modell](#entity-relationship-modell)
    - [Operationen an relationalen Datenbanken](#operationen-an-relationalen-datenbanken)
    - [Vorteile](#vorteile)
    - [Nachteile](#nachteile)

## Aufbau

| Konzept          | Beispiel Bücher                 |
| ---------------- | ------------------------------- |
| Entitätstyp      | Bucher                          |
| Entität          | Buch (Zeile einer Tabelle)      |
| Attribut         | Titel, Autor... (Spalten)       |
| Attributwert     | Harry Potter (Zellen)           |
| Primärschlüsssel | ISBN                            |
| Entitätsmenge    | Alle Bücher                     |
| Fremdschlüssel   | Verliehene "Bücher" an "Kunden" |

## Relation

- Kunde
    - **ID**
    - Name
    - Vorname
    - Ort

-- 1:M --

- Buch
    - **ISBN**
    - Titel
    - Autor

1:1 Beziehung auch möglich

M:M Beziehung nur über Umwege

## Entity-Relationship Modell

$\big[\text{Kunde}\big] {}^1$---------$\big<\text{leiht aus}\big>$---------${}^M\big[\text{Buch}\big]$

## Operationen an relationalen Datenbanken

| Operation    | Binäres Konzept |
| ------------ | --------------- |
| Union        | OR              |
| Intersection | AND             |
| Differenz    | XOR             |

- CREATE
- DROP
- ALTER

## Vorteile

- schneller als objekt-orientierte DBMS und objekt-relationale DBMS
- verhinder Mehrfachabspeicherung durch ID
- relationale Algebra

## Nachteile

- Kann keine objekt-orientierte Strukturen oder komplexe Datentypen benutzen
- Daten müssen ggf. erst zusammengesetzt werden
- Nicht skalierbar
