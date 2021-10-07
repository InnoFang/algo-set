# [434. Number of Segments in a String](https://leetcode-cn.com/problems/number-of-segments-in-a-string/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)


<details>
<summary>Topics</summary>

* [`String`](https://leetcode.com/tag/string/)

</details>
<br />

You are given a string `s`, return *the number of segments in the string*. 

A **segment** is defined to be a contiguous sequence of **non-space characters**.

**Example 1:**

```
Input: s = "Hello, my name is John"
Output: 5
Explanation: The five segments are ["Hello,", "my", "name", "is", "John"]
```

**Example 2:**

```
Input: s = "Hello"
Output: 1
```

**Example 3:**

```
Input: s = "love live! mu'sic forever"
Output: 4
```

**Example 4:**

```
Input: s = ""
Output: 0
```

**Constraints:**

 + `0 <= s.length <= 300`
 + `s` consists of lower-case and upper-case English letters, digits or one of the following characters `"!@#$%^&*()_+-=',.:"`.
 + The only space character in `s` is `' '`.
