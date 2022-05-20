# [462. Minimum Moves to Equal Array Elements II](https://leetcode.cn/problems/minimum-moves-to-equal-array-elements-ii/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Sorting`](https://leetcode.com/tag/sorting/)
* [`Math`](https://leetcode.com/tag/math/)

</details>
<br />

Given an integer array `nums` of size `n`, return *the minimum number of moves required to make all array elements equal*.

In one move, you can increment or decrement an element of the array by `1`.

Test cases are designed so that the answer will fit in a **32-bit** integer.

**Example 1:**

    Input: nums = [1,2,3]
    Output: 2
    Explanation:
    Only two moves are needed (remember each move increments or decrements one element):
    [1,2,3]  =>  [2,2,3]  =>  [2,2,2]

**Example 2:**

    Input: nums = [1,10,2,9]
    Output: 16

**Constraints:**

 + `n == nums.length`
 + `1 <= nums.length <= 10^5`
 + `-10^9 <= nums[i] <= 10^9`
