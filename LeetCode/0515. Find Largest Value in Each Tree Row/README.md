# [515. Find Largest Value in Each Tree Row](https://leetcode.cn/problems/find-largest-value-in-each-tree-row/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Binary Tree`](https://leetcode.com/tag/binary-tree/)
* [`Tree`](https://leetcode.com/tag/tree/)
* [`Breadth-first Search`](https://leetcode.com/tag/breadth-first-search/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)

</details>
<br />

Given the `root` of a binary tree, return *an array of the largest value in each row* of the tree (**0-indexed**).

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/08/21/largest_e1.jpg)

    Input: root = [1,3,2,5,3,null,9]
    Output: [1,3,9]

**Example 2:**

    Input: root = [1,2,3]
    Output: [1,3]

**Constraints:**

 + The number of nodes in the tree will be in the range `[0, 10^4]`.
 + `-2^31 <= Node.val <= 2^31 - 1`
