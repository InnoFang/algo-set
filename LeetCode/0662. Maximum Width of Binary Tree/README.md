# [662. Maximum Width of Binary Tree](https://leetcode.cn/problems/maximum-width-of-binary-tree/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Binary Tree`](https://leetcode.com/tag/binary-tree/)
* [`Tree`](https://leetcode.com/tag/tree/)
* [`Breadth-first Search`](https://leetcode.com/tag/breadth-first-search/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)

</details>
<br />

Given the `root` of a binary tree, return *the **maximum width** of the given tree*.

The **maximum width** of a tree is the maximum **width** among all levels.

The **width** of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.

It is **guaranteed** that the answer will in the range of a **32-bit** signed integer.

 
**Example 1:**

![](https://assets.leetcode.com/uploads/2021/05/03/width1-tree.jpg)

    Input: root = [1,3,2,5,3,null,9]
    Output: 4
    Explanation: The maximum width exists in the third level with length 4 (5,3,null,9).

**Example 2:**

![](https://assets.leetcode.com/uploads/2021/05/03/width2-tree.jpg)

    Input: root = [1,3,2,5,null,null,9,6,null,7]
    Output: 7
    Explanation: The maximum width exists in the fourth level with length 7 (6,null,null,null,null,null,7).

**Example 3:**

![](https://assets.leetcode.com/uploads/2021/05/03/width3-tree.jpg)

    Input: root = [1,3,2,5]
    Output: 2
    Explanation: The maximum width exists in the second level with length 2 (3,2).
 

**Constraints:**

+ The number of nodes in the tree is in the range `[1, 3000]`.
+ `-100 <= Node.val <= 100`
