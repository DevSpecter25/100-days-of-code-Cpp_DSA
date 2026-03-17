# Day 5 – LeetCode 136: Single Number

## Problem
Given a non-empty array of integers, every element appears twice except for one.  
Find that single one.

Problem : LeetCode 136 : Single number

---

## Approach

My approach:

1. Sort the array.
2. Traverse the array in pairs.
3. Compare adjacent elements:
   - If elements are different → that element is the answer.
4. If all pairs match, return the last element.

---

## Code

File : single_number.cpp
