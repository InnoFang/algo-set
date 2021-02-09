# [992. Subarrays with K Different Integers](https://leetcode-cn.com/problems/subarrays-with-k-different-integers/)

![](https://img.shields.io/badge/Difficulty-Hard-red.svg)


<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Hash Table`](https://leetcode.com/tag/hash-table/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`Sliding Window`](https://leetcode.com/tag/sliding-window/)

</details>

Given an array `A` of positive integers, call a (contiguous, not necessarily distinct) subarray of `A` *good* if the number of different integers in that subarray is exactly `K`.

(For example, `[1,2,3,1,2]` has 3 different integers: `1`, `2`, and `3`.)

Return the number of good subarrays of `A`.

**Example 1:**

```
Input: A = [1,2,1,2,3], K = 2
Output: 7
Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2].
```

**Example 2:**

```
Input: A = [1,2,1,3,4], K = 3
Output: 3
Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].
```

**Note:**

 1. `1 <= A.length <= 20000`
 2. `1 <= A[i] <= A.length`
 3. `1 <= K <= A.length`
