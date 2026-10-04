# Longest Common Prefix

## Approach

Start with the first string as the prefix. Compare it with each following string and shorten the prefix until it matches.

## Complexity

- Time Complexity: O(n × m)
- Space Complexity: O(1) excluding the returned string

## Notes

If the prefix becomes empty, there is no common prefix.
