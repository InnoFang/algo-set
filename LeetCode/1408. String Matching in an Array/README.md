# [1408. String Matching in an Array](https://leetcode.cn/problems/string-matching-in-an-array/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`String`](https://leetcode.com/tag/string/)
* [`String Matching`](https://leetcode.com/tag/string-matching/)

</details>
<br />

Given an array of string `words`. Return all strings in `words` which is substring of another word in **any** order. 

String `words[i]` is substring of `words[j]`, if can be obtained removing some characters to left and/or right side of `words[j]`.
 

**Example 1:**

    Input: words = ["mass","as","hero","superhero"]
    Output: ["as","hero"]
    Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
    ["hero","as"] is also a valid answer.

**Example 2:**

    Input: words = ["leetcode","et","code"]
    Output: ["et","code"]
    Explanation: "et", "code" are substring of "leetcode".

**Example 3:**

    Input: words = ["blue","green","bu"]
    Output: []


**Constraints:**

 + `1 <= words.length <= 100`
 + `1 <= words[i].length <= 30`
 + `words[i]` contains only lowercase English letters.
 + It's **guaranteed** that `words[i]` will be unique.
