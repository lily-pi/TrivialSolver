# TrivialSolver
A trivial equation solver written in C++.

## Explanation

The TrivialSolver is a brute-force reduction algorithm. It centers around succesively attempting all possible reduction routes until a suitable "simplicity" is acheived.

### The $\delta$ function

Consider some expression $E = (e_1, e_2, e_2, \cdots, e_n)$. In general, the "complexity" of $E$ is given by the sum of the individual sub-complexity terms $e_1, \cdots, e_n$. A repeated operation is given by the identity, $\delta(f \circ g) = \delta(f) \times \delta(g)$. For example, the expression $x + 2 = 0$ has a complexity of $2$. A more complicated expression, $x^2 + 2 = 0$ has a complexity of $4$, and similarly $\cos(2x) + 1 = 0$ has complexity $\delta(\cos)\delta(2x) + \delta(1) + \delta(0) = 30$.

| Value | Expression |
| ----- | ---------- |
|   0   |     $0$    |
|   1   |$\mathbb{R}$|
| 1 | $x$ or any indeterminate |
| $a^2$ | $x^a$ |
| 2 | $ax$ |
| 4 | $abx$ |
| 15 | $\sin(x), \cos(x)$ |
| 10 | $e^x$ |
