# Homogene elektrische Felder

Homogene elektrische Felder befinden sich zwischen zwei unterschiedlich geladenen Platten. (Siehe [Plattenkondensator](2020-02-21_Plattenkondensator.md))

Homogen: In jedem Punkt zwischen den Platten ist die Kraft auf eine Ladung gleich.

## Energie

Man kann zeigen, dass das elektrische Feld zwischen zwei unterschiedlich geladenen Metallplatten homogen ist. Das heißt, auf eine Probeladung wird an jedem Punkt zwischen den Platten die gleiche Kraft. Das Feldlinienbild einer solchen Ladungsanordnung lässt sich mit der in [Energie](2020-02-21_Energie.md) genannten Simulation erzeugen. Die Anordnung von zwei Metallkörpern, die unterschiedlich geladen sind, bezeichnet man aus Kondensator. Sind die Metallkörper parallele Platten, nennt man diesen Plattenkondensator.

## Potential

$$
\text{Potential} = \frac{\text{potentielle Energie der Ladung im Feld}}{\text{Ladung}}
$$

$$
\phi = \frac{E_{pot}}{q} = \frac{q \cdot E \cdot s}{q} = E \cdot s
$$

$$
[\phi] = 1 \frac{J}{C}
$$

Das Potential ist unabhängig von der Ladung, es hängt nur noch vom Ort und dem elektrischen Feld ab.

Um eine Ladung zu bewegen, muss sie die Strecke $d$ (den Plattenabstand) verschoben werden. Das Potenzial an der oberen Platte ist also $\phi(\text{oben}) = E \cdot d$.

## Spannung

Wird eine Ladung $q$ im elektrischen Feld bewegt, ändert sich ihre elektrische Energie. Der Quotient der Energieänderung $\Delta E_{AB}$ bei der Bewegung zwischen dem Anfangspunkt $A$ und dem Endpunkt $B$ und der Ladung heißt Spannung $U$ zwischen $A$ und $B$.

$$
U_{AB} = \frac{\Delta E_{AB}}{q} = \frac{E \cdot s_{B} - E \cdot s_{A}}{q} = E \cdot (s_B - s_A)
$$

Damit ist die Spannung gleich der Potentialdifferenz
$$
U = \phi(B) - \phi(A)
$$

Die Einheit des Spannung ist Volt: $V = \frac{J}{C}$

Für die Spannung zwischen den Platten eines Plattenkondensators gilt für das Potential an der unteren Platte $\phi(\text{unten}) = 0$. Somit ergibt sich als Spannung zwischen den Platten des Kondensators.

$$
U = \phi(oben) - \phi(unten) = E \cdot d
$$
