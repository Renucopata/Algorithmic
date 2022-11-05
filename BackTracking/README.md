# BACKTRACKING


Solution Methods:

1.Brute Force -> Try every path (complete search)
2.Greedy -> (Always assumes that it's correct)
3.Dynamic Programming -> (Divide and conquer) Resursion and iterations

        Brute Force
            | 
 Recursion    BACKTRACKING
     |              |

Every case    Delete the branches/wrong solutions

- We already have the solutions that work's and the ones that don't.
- If i have a goal and one on of the branches if i follow that path i will already contain a wrong answer i can delete all the
possible branches that follow the one that ruin the answer, that way we save time by not exploring all the branches.

This is an algorithmic technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point in time (by time, here, is referred to the time elapsed till reaching any level of the search tree).  Backtracking can also be said as an improvement to the brute force approach. So basically, the idea behind the backtracking technique is that it searches for a solution to a problem among all the available options.  Initially, we start the backtracking from one possible option and if the problem is solved with that selected option then we return the solution else we backtrack and select another option from the remaining available options. There also might be a case where none of the options will give you the solution and hence we understand that backtracking won’t give any solution to that particular problem. We can also say that backtracking is a form of recursion. This is because the process of finding the solution from the various option available is repeated recursively until we don’t find the solution or we reach the final state. So we can conclude that backtracking at every step eliminates those choices that cannot give us the solution and proceeds to those choices that have the potential of taking us to the solution.
![Backtracking](https://cdn.programiz.com/sites/tutorial2program/files/ba-state-space-tree.png)

### References
https://www.geeksforgeeks.org/introduction-to-backtracking-data-structure-and-algorithm-tutorials/#:~:text=Backtracking%20can%20be%20defined%20as,search%20for%20a%20feasible%20solution.
https://www.youtube.com/watch?v=DKCbsiDBN6c
