# [856. Score of Parentheses](https://leetcode.cn/problems/score-of-parentheses/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`String`](https://leetcode.com/tag/string/)
* [`Stack`](https://leetcode.com/tag/stack/)

</details>
<br />

Given a balanced parentheses string `s`, return *the **score** of the string*.

The **score** of a balanced parentheses string is based on the following rule:

 + `"()"` has score `1`.
 + `AB` has score `A + B`, where `A` and `B` are balanced parentheses strings.
 + `(A)` has score `2 * A`, where `A` is a balanced parentheses string.
 

**Example 1:**

    Input: s = "()"
    Output: 1

**Example 2:**

    Input: s = "(())"
    Output: 2

**Example 3:**

    Input: s = "()()"
    Output: 2

**Constraints:**

 + `2 <= s.length <= 50`
 + `s` consists of only `'('` and `')'`.
 + `s` is a balanced parentheses string.
