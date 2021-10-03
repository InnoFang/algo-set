# []()

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)


<details>
<summary>Topics</summary>

* [`Hash Table`](https://leetcode.com/tag/hash-table/)
* [`Math`](https://leetcode.com/tag/math/)
* [`String`](https://leetcode.com/tag/string/)

</details>
<br />

Given two integers representing the `numerator` and `denominator` of a fraction, return *the fraction in string format*.

If the fractional part is repeating, enclose the repeating part in parentheses.

If multiple answers are possible, return **any of them**.

It is **guaranteed** that the length of the answer string is less than `10^4` for all the given inputs.


**Example 1:**

```
Input: numerator = 1, denominator = 2
Output: "0.5"
```

**Example 2:**

```
Input: numerator = 2, denominator = 1
Output: "2"
```

**Example 3:**

```
Input: numerator = 2, denominator = 3
Output: "0.(6)"
```

**Example 4:**

```
Input: numerator = 4, denominator = 333
Output: "0.(012)"
```

**Example 5:**

```
Input: numerator = 1, denominator = 5
Output: "0.2"
```

**Constraints:**

 + `-2^31 <= numerator, denominator <= 2^31 - 1`
 + `denominator != 0`
