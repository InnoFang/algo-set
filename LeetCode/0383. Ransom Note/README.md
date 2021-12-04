# [383. Ransom Note](https://leetcode.com/problems/ransom-note/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg) 

<details>
<summary>Topics</summary>

* [`String`](https://leetcode.com/tag/string/) 
* [`Hash Table`](https://leetcode.com/tag/hash-table/)

</details>
<br />

Given two stings `ransomNote` and `magazine`, return `true` if `ransomNote` can be constructed from `magazine` and `false` otherwise.

Each letter in `magazine` can only be used once in `ransomNote`.

**Example 1:**

```
Input: ransomNote = "a", magazine = "b"
Output: false
```

**Example 2:**

```
Input: ransomNote = "aa", magazine = "ab"
Output: false
```

**Example 3:**

```
Input: ransomNote = "aa", magazine = "aab"
Output: true
```

**Constraints:**

 + `1 <= ransomNote.length, magazine.length <= 10^5`
 + `ransomNote` and `magazine` consist of lowercase English letters.
