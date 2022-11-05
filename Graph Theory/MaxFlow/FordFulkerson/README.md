## Ford Fulkerson algorithm
Given a graph which represents a flow network where every edge has a capacity. Also given two vertices source ‘s’ and sink ‘t’ in the graph, find the maximum possible flow from s to t with following constraints:

Flow on an edge doesn’t exceed the given capacity of the edge.
Incoming flow is equal to outgoing flow for every vertex except s and t.

Ford-Fulkerson Algorithm 

 The following is simple idea of Ford-Fulkerson algorithm:

1) Start with initial flow as 0.
2) While there is a augmenting path from source to sink.Add this path-flow to flow.
3) Return flow.

![Forf Fulkerson](https://static.javatpoint.com/tutorial/daa/images/ford-fulkerson-algorithm2.png)

### References
https://www.geeksforgeeks.org/ford-fulkerson-algorithm-for-maximum-flow-problem/
https://www.youtube.com/watch?v=LdOnanfc5TM


