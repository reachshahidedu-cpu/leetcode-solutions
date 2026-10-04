# Valid Anagram

## Approach

Use an array of 26 counters. Increase the count for each character in the first string and decrease it for each character in the second string.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Notes

If all 26 character counts are zero, the two strings are anagrams.
