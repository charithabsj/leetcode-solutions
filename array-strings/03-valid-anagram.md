## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
The solution counts each character in the first string and subtracts the count for the second string. If all counts end at zero, the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
This works well because the input is lowercase English letters. If the alphabet were larger or unknown, a hash map would be a more general solution.
