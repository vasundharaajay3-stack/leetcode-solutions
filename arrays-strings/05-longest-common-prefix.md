# Longest Common Prefix

## Problem

Find the longest common prefix shared by all strings in an array of strings.

## Link

https://leetcode.com/problems/longest-common-prefix/

## Approach

Compare the characters of all strings at the same position.

- Start from the first character of the first string.
- Compare it with the corresponding character in every other string.
- Continue while all strings have the same character.
- Stop when a character differs or one string ends.
- The characters found before that point form the longest common prefix.

## Complexity

**Time Complexity:** O(n × m)

**Space Complexity:** O(1)

## Notes

- The prefix must be common to every string.
- If there is no common prefix, return an empty string.
- Two local test cases were tested before submitting to LeetCode.
- LeetCode submission was Accepted.