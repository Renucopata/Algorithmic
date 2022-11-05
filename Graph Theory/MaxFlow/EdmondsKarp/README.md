## Edmonds Karp algorithm
The Edmonds-Karp Algorithm is a specific implementation of the Ford-Fulkerson algorithm. Like Ford-Fulkerson, Edmonds-Karp is also an algorithm that deals with the max-flow min-cut problem.

Ford-Fulkerson is sometimes called a method because some parts of its protocol are left unspecified. Edmonds-Karp, on the other hand, provides a full specification. Most importantly, it specifies that breadth-first search should be used to find the shortest paths during the intermediate stages of the program.

Edmonds-Karp improves the runtime of Ford-Fulkerson.

This improvement is important because it makes the runtime of Edmonds-Karp independent of the maximum flow of the network.


![Edmonds Karp](https://cp-algorithms.com/graph/Flow5.png)

### References
https://brilliant.org/wiki/edmonds-karp-algorithm/


