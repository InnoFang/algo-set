# [1941. Check if All Characters Have Equal Number of Occurrences](https://leetcode.cn/problems/check-if-all-characters-have-equal-number-of-occurrences/description/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Counting`](https://leetcode.com/tag/Counting/)
* [`String`](https://leetcode.com/tag/string/)
* [`Hash Table`](https://leetcode.com/tag/hash-table/)

</details>
<br />

Given a string `s`, return *`true` if `s` is a **good** string, or `false` otherwise*.

A string `s` is **good** if **all** the characters that appear in `s` have the **same** number of occurrences (i.e., the same frequency).

**Example 1:**

    Input: s = "abacbc"
    Output: true
    Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.

**Example 2:**

    Input: s = "aaabb"
    Output: false
    Explanation: The characters that appear in s are 'a' and 'b'.
    'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.

**Constraints:**

+ `1 <= s.length <= 1000`
+ `s` consists of lowercase English letters.
