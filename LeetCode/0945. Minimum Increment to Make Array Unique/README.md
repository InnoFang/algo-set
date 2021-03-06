# [945. Minimum Increment to Make Array Unique](https://leetcode-cn.com/problems/minimum-increment-to-make-array-unique/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)

</details>
<br />

Given an array of integers A, a move consists of choosing any `A[i]`, and incrementing it by `1`.

Return the least number of moves to make every value in `A` unique.

 

**Example 1:**

    Input: [1,2,2]
    Output: 1
    Explanation:  After 1 move, the array could be [1, 2, 3].

**Example 2:**

    Input: [3,2,1,2,1,7]
    Output: 6
    Explanation:  After 6 moves, the array could be [3, 4, 1, 2, 5, 7].
    It can be shown with 5 or less moves that it is impossible for the array to have all unique values.

**Note:**

 1. 0 <= A.length <= 40000
 2. 0 <= A[i] < 40000
