# []()

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)
![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)
![](https://img.shields.io/badge/Difficulty-Hard-red.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Backtracking`](https://leetcode.com/tag/backtracking/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`String`](https://leetcode.com/tag/string/)
* [`Linked List`](https://leetcode.com/tag/linked-list/)
* [`Binary Search`](https://leetcode.com/tag/binary-search/)
* [`Hash Table`](https://leetcode.com/tag/hash-table/)
* [`Bit Manipulation`](https://leetcode.com/tag/bit-manipulation/)
* [`Dynamic Programming`](https://leetcode.com/tag/dynamic-programming/)
* [`Math`](https://leetcode.com/tag/math/)
* [`Greedy`](https://leetcode.com/tag/greedy/)
* [`Trie`](https://leetcode.com/tag/trie/)
* [`Stack`](https://leetcode.com/tag/stack/)
* [`Sort`](https://leetcode.com/tag/sort)
* [`Binary Search Tree`](https://leetcode.com/tag/binary-search-tree/)
* [`Tree`](https://leetcode.com/tag/tree/)
* [`Breadth-first Search`](https://leetcode.com/tag/breadth-first-search/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)
* [`Union Find`](https://leetcode.com/tag/union-find/)
* [`Divide and Conquer`](https://leetcode.com/tag/divide-and-conquer/)
* [`Heap`](https://leetcode.com/tag/heap/)
* [`Graph`](https://leetcode.com/tag/graph/)

</details>
<br />

Given two strings `s` and `t`, return *`true` if they are equal when both are typed into empty text editors*. `'#'` means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

**Example 1:**

```
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
```

**Example 2:**

```
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
```

**Example 3:**

```
Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
```

**Constraints:**

 + `1 <= s.length, t.length <= 200`
 + `s` and `t` only contain lowercase letters and `'#'` characters.
 

**Follow up:** Can you solve it in `O(n)` time and `O(1)` space?
