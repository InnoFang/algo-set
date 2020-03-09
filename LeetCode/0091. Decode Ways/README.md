# [91. Decode Ways](https://leetcode.com/problems/decode-ways/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`String`](https://leetcode.com/tag/string/)
* [`Dynamic Programming`](https://leetcode.com/tag/dynamic-programming/)

</details>
<br />

A message containing letters from `A-Z` is being encoded to numbers using the following mapping:

    'A' -> 1
    'B' -> 2
    ...
    'Z' -> 26

Given a **non-empty** string containing only digits, determine the total number of ways to decode it.

**Example 1:**

    Input: "12"
    Output: 2
    Explanation: It could be decoded as "AB" (1 2) or "L" (12).
    
**Example 2:**

    Input: "226"
    Output: 3
    Explanation: It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
