# [368. Largest Divisible Subset](https://leetcode-cn.com/problems/largest-divisible-subset/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Math`](https://leetcode-cn.com/tag/math/)
* [`Dynamic Programming`](https://leetcode-cn.com/tag/dynamic-programming/)

</details>
<br />

Given a set of **distinct** positive integers `nums`, return the largest subset `answer` such that every pair `(answer[i], answer[j])` of elements in this subset satisfies:

 + `answer[i] % answer[j] == 0`, or
 + `answer[j] % answer[i] == 0`

If there are multiple solutions, return any of them.

**Example 1:**

```
Input: nums = [1,2,3]
Output: [1,2]
Explanation: [1,3] is also accepted.
```

**Example 2:**

```
Input: nums = [1,2,4,8]
Output: [1,2,4,8]
```

**Constraints:**

 + `1 <= nums.length <= 1000`
 + `1 <= nums[i] <= 2 * 10^9`
 + All the integers in `nums` are **unique**.
