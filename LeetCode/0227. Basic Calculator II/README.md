# [227. Basic Calculator II](https://leetcode-cn.com/problems/basic-calculator-ii/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Stack`](https://leetcode-cn.com/tag/stack/)
* [`String`](https://leetcode-cn.com/tag/string/)

</details>
<br />

Given a string `s` which represents an expression, *evaluate this expression and return its value*. 

The integer division should truncate toward zero.


**Example 1:**

```
Input: s = "3+2*2"
Output: 7
```

**Example 2:**

```
Input: s = " 3/2 "
Output: 1
```

**Example 3:**

```
Input: s = " 3+5 / 2 "
Output: 5
```

Constraints:

 + `1 <= s.length <= 3 * 10^5`
 + `s` consists of integers and operators (`'+', '-', '*', '/'`) separated by some number of spaces.
 + s represents **a valid expression**.
 + All the integers in the expression are non-negative integers in the range `[0, 2^31 - 1]`.
 + The answer is **guaranteed** to fit in a **32-bit integer**.

