# [867. Transpose Matrix](https://leetcode-cn.com/problems/transpose-matrix/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode-cn.com/tag/array/)

</details>
<br />

Given a 2D integer array `matrix`, return *the **transpose** of `matrix`*.

The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

![](https://assets.leetcode.com/uploads/2021/02/10/hint_transpose.png)

**Example 1:**

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
```

**Example 2:**

```
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
```

**Constraints:**

 + `m == matrix.length`
 + `n == matrix[i].length`
 + `1 <= m, n <= 1000`
 + `1 <= m * n <= 10^5`
 + `-10^9 <= matrix[i][j] <= 10^9`
