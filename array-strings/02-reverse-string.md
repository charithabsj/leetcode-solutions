## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach
The code swaps characters from the left side and right side of the string until they meet in the middle. This reverses the string in place without needing extra memory.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
This is a good example of using two pointers. The main thing to watch is not to accidentally modify the null terminator or go past the string bounds.
