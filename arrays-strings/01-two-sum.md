# Two Sum

## Approach

Use two nested loops to check every possible pair of elements. If the sum of the two elements equals the target, return their indices.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1) excluding the returned result

## Notes

The second loop starts from the element after the current first element, so the same pair is not checked twice.
