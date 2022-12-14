# Binary/Dicotomy search
Given the problem: 
A sorted array arr[] of n elements, write a function to search a given element x in arr[] and return the index of x in the array.

Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). 

Binary Search Algorithm: The basic steps to perform Binary Search are:

Begin with the mid element of the whole array as a search key.
If the value of the search key is equal to the item then return an index of the search key.
Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
Otherwise, narrow it to the upper half.
Repeatedly check from the second point until the value is found or the interval is empty.
Binary Search Algorithm can be implemented in the following two ways:

Iterative Method

Recursive Method

![Binary Search](https://mikebuss.com/assets/images/posts/binary-search/BinarySearch.png)

### References
https://www.geeksforgeeks.org/binary-search/
https://www.youtube.com/watch?v=P3YID7liBug