# Binary Search

## Problem

Given a sorted array of integers and a target value, find the index of the target. Return -1 if the target is not found.

## Link

https://leetcode.com/problems/binary-search/

## Approach

Use binary search with two pointers.

- `left` starts at the beginning of the array.
- `right` starts at the end.
- Find the middle index.
- If the middle element is the target, return its index.
- If the middle element is smaller than the target, search the right half.
- Otherwise, search the left half.
- Return -1 if the target is not found.

## Complexity

**Time Complexity:** O(log n)

**Space Complexity:** O(1)

## Notes

- Binary search requires a sorted array.
- Two local test cases were tested before submitting to LeetCode.
- LeetCode submission was Accepted.