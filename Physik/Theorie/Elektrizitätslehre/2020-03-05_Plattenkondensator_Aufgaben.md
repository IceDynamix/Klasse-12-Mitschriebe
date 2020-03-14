# Plattenkondensator Aufgaben

Bei diesen einfachen Aufgaben verwendet man die Kondensatorformel $Q = C \cdot u$ und die Formel für die Kapazität eines luftgefüllten Plattenkondensators $C = \epsilon_0 \frac{A}{d}$. Die Kondensatorformel verbindet die drei Größen Ladung, Kapazität und Spannung. Bei allen Experimenten und Aufgaben ist in der Regel eine Größe fest. Beim Lösen der Aufgaben muss man sich klar machen, welche das ist.

## Kapazität eines Plattenkondensators

### Aufgabe 1

> Gegeben ist ein Plattenkondensator mit quadratischen Platten, die eine Seitenlänge von 10cm haben. Der Plattenabstand ist 1mm.

> Berechnen Sie die Kapazität des Kondensators

$$
\begin{aligned}
    C &= \epsilon_0 \cdot \frac{A}{d} \\
      &= 8.85 \cdot 10^{-12} \frac{F}{m} \cdot \frac{0.01m^2}{0.001m} \\
      &= 8.85 \cdot 10^{-12} \cdot \frac{10^{-2}}{10^{-3}}F \\
      &= 8.85 \cdot 10^{-11}F
\end{aligned}
$$

> Welche Ladung wird auf die Platten übertragen, wenn der Kondensator auf 12V geladen wird? Welcher Anzahl von Elementarladungen entspricht die Ladung?

$$
\begin{aligned}
    Q &= C \cdot U \\
      &= 8.85 \cdot 10^{-11}F \cdot 12V \\
      &\approxeq 10^{-9}C
\end{aligned}
$$

$$
\begin{aligned}
    n &= \frac{Q}{e} \\
      &= \frac{10^{-9}C}{1.602 \cdot 10^{-19}C} \\
      &= 6.24 \cdot 10^9
\end{aligned}
$$

> Der Kondensator wird mit einer Spannung von 12V geladen

Nehme Q aus der vorherigen Teilaufgabe, Q ist konstant

<!-- missing -->

### Aufgabe 2

> Im Unterricht wurde die Einheit von $\epsilon_0$ auch als $[\epsilon_0] = 1 \frac{A \cdot s}{V \cdot m}$ angegeben. Zeige, dass die im WTR angegebene Einheit für $\epsilon_0$ auch richtig ist. Verwende dazu die Kondensatorformel.

$$
\begin{aligned}
                         C &= \epsilon_0 \frac{A}{d} \\
                         Q &= C \cdot U \\
             \rightarrow C &= \frac{Q}{U} \\
    \epsilon_0 \frac{A}{d} &= \frac{Q}{U} \\
                \epsilon_0 &= \frac{Q}{U} \cdot \frac{d}{A} \\
              [\epsilon_0] &= \frac{[Q]}{[U]} \cdot \frac{[d]}{[A]} \\
     &= \frac{F}{m}
\end{aligned}
$$

### Aufgabe 3

> Ein Supercap ist im Prinzip ein Plattenkondensator. Allerdings sind die elektrischen Platten wie im Bild dargestellt aufgewickelt. Dazwischen befindet sich eine Isolator schicht. Der Abstand der Platten beträgt nur einige Nanometer. Wie man sich anhand der langen Entwicklungszeit vorstellen kann, ist das "Innenleben" eines solchen Kondensators kompliziert und es kann im Unterricht nicht näher darauf eingegangen werden.

> Nennen Sie drei anwendungen von Supercaps

<!-- missing -->

> Welche Plattenfläche häte ein "echter" Plattenkondensator (Plattenabstand 5mm) mit einer Kapazität von $C = 1F$? Vergleichen Sie mit der Fläche eines Fußballfeldes. Schätzen Sie fehlende Größen sinnvoll ab.

## Elektrisches Feld eines Plattenkondensators

### Aufgabe 1

> Welche Aussagen kann man über das Feld im Inneren eines Plattenkondensators treffen?

- [ ] Die Feldlinien sind alle parallel
- [ ] Die elektrische Feldstärke ist überall gleich groß
- [ ] Die elektrische Feldkraft hat überall die gleiche Richtung
- [ ] Die Feldlinien haben alle den gleichen Abstand
- [ ] In Plattennähe sind die Feldkräfte größer als in der Mitte zwischen den Platten

<!-- solution missing -->

> Zwischen zwei unterschiedlich geladenen Platten hängt eine Rasierklingen bifilar (an zwei dünnen Fäden). Sie ist positiv geladen.

- [x] Das elektrische Feld übt auf die Klinge eine Kraft in Richtung der negativen Platte aus
- [ ] Das elektrische Feld übt auf die Klinge eine Kraft in Richtung der positiven Platte aus

> Die Platten werden mit gleichbleibendem Plattenabstand verschoben, so dass sich die Rasierklinge der negativ geladenen Platte nähert.

