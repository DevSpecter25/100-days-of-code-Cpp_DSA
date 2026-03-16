# Day 4 – Binary Search

## Topic
Binary Search

## Problem
Given an array of numbers and a target value, determine whether the target exists in the array.

Binary search works only on **sorted arrays**, so the first step was sorting the input array.

## Approach

1. Read the size of the array.
2. Store the elements in a vector.
3. Sort the array.
4. Use two pointers:
   - `f` → first index
   - `l` → last index
5. Find the middle element:
   
   m = f + (l - f) / 2

6. Compare the middle element with the target:
   - If equal → target found
   - If middle < target → search right half
   - If middle > target → search left half

7. Continue until the element is found or the search space becomes empty.

## Time Complexity

Sorting: O(n log n)

Binary Search: O(log n)

Overall Complexity: O(n log n)

## What I Learned

- Binary search is much faster than linear search for large datasets.
- It repeatedly halves the search space.
- The array must be sorted before applying binary search.
- The formula `f + (l - f) / 2` prevents integer overflow.

## Code

File: Binary_search.cpp