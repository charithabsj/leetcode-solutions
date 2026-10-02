## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
The code uses a stack to store opening brackets and removes them when a matching closing bracket is found. If the stack is empty at the wrong time, the string is invalid.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
This is a classic stack problem. The most important edge case is when a closing bracket appears before any opening bracket, or when the bracket types do not match.
