# [938. Range Sum of BST](https://leetcode-cn.com/problems/range-sum-of-bst/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Tree`](https://leetcode-cn.com/tag/tree/)
* [`Depth-first Search`](https://leetcode-cn.com/tag/depth-first-search/)
* [`Recursion`](https://leetcode-cn.com/tag/recursion/)

</details>
<br />

Given the `root` node of a binary search tree, return *the sum of values of all nodes with a value in the range `[low, high]`*.

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/11/05/bst1.jpg)

```
Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
Output: 32
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/11/05/bst2.jpg)

```
Input: root = [10,5,15,3,7,13,18,1,null,6], low = 6, high = 10
Output: 23
```

**Constraints:**

 + The number of nodes in the tree is in the range `[1, 2 * 104].`
 + `1 <= Node.val <= 10^5`
 + `1 <= low <= high <= 10^5`
 + All `Node.val` are **unique**.

