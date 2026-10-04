# Best Time to Buy and Sell Stock

## Approach

Track the minimum price seen so far and calculate the profit for each later price. Keep the maximum profit found.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Notes

The stock must be bought before it is sold, so the minimum price is updated while scanning from left to right.
