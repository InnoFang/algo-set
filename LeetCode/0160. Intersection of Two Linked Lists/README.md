# [160. Intersection of Two Linked Lists](https://leetcode-cn.com/problems/intersection-of-two-linked-lists/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`Linked List`](https://leetcode.com/tag/linked-list/)
* [`Hash Table`](https://leetcode.com/tag/hash-table/)

</details>
<br />

# Solution

如果你把两个链表的数字结合起来看的话，就可以发现很有意思的一点，比如

```
a1 -> a2 -> a3 \
                c1 -> c2 -> c3
      b1 -> b2 /
```

链表 A 为 `[a1, a2, a3, c1, c2, c3]`

链表 B 为 `[b1, b2, c1, c2, c3]`

A 在前 B 在后，`[a1, a2, a3, c1, c2, c3, b1, b2, c1, c2, c3]`

B 在前 A 在后, `[b1, b2, c1, c2, c3, a1, a2, a3, c1, c2, c3]`

你会发现，两者长度相等（这是废话~），并且如果两个链表有交集，那么在最后相同的部分在同一位置

那么解题思路就有了，同时遍历两个链表，但是不同的时候，如果其中一个链表遍历完后，要接着从第二个链表开始继续遍历

**为什么要这样呢？** 其实就是模拟把两个链表结合起来遍历的过程

**那么什么时候停止呢？** 当 A 链表的指针和 B 链表的指针相同时就会跳出循环

**一定会跳出循环吗？** 是的，首先长度相同，如果链表没有交集，那么最后的结尾都是 null 跳出循环；如果有交集，那么根据上面的分析，一定在最后的位置某处遇到相同点。