- [ ] Die Auslenkung der Rasierklinge wird größer
- [ ] Die Auslenkung der Rasierklinge wird kleiner
- [x] Die Auslenkung der Rasierklinge ändert sich nicht

### Aufgabe 2

> Gegeben ist ein Plattenkondensator mit quadratischen Platten, die eine Seitenlänge von $10cm$ haben. Der Plattenabstand ist $1mm$. Die Platten tragen eine Ladung von $Q = 1nC$. Berechne die Kraft des elektrischen Feldes zwischen den Platten.

### Aufgabe 3

<!-- missing -->

### Aufgabe 4

> Eine negativ geladene Wolke in 400m Höhe bildet zusamme mit dem Erdboden einen Plattenkondensator (Fläche einer "Platte" $8km^2$). Die Ladung der Wolke beträgt $Q = 8.5C$. Das elektrische Feld zwischen Erde und WOlke ist so hoch, dass eine ENtladung durch die Luft unmittelbar bevorsteht.

> Hinweis: Die Masse $m$ eines Wassertropfen lässt sich mit der Dichte $\rho$ aus dem Volumen $V$ des Tröpfchens berechnen. $\rho = \frac{m}{V}$. Es gilt $\rho_{Wasser} = 1 \frac{g}{m^2}$ und $V_{Kugel} = \frac{4}{3} \pi \cdot r^3$

> Berechne die Stärke des elektrischen Feldes

$$
Q = 8.5C;\qquad A = 8000000m^2; \qquad \epsilon_0 = 9 \cdot 10^{-12}
$$

$$
\begin{aligned}
    E &= \frac{1}{\epsilon_0} \cdot \frac{Q}{A} \\
      &= 118056 \frac{V}{m}
\end{aligned}
$$

> Berechne die Ladung, die ein kugelförmiges Wassertröpfchen mit 2mm Durchmesser haben müsste, wenn es vor Entladung dieser und der Erde bei Windstille gerade schweben würde. (Der Auftrieb in Luft ist zu vernachlässigen.) (Kontrollergebnis: $q = 3.4 \cdot 10^{-10}As$)

$$
\begin{aligned}
    E &= 118056 \frac{V}{m} \\
    d &= 0.002m \\
    V_{Wasser} &= \frac{4}{3}\pi r^3 \\
               &= \frac{4}{3}\pi (\frac{d}{2})^3 \\
    m_{Wasser} &= V_{Wasser} \cdot 1000 \frac{kg}{m^3} \\
    F_{Erde \rightarrow Wasser} &= m_{Wasser} \cdot 9.81 \frac{m}{s^2}
\end{aligned}
$$

Der Wassertropfen schwebt ja, daher $F_{E \rightarrow q} = F_{Erde \rightarrow Wasser}$

$$
\begin{aligned}
    E &= \frac{F_{E \rightarrow q}}{q} &|& \cdot q \\
    E \cdot q &= F_{E \rightarrow q} &|& :E \\
    q &= \frac{F_{E \rightarrow q}}{E}
\end{aligned}
$$

$$
\begin{aligned}
    q &= \frac{m_{Wasser} \cdot 9.81 \frac{m}{s^2}}{E} \\
      &= \frac{(V_{Wasser} \cdot 1000 \frac{kg}{m^3}) \cdot 9.81 \frac{m}{s^2}}{E} \\
      &= \frac{((\frac{4}{3}\pi (\frac{d}{2})^3) \cdot 1000 \frac{kg}{m^3}) \cdot 9.81 \frac{m}{s^2}}{E} \\
      &= \frac{((\frac{4}{3}\pi (\frac{0.002}{2})^3) \cdot 1000 \frac{kg}{m^3}) \cdot 9.81 \frac{m}{s^2}}{118056 \frac{V}{m}} \\
      &= 3.48 \cdot 10^{-10}
\end{aligned}
$$

> Berechne, wie lange die Entladung der Wolke dauern würde, wenn die mittlere Stromstärke des Blitzes $4.0kA$ betragen würde.

$$
\begin{aligned}
    Q &= 8.5C \\
    I &= 4.0kA &=& \frac{\Delta Q}{\Delta t} \\
    \Delta t &= \frac{\Delta Q}{I} &=& \frac{8.5C}{4000A} \\
    &= 0.002125s &=& 2ms \\
\end{aligned}
$$

> Betrachtet wird wieder das Wassertröpfchen. Durch einen Blitz wird die Wolke geladen. Erklären Sie, warum das Tröpfchen zu fallen beginnt. Berechnen Sie die Fallgeschwindigkeit und Strecke. Begründen Sie, warum das Tröpfchen nach einer gewissen Zeit mit konstanter Geschwindigkeit fällt.

$$
\begin{aligned}
    t &= 1s \\
    g &= 9.81 \frac{m}{s^2} \\
    v &= g \cdot t \\
      &= 9.81 \frac{m}{s} \\
    s &= \frac{1}{2} \cdot g \cdot t^2 \\
      &= 4.90m
\end{aligned}
$$
