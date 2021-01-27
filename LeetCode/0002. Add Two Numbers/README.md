# [2. Add Two Numbers](https://leetcode-cn.com/problems/add-two-numbers/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Recursion`](https://leetcode.com/tag/recursion/)
* [`Linked List`](https://leetcode.com/tag/linked-list/)
* [`Math`](https://leetcode.com/tag/math/)

</details>
<br />

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

**Example 1:**
![](https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg)

```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
```

**Example 2:**
```
Input: l1 = [0], l2 = [0]
Output: [0]
```

**Example 3:**
```
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
```

**Constraints:**

 + The number of nodes in each linked list is in the range `[1, 100]`.
 + `0 <= Node.val <= 9`
 + It is guaranteed that the list represents a number that does not have leading zeros.
