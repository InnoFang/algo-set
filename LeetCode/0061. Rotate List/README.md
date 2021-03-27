# [61. Rotate List](https://leetcode-cn.com/problems/rotate-list/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Two Pointers`](https://leetcode-cn.com/tag/two-pointers/)
* [`Linked List`](https://leetcode-cn.com/tag/linked-list/)

</details>
<br />

Given the `head` of a linked list, rotate the list to the right by `k` places.

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/11/13/rotate1.jpg)

```
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/11/13/roate2.jpg)

```
Input: head = [0,1,2], k = 4
Output: [2,0,1]
```

**Constraints:**

 + The number of nodes in the list is in the range `[0, 500]`.
 + `-100 <= Node.val <= 100`
 + `0 <= k <= 2 * 10^9`
