# Valid Parentheses

## Approach

Use a stack to store opening brackets. For every closing bracket, check whether it matches the most recent opening bracket.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)

## Notes

The string is valid only when every closing bracket matches correctly and the stack is empty at the end.
