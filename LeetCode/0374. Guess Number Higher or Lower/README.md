# [374. Guess Number Higher or Lower](https://leetcode-cn.com/problems/guess-number-higher-or-lower/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Binary Search`](https://leetcode-cn.com/tag/binary-search/)

</details>
<br />

We are playing the Guess Game. The game is as follows:

I pick a number from `1` to `n`. You have to guess which number I picked.

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API `int guess(int num)`, which returns 3 possible results:

 = `-1`: The number I picked is lower than your guess (i.e. `pick < num`).
 = `1`: The number I picked is higher than your guess (i.e. `pick > num`).
 = `0`: The number I picked is equal to your guess (i.e. `pick == num`).
Return *the number that I picked*.

**Example 1:**

```
Input: n = 10, pick = 6
Output: 6
```

**Example 2:**

```
Input: n = 1, pick = 1
Output: 1
```

**Example 3:**

```
Input: n = 2, pick = 1
Output: 1
```

**Example 4:**

```
Input: n = 2, pick = 2
Output: 2
```

**Constraints:**

 + `1 <= n <= 2^31 - 1`
 + `1 <= pick <= n`
