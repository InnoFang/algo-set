# [498. Diagonal Traverse](https://leetcode.com/problems/diagonal-traverse/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)


Given a matrix of M x N elements (M rows, N columns), return all elements of the matrix in diagonal order as shown in the below image.

**Example:**

> **Input:** <br />
> [ <br />
> &nbsp; [ 1, 2, 3 ],<br />
> &nbsp; [ 4, 5, 6 ],<br />
> &nbsp; [ 7, 8, 9 ]<br />
> ]<br />
> **Output:**  [1,2,4,7,5,3,6,8,9]<br />
> **Explanation:**<br />
> ![](https://leetcode.com/static/images/problemset/diagonal_traverse.png)

## Solution

**题目大意**

给定 M x N 的矩阵，返回按对角线顺序的元素

**解题思路**

以 4 阶矩阵的正对角线 '/' 为例


![](https://ws1.sinaimg.cn/large/0067fiZ7ly1fnesp9mup3j30ft0fxjs8.jpg)

对于 4 阶矩阵，对角线个数为 `2 x 4 - 1 = 7` 条
对于 n 阶矩阵，对角线个数为 `2 x n - 1` 条

若用 i 表示行元素，j 表示列元素，那么每条对角线上的元素的 行下标 + 列下标 可得，从第一条正对角线开始，i + j 的值分别为
` 0, 1, 2 .. 2*n-2`


所以，我们可以根据这个规律，把矩阵元素直接填在某一行中，比如

    [
     [ 1, 2, 3 ],
     [ 4, 5, 6 ],
     [ 7, 8, 9 ]
    ]

按照 `i + j` 的值来填入的话，就会像下面这样

    [
     [1],
     [2,4],
     [3,5,7],
     [6,8],
     [9]
    ]

最后，再根据奇数行逆序输出，偶数行顺序输出即可

------

kotlin 代码如下

```kotlin
/**
 * 32 / 32 test cases passed.
 * Status: Accepted
 * Runtime: 636 ms
 */
class Solution {
    fun findDiagonalOrder(matrix: Array<IntArray>): IntArray {
        if (matrix.isEmpty()) return intArrayOf()
        val rows = matrix.size
        val cols = matrix[0].size
        val store = MutableList(rows + cols - 1) { ArrayList<Int>() }
        for (i in (0 until rows)) {
            for (j in (0 until cols)) {
                store[i + j].add(matrix[i][j])
            }
        }
        val result = java.util.LinkedList<Int>()
        store.forEachIndexed { index, list ->
            if (index % 2 == 0) {
                result.addAll(list.reversed())
            } else {
                result.addAll(list)
            }
        }
        return result.toIntArray()
    }
}
```

<br /><br />

简单优化后，kotlin 代码如下

```kotlin
/**
 * 32 / 32 test cases passed.
 * Status: Accepted
 * Runtime: 400 ms
 */
class Solution2 {
    fun findDiagonalOrder(matrix: Array<IntArray>): IntArray {
        if (matrix.isEmpty()) return intArrayOf()
        val rows = matrix.size
        val cols = matrix[0].size
        val store = MutableList(rows + cols - 1) { java.util.LinkedList<Int>() }
        for (i in (0 until rows)) {
            for (j in (0 until cols)) {
                if (((i + j) and 1) == 0) store[i + j].add(0, matrix[i][j])
                else store[i + j].add(matrix[i][j])
            }
        }
        val result = java.util.LinkedList<Int>()
        store.forEach { result.addAll(it) }
        return result.toIntArray()
    }
}
```