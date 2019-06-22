# [Linked List Cycle](https://leetcode-cn.com/problems/linked-list-cycle/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>

<summary style="color:#4FC3F7">Topics</summary>

* [`Linked List`](https://leetcode.com/tag/linked-list/)

* [`Two Pointerss`](https://leetcode.com/tag/two-pointers/)

</details>

<br />

Given a linked list, determine if it has a cycle in it.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

**Example 1:**

```
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the second node.
```

![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png)

**Example 2:**

```
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the first node.
```

![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png)


**Example 3:**

```
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
```

![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png)
 

**Follow up:**

Can you solve it using O(1) (i.e. constant) memory?