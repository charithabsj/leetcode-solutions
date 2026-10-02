## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
The code keeps track of the lowest price seen so far and compares each later price to it. The biggest difference becomes the best profit.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
This is a classic one-pass optimization. I learned that the best time to sell is always after the lowest price seen so far, so we never need to compare every pair.
