## Problem: Move Zeroes (Easy-Medium)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
The code keeps a write index for non-zero values and fills the array from the front. After that, any remaining positions are set to zero.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
This is an in-place solution, so it does not need extra array space. The key idea is to preserve the relative order of the non-zero numbers.
