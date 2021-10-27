# [301. Remove Invalid Parentheses](https://leetcode-cn.com/problems/remove-invalid-parentheses/)

![](https://img.shields.io/badge/Difficulty-Hard-red.svg)


<details>
<summary>Topics</summary>

* [`Backtracking`](https://leetcode.com/tag/backtracking/)
* [`String`](https://leetcode.com/tag/string/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)

</details>
<br />

Given a string `s` that contains parentheses and letters, remove the minimum number of invalid parentheses to make the input string valid.

Return *all the possible results. You may return the answer in **any order***.

**Example 1:**

```
Input: s = "()())()"
Output: ["(())()","()()()"]
```

**Example 2:**

```
Input: s = "(a)())()"
Output: ["(a())()","(a)()()"]
```

**Example 3:**

```
Input: s = ")("
Output: [""]
```

**Constraints:**

 + `1 <= s.length <= 25`
 + `s` consists of lowercase English letters and parentheses `'('` and `')'`.
 + There will be at most `20` parentheses in `s`.
