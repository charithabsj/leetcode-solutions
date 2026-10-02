## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
The code starts with the first string as the current prefix and shortens it as it checks each next string. It keeps only the part that still matches every word.

### Complexity
- Time: O(total characters checked)
- Space: O(1) extra space, excluding the output string

### Notes
If the list is empty, the function should return an empty string. A more advanced version could compare characters column by column, but this version is simple and easy to follow.
