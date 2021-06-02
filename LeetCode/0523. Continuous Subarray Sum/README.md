# [523. Continuous Subarray Sum](https://leetcode-cn.com/problems/continuous-subarray-sum/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Math`](https://leetcode-cn.com/tag/math/)
* [`Dynamic Programming`](https://leetcode-cn.com/tag/dynamic-programming/)

</details>
<br />

Given an integer array `nums` and an integer `k`, return *`true` if `nums` has a continuous subarray of size **at least two** whose elements sum up to a multiple of `k`, or `false` otherwise*.

An integer `x` is a multiple of `k` if there exists an integer `n` such that `x = n * k`. `0` is **always** a multiple of `k`.

**Example 1:**

```
Input: nums = [23,2,4,6,7], k = 6
Output: true
Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
```

**Example 2:**

```
Input: nums = [23,2,6,4,7], k = 6
Output: true
Explanation: [23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.
```

**Example 3:**

```
Input: nums = [23,2,6,4,7], k = 13
Output: false
```

**Constraints:**

 + `1 <= nums.length <= 10^5`
 + `0 <= nums[i] <= 10^9`
 + `0 <= sum(nums[i]) <= 2^31 - 1`
 + `1 <= k <= 2^31 - 1`
