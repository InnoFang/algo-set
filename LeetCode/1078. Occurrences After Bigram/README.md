# [1078. Occurrences After Bigram](https://leetcode.com/problems/occurrences-after-bigram/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`String`](https://leetcode.com/tag/string/)

</details>
<br />

Given two strings `first` and `second`, consider occurrences in some text of the form `"first second third"`, where `second` comes immediately after `first`, and `third` comes immediately after `second`.

Return *an array of all the words `third` for each occurrence of `"first second third"`*.

**Example 1:**

```
Input: text = "alice is a good girl she is a good student", first = "a", second = "good"
Output: ["girl","student"]
```

**Example 2:**

```
Input: text = "we will we will rock you", first = "we", second = "will"
Output: ["we","rock"]
```

**Constraints:**

 + `1 <= text.length <= 1000`
 + `text` consists of lowercase English letters and spaces.
 + All the words in `text` a separated by **a single space**.
 + `1 <= first.length, second.length <= 10`
 + `first` and `second` consist of lowercase English letters.
