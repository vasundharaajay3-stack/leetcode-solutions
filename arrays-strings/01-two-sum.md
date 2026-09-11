# Two Sum

## Problem

Given an array of integers and a target value, find two numbers whose sum is equal to the target and return their indices.

## Link

https://leetcode.com/problems/two-sum/

## Approach

Use two nested loops to check every possible pair of elements.

For each pair:
- Add the two numbers.
- Compare the sum with the target.
- If they are equal, return their indices.

## Complexity

**Time Complexity:** O(n²)

**Space Complexity:** O(1)

## Notes

- The indices of the two numbers are returned.
- The same element cannot be used twice.
- Local test cases were tested before submitting to LeetCode.