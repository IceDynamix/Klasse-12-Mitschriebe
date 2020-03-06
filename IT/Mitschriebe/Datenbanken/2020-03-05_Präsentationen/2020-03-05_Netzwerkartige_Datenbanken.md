# Netzwerkartige Datenbanken

> Hierarchisch aber freier

- [Netzwerkartige Datenbanken](#netzwerkartige-datenbanken)
    - [Geschichte](#geschichte)
    - [Aufbau](#aufbau)
    - [Vorteile](#vorteile)
    - [Nachteile](#nachteile)
    - [Vergleich zur hierarchischen Datenbank](#vergleich-zur-hierarchischen-datenbank)
    - [Heute](#heute)

## Geschichte

- Fast zeitgleich zu relationalen Datenbanken
- Sprachen DPL

## Aufbau

- Mehrere Datensätze
- Haben einen bestimmten Typ
- Sind miteinander verknüpft
- m:n Beziehungen möglich
    - Zusammenhänge viel leichter erkennbar
- Nahezu jedes Datenset als Einstiegspunkt nutzbar
    - Suche ist schneller
- Nutzt Pointer für Verlinkungen, keine IDs

## Vorteile

- Verschiedene Suchwege möglich
    - Kann schneller zu Daten gelangen
- m:n Beziehung
    - Vernetzung
    - Viele Möglichkeiten für Nutzer und Anwendungsentwickler

## Nachteile

- Kann schnell unübersichtlich werden
- Implementierung und Ausbau kann schwer und komplizert sein
- Komplikationen können entstehen
    - "Jeder Weg führt nach Rom, aber nicht jeder ist der schnellste"

## Vergleich zur hierarchischen Datenbank

- Keine feste Struktur
- m:n
    - hierarchisch hat nur 1:n
- hierarisch ist übersichlicher
    - Wenn Entwickler und Nutzer sich abstimmen, dann ist es generell schneller

## Heute

- Fast gar nicht mehr benutzt
    - Nur von großen Firmen benutzt
    - Großer Aufwand
    - Hardware wurde besser, Geschwindigkeit war weniger ein Fokus
    - Geschwindgkeitsvorteil sieht man erst bei sehr großen Datenmengen
    - Relationale Datenbanken sind viel einfacher zu managen
- Internet ist *sozusagen* eine netzwerkartige Datenbank
