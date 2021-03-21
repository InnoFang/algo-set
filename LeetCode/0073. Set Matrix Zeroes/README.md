# [73. Set Matrix Zeroes](https://leetcode-cn.com/problems/set-matrix-zeroes/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode-cn.com/tag/array/)

</details>
<br />

Given an *`m x n`* matrix. If an element is **0**, set its entire row and column to **0**. Do it **`in-place`**.

Follow up:

 + A straight forward solution using O(*mn*) space is probably a bad idea.
 + A simple improvement uses O(*m + n*) space, but still not the best solution.
 + Could you devise a constant space solution?

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/08/17/mat1.jpg)

```
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
```
**Example 2:**

![](https://assets.leetcode.com/uploads/2020/08/17/mat2.jpg)

```
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
```

**Constraints:**

 + `m == matrix.length`
 + `n == matrix[0].length`
 + `1 <= m, n <= 200`
 + `-2^31 <= matrix[i][j] <= 2^31 - 1`
