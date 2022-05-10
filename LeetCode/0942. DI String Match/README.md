# [942. DI String Match](https://leetcode.cn/problems/di-string-match/submissions/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`String`](https://leetcode.com/tag/string/)
* [`Math`](https://leetcode.com/tag/math/)
* [`Greedy`](https://leetcode.com/tag/greedy/)

</details>
<br />

A permutation `perm` of `n + 1` integers of all the integers in the range `[0, n]` can be represented as a string `s` of length `n` where:

 + `s[i] == 'I'` if `perm[i] < perm[i + 1]`, and
 + `s[i] == 'D'` if `perm[i] > perm[i + 1]`.

Given a string `s`, reconstruct the permutation `perm` and return it. If there are multiple valid permutations perm, return **any of them**.

**Example 1:**

    Input: s = "IDID"
    Output: [0,4,1,3,2]

**Example 2:**

    Input: s = "III"
    Output: [0,1,2,3]

**Example 3:**

    Input: s = "DDI"
    Output: [3,2,0,1]
 

**Constraints:**

 + `1 <= s.length <= 10^5`
 + `s[i]` is either `'I`' or `'D'`.
