# Reverse a String

## Problem

Reverse a string in-place.

## Link

https://leetcode.com/problems/reverse-string/

## Approach

Use two pointers:
- `left` starts from the first character.
- `right` starts from the last character.
- Swap the characters at `left` and `right`.
- Move `left` forward and `right` backward.
- Continue until the two pointers meet.

## Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(1)

## Notes

- The string is reversed in-place.
- Two pointers are used for swapping.
- Local test cases were tested before submitting to LeetCode.