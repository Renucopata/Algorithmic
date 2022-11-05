## Edit Distance

This problem is about finding the least amount of "edits" that must be done to convert a StringA to a StringB.
To achieve this we have 3 main operations:
1)Add a letter
2)Delete a letter
3)Edit a letter

For example:

Input: str1 = "geek", str2 = "gesek".
Output: 1
Explanation: You can add 's'.

Input: str1 = "cat", str2 = "cut".
Output: 1
Explanation: You can replace 'a' with 'u'.

Input: str1 = "sunday", str2 = "saturday".
Output: 3
Explanation: Replace 'n' with 'r', add t and add a