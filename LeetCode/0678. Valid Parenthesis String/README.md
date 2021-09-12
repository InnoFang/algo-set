# [678. Valid Parenthesis String](https://leetcode-cn.com/problems/valid-parenthesis-string/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Stack`](https://leetcode.com/tag/stack/)
* [`Greedy`](https://leetcode.com/tag/greedy/)
* [`String`](https://leetcode.com/tag/string/)
* [`Dynamic Programming`](https://leetcode.com/tag/dynamic-programming/)

</details>
<br />

Given a string `s` containing only three types of characters: `'('`, `')'` and `'*'`, return *true if `s` is **valid***.

The following rules define a **valid** string:

 + Any left parenthesis `'('` must have a corresponding right parenthesis `')'`.
 + Any right parenthesis `')'` must have a corresponding left parenthesis `'('`.
 + Left parenthesis `'('` must go before the corresponding right parenthesis `')'`.
 + `'*'` could be treated as a single right parenthesis `')'` or a single left parenthesis `'('` or an empty string `""`.
 

**Example 1:**

```
Input: s = "()"
Output: true
```

**Example 2:**

```
Input: s = "(*)"
Output: true
```

**Example 3:**

```
Input: s = "(*))"
Output: true
```

**Constraints:**

 + `1 <= s.length <= 100`
 + `s[i]` is `'('`, `')'` or `'*'`.
