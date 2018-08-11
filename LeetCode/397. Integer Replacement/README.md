# [397. Integer Replacement](https://leetcode.com/problems/integer-replacement/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Math`](https://leetcode.com/tag/math/)
* [`Bit Manipulation`](https://leetcode.com/tag/bit-manipulation/)

</details>
<br />

Given a positive integer _n_ and you can do operations as follow:

 1. If _n_ is even, replace _n_ with _`n/2`_.
 2. If _n_ is odd, you can replace _n_ with either _`n + 1`_ or _`n - 1`_.

What is the minimum number of replacements needed for _n_ to become 1?

**Example 1:**

> **Input:**
>
> 8
>
>
> **Output:**
>
> 3
>
> **Explanation:**
>
> 8 -> 4 -> 2 -> 1


**Example 2:**

> **Input:**
>
> 7
>
>
> **Output:**
>
> 4
>
> **Explanation:**
>
> 7 -> 8 -> 4 -> 2 -> 1
>
> or
>
>  7 -> 6 -> 3 -> 2 -> 1