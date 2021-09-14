# [https://leetcode-cn.com/problems/longest-word-in-dictionary-through-deleting/](https://leetcode-cn.com/problems/longest-word-in-dictionary-through-deleting/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)


<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`String`](https://leetcode.com/tag/string/)
* [`Sort`](https://leetcode.com/tag/sort)

</details>
<br />

Given a string `s` and a string array `dictionary`, return *the longest string in the dictionary that can be formed by deleting some of the given string characters*. If there is more than one possible result, return the longest word with the smallest lexicographical order. If there is no possible result, return the empty string.

**Example 1:**

```
Input: s = "abpcplea", dictionary = ["ale","apple","monkey","plea"]
Output: "apple"
```

**Example 2:**

```
Input: s = "abpcplea", dictionary = ["a","b","c"]
Output: "a"
```

**Constraints:**

 + `1 <= s.length <= 1000`
 + `1 <= dictionary.length <= 1000`
 + `1 <= dictionary[i].length <= 1000`
 + `s` and `dictionary[i]` consist of lowercase English letters.
