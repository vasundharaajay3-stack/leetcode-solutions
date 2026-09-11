# Best Time to Buy and Sell Stock

## Problem

Given an array of stock prices, find the maximum profit that can be achieved by buying on one day and selling on a later day.

## Link

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum price seen so far.

- Start with the first price as the minimum price.
- For each following price, update the minimum price if it is smaller.
- Calculate the profit by subtracting the minimum price from the current price.
- Keep track of the maximum profit found.
- Return the maximum profit.

## Complexity

**Time Complexity:** O(n)

**Space Complexity:** O(1)

## Notes

- The stock must be bought before it is sold.
- If no profit is possible, return 0.
- Two local test cases were tested before submitting to LeetCode.
- LeetCode submission was Accepted.