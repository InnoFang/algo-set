# [844. Backspace String Compare](https://leetcode-cn.com/problems/backspace-string-compare/

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Stack`](https://leetcode.com/tag/stack/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`String`](https://leetcode.com/tag/string/)
* [`Simulation`](https://leetcode.com/tag/simulation/)

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
