# [560. Subarray Sum Equals K](https://leetcode.cn/problems/subarray-sum-equals-k/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Prefix Sum`](https://leetcode.com/tag/prefix-sum/)
* [`Hash Table`](https://leetcode.com/tag/hash-table/)

</details>
<br />

Given an array of integers `nums` and an integer `k`, return *the total number of subarrays whose sum equals to `k`*.

A subarray is a contiguous **non-empty** sequence of elements within an array.

**Example 1:**

    Input: nums = [1,1,1], k = 2
    Output: 2

**Example 2:**

    Input: nums = [1,2,3], k = 3
    Output: 2

**Constraints:**

 + `1 <= nums.length <= 2 * 10^4`
 + `-1000 <= nums[i] <= 1000`
 + `-10^7 <= k <= 10^7`
