# Allgemeine Datenbanken

> Elektronisches Verwaltungssystem

- [Allgemeine Datenbanken](#allgemeine-datenbanken)
    - [Geschichte](#geschichte)
    - [Aufbau](#aufbau)
        - [Datenbankmanagementsystem (DBMS)](#datenbankmanagementsystem-dbms)
            - [Funktionen des DBMS](#funktionen-des-dbms)
        - [Datenbank (DB)](#datenbank-db)
    - [Vorteile von Datenbanken gegenüber flachen Dateien](#vorteile-von-datenbanken-gegen%c3%bcber-flachen-dateien)
    - [Beispiele](#beispiele)

## Geschichte

- 1960 Konzept, hierarchisch und netzwerkarting
- 1970 erstes relationales DBMS
- 1980 relationale verdrängen hierarchische und netzwerkartige Systeme
    - IT wird darauf umgestellt
- 1990 DBMS Monopol
- 2000 Open-Source DBMS erlangen größere Marktanteile

## Aufbau

- Datenbanksystem
    - Datenbankmanagementsystem (DBMS)
    - Datenbank (DB)

### Datenbankmanagementsystem (DBMS)

- Zwischengeschaltete Software zwischen Anwender und Datenbank
- Verwaltung der Datenbank
- Zugriff auf daten nur über DBMS möglich
- Enthält Struktur und Puffer
- <!-- missing -->

#### Funktionen des DBMS

- Save/Del/Overwrite von Daten
- Verwalten der Strukturen einer Datenbank
- Orga der Daten am Modell
- Definition von Datentypen und Attributen
- Datenbankoperationen für lesenden/schreibenden Zugriff und für Suche
- Sicherstellung der Sicherheit und Datenschutz
- Sicherstellung der Datenintegrität
- Kommunikationsschnittstellen für Mehrbenutzerzugriff
- Optimierung der Datenbank für Geschwindigkeit
- DBMS stellt Statistiken über Params/Technik etc.

### Datenbank (DB)

- Nichtflüchtige Speichermedien
    - HDD, SSD, nicht RAM etc.
- Unsichtbar für Benutzer und Anwendungssysteme
- Zugriff auf Daten nur über DBMS möglich
- Konsistenz der Daten

## Vorteile von Datenbanken gegenüber flachen Dateien

- Daten können an andere Systeme weitergegeben werden
- Einfache Verarbeitung großer Datenmengen
- Splittung der Daten auf mehrere Dateien
    - Redundanz der Daten, Teilsicherung möglich
- Auslagen der rechenintensiven Operation auf Server
    - Client bleibt schnell, vereinfacht Skalierbarkeit
- Zugriff nur auf benötigten Datensatz
    - Zeitgleiche Collaboration
- Permission Management
    - Datensicherheit erhöht und Kontrolle vereinfacht

## Beispiele

- Oracle
- MySQL
- Microsoft SQL Server
- PostgreSQL
- mongoDB
- IDM DB2
