# Valid Anagram

## Problem

Given two strings, determine whether one string is an anagram of the other.

## Link

https://leetcode.com/problems/valid-anagram/

## Approach

Use a frequency array of size 26.

- Increase the count for each character in the first string.
- Decrease the count for each character in the second string.
- If all counts become 0, the two strings are anagrams.
- Otherwise, they are not anagrams.

## Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(1)

## Notes

- The strings contain lowercase English letters.
- A frequency array is used to count characters.
- Two local test cases were tested before submitting to LeetCode.
- LeetCode submission was Accepted.