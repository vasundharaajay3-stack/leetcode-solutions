# Move Zeroes

## Problem

Given an integer array, move all zeroes to the end while maintaining the relative order of the non-zero elements.

## Link

https://leetcode.com/problems/move-zeroes/

## Approach

Use a `position` variable to keep track of where the next non-zero element should be placed.

- Traverse the array.
- Whenever a non-zero element is found, place it at `position`.
- Increase `position`.
- After all non-zero elements are placed, fill the remaining positions with zeroes.

## Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(1)

## Notes

- The relative order of non-zero elements is maintained.
- The array is modified in-place.
- Two local test cases were tested before submitting to LeetCode.
- LeetCode submission was Accepted.