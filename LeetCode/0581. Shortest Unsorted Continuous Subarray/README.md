# [581. Shortest Unsorted Continuous Subarray](https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)


<details>
<summary>Topics</summary>

* [`Stack`](https://leetcode.com/tag/stack/)
* [`Greedy`](https://leetcode.com/tag/greedy/)
* [`Array`](https://leetcode.com/tag/array/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`Sorting`](https://leetcode.com/tag/sorting)
* [`Monotonic Stack`](https://leetcode.com/tag/monotonic-stack/)

</details>
<br />

Given an integer array `nums`, you need to find one **continuous subarray** that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

Return *the shortest such subarray and output its length*.

**Example 1:**

```
Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
```

**Example 2:**

```
Input: nums = [1,2,3,4]
Output: 0
```

**Example 3:**

```
Input: nums = [1]
Output: 0
```

**Constraints:**

 + `1 <= nums.length <= 10^4`
 + `-10^5 <= nums[i] <= 10^5`
 

**Follow up:** Can you solve it in `O(n)` time complexity?

