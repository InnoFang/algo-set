# [18. 4Sum](https://leetcode-cn.com/problems/4sum/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)

</details>
<br />

Given an array `nums` of `n` integers, return *an array of all the **unique** quadruplets `[nums[a], nums[b], nums[c], nums[d]]`* such that:

 + `0 <= a, b, c, d < n`
 + `a`, `b`, `c`, and `d` are **distinct**.
 + `nums[a] + nums[b] + nums[c] + nums[d] == target`

You may return the answer in **any order**.

 

**Example 1:**

```
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
```

**Example 2:**

```
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
```

**Constraints:**

 + `1 <= nums.length <= 200`
 + `-10^9 <= nums[i] <= 10^9`
 + `-10^9 <= target <= 10^9`
