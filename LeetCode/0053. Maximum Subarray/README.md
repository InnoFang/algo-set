# [53. Maximum Subarray](https://leetcode-cn.com/problems/maximum-subarray/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Divide and Conquer`](https://leetcode.com/tag/divide-and-conquer/)
* [`Dynamic Programming`](https://leetcode-cn.com/tag/dynamic-programming/)

</details>
<br />

Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return *its sum*.

**Follow up**: If you have figured out the `O(n)` solution, try coding another solution using the **divide and conquer** approach, which is more subtle.

 

**Example 1:**

```
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
```

**Example 2:**
```
Input: nums = [1]
Output: 1
```

**Example 3:**

```
Input: nums = [0]
Output: 0
```

**Example 4:**

```
Input: nums = [-1]
Output: -1
```

**Example 5:**

```
Input: nums = [-2147483647]
Output: -2147483647
```

**Constraints:**

 + `1 <= nums.length <= 2 * 10^4`
 + `-2^31 <= nums[i] <= 2^31 - 1`
