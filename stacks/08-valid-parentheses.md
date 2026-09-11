# Valid Parentheses

## Problem

Given a string containing brackets `()`, `[]`, and `{}`, determine whether the brackets are valid and correctly matched.

## Link

https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets.

* Push every opening bracket onto the stack.
* When a closing bracket is found, check whether it matches the most recent opening bracket.
* If it does not match, the string is invalid.
* At the end, the stack must be empty for the string to be valid.

## Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(n)

## Notes

* A stack is used to match opening and closing brackets.
* Two local test cases were tested before submitting to LeetCode.
* LeetCode submission was Accepted.
