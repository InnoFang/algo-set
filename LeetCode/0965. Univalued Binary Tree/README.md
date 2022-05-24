# [965. Univalued Binary Tree](https://leetcode.cn/problems/univalued-binary-tree/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Binary Tree`](https://leetcode.com/tag/binary-tree/) 
* [`Tree`](https://leetcode.com/tag/tree/)
* [`Breadth-first Search`](https://leetcode.com/tag/breadth-first-search/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)

</details>
<br />

A binary tree is **uni-valued** if every node in the tree has the same value.

Given the `root` of a binary tree, return *`true` if the given tree is **uni-valued**, or `false` otherwise*.

**Example 1:**

![](https://assets.leetcode.com/uploads/2018/12/28/unival_bst_1.png)

    Input: root = [1,1,1,1,1,null,1]
    Output: true
**Example 2:**

![](https://assets.leetcode.com/uploads/2018/12/28/unival_bst_2.png)

    Input: root = [2,2,2,5,2]
    Output: false
 

**Constraints:**

 + The number of nodes in the tree is in the range `[1, 100]`.
 + `0 <= Node.val < 100`
