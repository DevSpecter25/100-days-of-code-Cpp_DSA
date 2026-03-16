# Day 3 – Codeforces Problem (1100 Rating)

## Problem
D. Monster Game

In this problem, we are given:
- `n` swords with strengths `a[i]`
- `n` levels of monsters requiring `b[i]` strikes to defeat

Each sword can only be used once. If we choose difficulty `x`, swords with strength less than `x` cannot be used.

The final score is:

score = difficulty × number of levels completed

The goal is to choose `x` such that the score is maximized.

Problem Source: Codeforces

---

## Approach

My approach was:

1. Sort the sword strengths.
2. For each possible sword strength `a[i]`, treat it as the difficulty.
3. Simulate how many monster levels can be completed with the available swords.
4. Calculate the score:

score = a[i] × levels_completed

5. Store all possible scores and take the maximum.

---

## Concepts Practiced

- Sorting
- Greedy thinking
- Simulation of constraints
- Working with multiple test cases
- Handling large inputs

---

## Issue Faced

The solution works correctly for most test cases but fails due to **Time Limit Exceeded (TLE)** in one of the tests.

Reason:
- The algorithm uses multiple nested loops.
- This results in roughly **O(n²)** complexity in the worst case.
- Given that `n` can be up to `2 × 10^5`, this becomes too slow.

---

## What I Learned

- Correct logic is not always enough in competitive programming.
- Time complexity is critical when constraints are large.
- Need to think about more efficient strategies (prefix sums / greedy / optimized counting).

---

## Code

The implementation for my attempt is stored in:

`Monster_Game.cpp`

---

## Reflection

Although the solution did not fully pass due to time limits, solving most cases helped build intuition for handling constraints and thinking about algorithm efficiency.
Failures like this are part of improving in competitive programming.
