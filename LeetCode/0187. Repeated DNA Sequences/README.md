# [187. Repeated DNA Sequences](https://leetcode-cn.com/problems/repeated-dna-sequences/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)


<details>
<summary>Topics</summary>

* [`Bit Manipulation`](https://leetcode.com/tag/bit-manipulation/)
* [`Hash Table`](https://leetcode.com/tag/hash-table/)
* [`String`](https://leetcode.com/tag/string/)
* [`Sliding Window`](https://leetcode.com/tag/sliding-window/)

</details>
<br />

The **DNA sequence** is composed of a series of nucleotides abbreviated as `'A'`, `'C'`, `'G'`, and `'T'`.

+ For example, `"ACGAATTCCG"` is a **DNA sequence**.

When studying **DNA**, it is useful to identify repeated sequences within the DNA.

Given a string `s` that represents a **DNA sequence**, return all the **`10`-letter-long** sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in **any order**.

**Example 1:**

```
Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
Output: ["AAAAACCCCC","CCCCCAAAAA"]
```

**Example 2:**

```
Input: s = "AAAAAAAAAAAAA"
Output: ["AAAAAAAAAA"]
```

**Constraints:**

 + `1 <= s.length <= 10^5`
 + `s[i]` is either `'A'`, `'C'`, `'G'`, or `'T'`.
