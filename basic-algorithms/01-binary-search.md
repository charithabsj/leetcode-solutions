## Problem: Binary Search (Easy-Medium)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
The solution keeps a left and right pointer and checks the middle element each time. Depending on whether the target is smaller or larger, it moves one side and keeps searching.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
This only works when the array is sorted. I learned that cutting the search space in half each step is much faster than checking every element one by one.
