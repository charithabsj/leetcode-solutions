## Problem: Reverse a Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
The code walks through the list with three pointers: previous, current, and next. Each step changes the current node's next pointer to point backward, reversing the list.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
This is one of the cleanest pointer-based problems. The key is to save the next node before changing links, otherwise the list would be lost.
