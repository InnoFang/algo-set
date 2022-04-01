# [954. Array of Doubled Pairs](https://leetcode-cn.com/problems/array-of-doubled-pairs/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Greedy`](https://leetcode.com/tag/greedy/)
* [`Array`](https://leetcode.com/tag/array/)
* [`Hash Table`](https://leetcode.com/tag/hash-table/)
* [`Sorting`](https://leetcode.com/tag/sorting/)

</details>
<br />

Given an integer array of even length `arr`, return *`true` if it is possible to reorder arr such that `arr[2 * i + 1] = 2 * arr[2 * i]` for every `0 <= i < len(arr) / 2`, or `false` otherwise*.

**Example 1:**

```
Input: arr = [3,1,3,6]
Output: false
```

**Example 2:**

```
Input: arr = [2,1,2,6]
Output: false
```

**Example 3:**

```
Input: arr = [4,-2,2,-4]
Output: true
Explanation: We can take two groups, [-2,-4] and [2,4] to form [-2,-4,2,4] or [2,4,-2,-4].
``` 

**Constraints:**

 + `2 <= arr.length <= 3 * 10^4`
 + `arr.length` is even.
 + `-10^5 <= arr[i] <= 10^5`
