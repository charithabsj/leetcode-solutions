## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach
This solution checks every pair of numbers in the array until it finds two values that add up to the target. It is simple to understand and works well for small arrays.

### Complexity
- Time: O(n^2)
- Space: O(1)

### Notes
A cleaner approach for large inputs is to use a hash map to store seen values and their indexes. This reduces lookup time, but the double-loop version is easier to write and reason about for beginners.
