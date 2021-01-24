# [110. Balanced Binary Tree](https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Tree`](https://leetcode.com/tag/tree/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)
* [`Recursion`](https://leetcode.com/tag/recursion/)

</details>
<br />

Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

> a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/10/06/balance_1.jpg)

```
Input: root = [3,9,20,null,null,15,7]
Output: true
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/10/06/balance_2.jpg)

```
Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
```

**Example 3:**
```
Input: root = []
Output: true
```

**Constraints:**

 + The number of nodes in the tree is in the range `[0, 5000]`.
 + `-10^4 <= Node.val <= 10^4`
