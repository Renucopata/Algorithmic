This data structure, resolve problems where you have, for example, to find the sum of elements from index l to r where 0 <= l <= r <= n-1
And then change the value of a specified element of the array to a new value x. We need to do arr[i] = x where 0 <= i <= n-1.
In other words, you have to get the result of an operationapplied to an specific range on an array, and then you want to update the array with different values and therefore the result.

## Representation

Leaf Nodes are the elements of the input array. 
Each internal node represents some merging of the leaf nodes. The merging may be different for different problems. For this problem, merging is sum of leaf nodes under a node.
An array representation of tree is used to represent Segment Trees. For each node at index i, the left child is at index (2*i+1), right child at (2*i+2) and the parent is at  (⌊(i – 1) / 2⌋).

![Segment tree](https://en.algorithmica.org/hpc/data-structures/img/segtree-path.png)

We start with a segment arr[0 . . . n-1]. and every time we divide the current segment into two (if it has not yet become a segment of length 1), and then call the same procedure on both halves, and for each such segment, we store the sum in the corresponding node. 
All levels of the constructed segment tree will be completely filled except the last level. Also, the tree will be a Full Binary Tree because we always divide segment in two, at every level. Since the constructed tree is always a full binary tree with n leaves, there will be n-1 internal nodes. So the total number of nodes will be 2*n – 1.

