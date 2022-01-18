# [539. Minimum Time Difference](https://leetcode-cn.com/problems/minimum-time-difference/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/) 
* [`String`](https://leetcode.com/tag/string/) 
* [`Math`](https://leetcode.com/tag/math/)

</details>
<br />

Given a list of 24-hour clock time points in **"HH:MM"** format, return *the minimum **minutes** difference between any two time-points in the list*.

**Example 1:**

```
Input: timePoints = ["23:59","00:00"]
Output: 1
```

**Example 2:**

```
Input: timePoints = ["00:00","23:59","00:00"]
Output: 0
```

**Constraints:**

 + `2 <= timePoints <= 2 * 10^4`
 + `timePoints[i]` is in the format **"HH:MM"**.
