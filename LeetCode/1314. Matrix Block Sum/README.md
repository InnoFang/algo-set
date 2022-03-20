# [1314. Matrix Block Sum](https://leetcode-cn.com/problems/matrix-block-sum/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>


* [`Array`](https://leetcode.com/tag/array/)
* [`Matrix`](https://leetcode.com/tag/matrix/)
* [`Prefix Sum`](https://leetcode.com/tag/prefix-sum/)

</details>
<br />

Given a `m x n` matrix `mat` and an integer `k`, return *a matrix `answer` where each `answer[i][j]` is the sum of all elements `mat[r][c]` for*:

 + `i - k <= r <= i + k`,
 + `j - k <= c <= j + k`, and
 + `(r, c)` is a valid position in the matrix.
 
**Example 1:**

```
Input: mat = [[1,2,3],[4,5,6],[7,8,9]], k = 1
Output: [[12,21,16],[27,45,33],[24,39,28]]
```

**Example 2:**

```
Input: mat = [[1,2,3],[4,5,6],[7,8,9]], k = 2
Output: [[45,45,45],[45,45,45],[45,45,45]]
```

**Constraints:**

 + `m == mat.length`
 + `n == mat[i].length`
 + `1 <= m, n, k <= 100`
 + `1 <= mat[i][j] <= 100`
