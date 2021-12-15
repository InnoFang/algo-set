# [168. Excel Sheet Column Title](https://leetcode.com/problems/excel-sheet-column-title/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)
![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)
![](https://img.shields.io/badge/Difficulty-Hard-red.svg)


<details>
<summary>Topics</summary>

* [`String`](https://leetcode.com/tag/string/) 
* [`Math`](https://leetcode.com/tag/math/) 

</details>
<br />

Given an integer `columnNumber`, return *its corresponding column title as it appears in an Excel sheet*.

For example:

```
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
```

**Example 1:**

```
Input: columnNumber = 1
Output: "A"
```

**Example 2:**

```
Input: columnNumber = 28
Output: "AB"
```

**Example 3:**

```
Input: columnNumber = 701
Output: "ZY"
```

**Example 4:**

```
Input: columnNumber = 2147483647
Output: "FXSHRXW"
```

**Constraints:**

 + `1 <= columnNumber <= 2^31 - 1`
