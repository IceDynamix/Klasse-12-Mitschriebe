# Tangentengleichung

## Wenn der Punkt auf der Funktion liegt:

- $y_t = f'(x_0)(x-x_0)+f(x_0)$
- Für die Normalengleichung einfach:
- $y_t = \frac{-1}{f'(x_0)} (x-x_0)+f(x_0)$
- Für $x_0$ einfach den gegeben x-Wert des Punktes einsetzen
- Formel vereinfachen

## Wenn der Punkt nicht auf der Funktion liegt:

- $y = f'(x_0)(x-x_0)+f(x_0)$
- In der Formel für $x$ (nicht $x_0$) die x-Koordinate des gegebenen Punktes und für y (auf der linken Seite der Gleichung) die y-Koordinate des Punktes einsetzen
- Auf Nullstellen auflösen
- Wenn der Funktionsgrad = 2, dann pq oder abc-Formel
- Wenn der Funktionsgrad >= 3, dann Nullstelle erraten und Horni bis man auf Funktionsgrad 2 kommt, dann pq bzw. abc
    - *Prüfungen sind aber nicht sadistisch genug um uns die Nullstellen von Funktionen mit Grad 4 oder höher berechnen zu lassen also wird er wahrscheinlich nur Grad 3 nehmen wie in Aufgabe 4*
- Die Nullstellen jeweils für x_0 in $y = f'(x_0)(x-x_0)+f(x_0)$ einsetzen
- Für jede Nullstelle gibt es dann eine Tangentengleichung

## Beispiel Aufgabenstellung

> Berechne eine Tangente von $f(x) = (x^2 - 2)(x^2 + 3)$ im Punkt $P_0(-1 | -4)$.

### Schauen, ob der Punkt auf der Funktion liegt

$$
f(-1) = -1 * 4 = -4
$$

$\rightarrow P_0$ liegt auf $f$

### Ableitungen berechnen

$$
\begin{aligned}
    f(x) &= (x^2 - 2)(x^2 + 3) \\
         &= x^4 + 3x^2 - 2x^2 - 6 \\
         &= x^4 + x^2 - 6
\end{aligned}
$$

$f'(x) = 4x^3 + 2x$

### Tangentengleichung einsetzen

$$
\begin{aligned}
    y &= f'(u)(x-u)+f(u) \\
      &= (4u^3 + 2u)(x-u) + (u^4 + u^2 - 6)
\end{aligned}
$$

Im Punkt $P_0$ ist $x = x_0$, in der Tangentengleichung steht $u$ für $x_0$.

$u = x_0 = (-1)$.

$$
\begin{aligned}
    y &= (4u^3 + 2u)(x - u) &+& (u^4 + u^2 - 6) \\
      &= (4(-1)^3 + 2(-1))(x - (-1)) &+& ((-1)^4 + (-1)^2 - 6) \\
      &= (- 4 - 2)(x + 1) &+& (1 - 1 - 6) \\
      &= -6(x + 1) &-& 4 \\
      &= -6x - 6 - 4 \\
      &= -6x - 10 \\
\end{aligned}
$$
