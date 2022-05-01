# [1305. All Elements in Two Binary Search Trees](https://leetcode-cn.com/problems/all-elements-in-two-binary-search-trees/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Binary Search Tree`](https://leetcode.com/tag/binary-search-tree/)
* [`Tree`](https://leetcode.com/tag/tree/)
* [`Breadth-first Search`](https://leetcode.com/tag/breadth-first-search/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)
* [`Sorting`](https://leetcode.com/tag/sorting/)

</details>
<br />

Given two binary search trees `root1` and `root2`, return *a list containing all the integers from both trees sorted in **ascending** order*.

**Example 1:**

![](hhttps://assets.leetcode.com/uploads/2019/12/18/q2-e1.png)

    Input: root1 = [2,1,4], root2 = [1,0,3]
    Output: [0,1,1,2,3,4]

**Example 2:**

![](https://assets.leetcode.com/uploads/2019/12/18/q2-e5-.png)

    Input: root1 = [1,null,8], root2 = [8,1]
    Output: [1,1,8,8]

**Constraints:**

 + The number of nodes in each tree is in the range `[0, 5000]`.
 + `-10^5 <= Node.val <= 10^5`
