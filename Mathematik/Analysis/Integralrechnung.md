# Integralrechnung

## Stammfunktion

Umkehrung der Ableitung

|   Funktion    |      Stammfunktion       |
| :-----------: | :----------------------: |
|    $ax^n$     | $\frac{(ax)^{n+1}}{n+1}$ |
|  $-\sin(x)$   |        $\cos(x)$         |
| $\frac{1}{x}$ |   $\ln(\vert x \vert)$   |

$U(a,b,h) = \sum_{i=0}^{n-1} h \cdot f(a+ih)$

$O(a,b,h) = \sum_{i=1}^{n} h \cdot f(a+ih)$

$h = \frac{b-a}{n}$

## Bestimmtes Integral

Eine Funktion $f$ heißt integrierbar auf $[a;b]$, wenn der Grenzwert $n \rightarrow \inf$ der Untersumme $U(a,b,n)$, so wie der Grenzwert der Obersumme O(a,b,n) beide existieren und gleich sind.
Man nennt

$$
\lim\limits_{n \rightarrow \inf} (O(a,b,n)) = \lim\limits_{n \rightarrow \inf} (U(a,b,n)) = \int_a^b f(x) dx
$$

das **bestimmte** Integral von $a$ bis $b$. Dabei heißen $a$ und $b$ die Integrationsgrenzen. $x$ ist die Integrationsvariable und die Funktion $f$ ist der Integrant.

Für das Beispiel $f(x) = 25-x^2$ ist die Stammfunktion $F(x) = 25x - \frac{x^3}{3}$. In der Schreibweise

$$
\int_a^b f(x) dx = \bigg[F(x) \bigg] _a^b = F(b) - F(a)
$$

gilt für das Intervall $[0;5]$

$$
\begin{aligned}
    \int_0^5 f(x) dx &= \bigg[F(x) \bigg] _0^5 \\
    &= F(5) - F(0) \\
    &= 125 - \frac{125}{3} = \frac{250}{3}
\end{aligned}
$$

Nächstes Beispiel: $f(x) = -x^2$ für $[-2;2]$

$$
F(x) = \frac{-x^3}{3} \\

\begin{aligned}
    A &= F(2) - F(-2) \\
      &= \frac{-8}{3} - \frac{8}{3} \\
      &= \frac{-16}{3}
\end{aligned}
$$

Flächeninhalt ist immer positiv $\rightarrow \frac{16}{3}\text{FE}$

## Eigenschaften von Integralen

- Der Betrag des Integrals, die Maßzahl des Flächeninhalts zwischen dem Graphen $f$ und der x-Achse

- Für $f(x) > 0$ auf $[a;b]$ ist $\int_a^b f(x) dx > 0$

- Umgekehrt gilt das Gleiche auch für $f(x) < 0$

- Die Intervalladditivität $\int_a^b f(x) dx + \int_b^c f(x) dx = \int_a^c f(x) dx$

- Für $k \in \mathbb{R}: \quad \int_a^b k\;dx = (b-a) \cdot k$

- $f_1$ und $f_2$ seien zwei auf $[a;b]$ definierte Funktionen, wenn für alle $x \in [a;b]$ gilt $f_1(x) \leq f_2(x)$, dann gilt auch $\int_a^b f_1(x)\;dx \leq \int_a^b f_2(x)\;dx$

- $\int_a^b k \cdot f(x)\;dx = k \cdot \int_a^b f(x)\;dx$

- $\int_a^b f(x) \; dx = -\int_b^a f(x) \; dx$

- $\int_a^b f(x) \; dx \pm \int_a^b g(x) \; dx = \int_a^b f(x) \pm g(x) \; dx$

## Unbestimmtes Integral

Die Funktion $I_a(x) = \int_a^x f(t)\; dt$ heißt Integralfunktion zu $f$. $I_a(x)$ ist eine Stammfunktion zu $f$. Oft nutzt man eine Kurzschreibweise $F(x) = \int f(x)\; dx$. Sie ist formal nicht 100%ig richtig, aber man weiß was gemeint ist. Das $F(a)$ in der Funktion wird als $c$ geschrieben, da diese konstant bleibt für beliebig $x$.
