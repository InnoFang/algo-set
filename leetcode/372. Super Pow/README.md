# [372. Super Pow](https://leetcode.com/problems/super-pow/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Math`](https://leetcode.com/tag/math/)

</details>
<br />


Your task is to calculate _a^b_ mod 1337 where _a_ is a positive integer and _b_ is an extremely large positive integer given in the form of an array.

**Example1:**

>a = 2 <br/>
>b = [3]
>
>Result: 8

**Example2:**

>a = 2 <br/>
>b = [1,0]
>
>Result: 1024

## Solution

**题目大意**

给定一个正整数 a，一个整形数组 b 表示一个很大的正数，计算 _a^b_ mod 1337 的结果

**解题思路**

使用快速幂可以解决