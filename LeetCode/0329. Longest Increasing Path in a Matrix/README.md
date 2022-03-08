# [329. Longest Increasing Path in a Matrix](https://leetcode-cn.com/problems/longest-increasing-path-in-a-matrix/)

![](https://img.shields.io/badge/Difficulty-Hard-red.svg)

<details>
<summary>Topics</summary>

* [`Dynamic Programming`](https://leetcode.com/tag/dynamic-programming/)
* [`Binary Search Tree`](https://leetcode.com/tag/binary-search-tree/)
* [`Breadth-first Search`](https://leetcode.com/tag/breadth-first-search/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)
* [`Graph`](https://leetcode.com/tag/graph/)
* [`Topological Sort`](https://leetcode.com/tag/topological-sort/)

</details>
<br />

Given an `m x n` integers `matrix`, return *the length of the longest increasing path in `matrix`*.

From each cell, you can either move in four directions: left, right, up, or down. You **may not** move **diagonally** or move **outside the boundary** (i.e., wrap-around is not allowed).

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/01/05/grid1.jpg)

```
Input: matrix = [[9,9,4],[6,6,8],[2,1,1]]
Output: 4
Explanation: The longest increasing path is [1, 2, 6, 9].
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2021/01/27/tmp-grid.jpg)

```
Input: matrix = [[3,4,5],[3,2,6],[2,2,1]]
Output: 4
Explanation: The longest increasing path is [3, 4, 5, 6]. Moving diagonally is not allowed.
```

**Example 3:**

```
Input: matrix = [[1]]
Output: 1
```

**Constraints:**

 + `m == matrix.length`
 + `n == matrix[i].length`
 + `1 <= m, n <= 200`
 + `0 <= matrix[i][j] <= 2^31 - 1`
