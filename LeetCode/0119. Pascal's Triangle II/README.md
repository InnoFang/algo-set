# [119. Pascal's Triangle II](https://leetcode-cn.com/problems/pascals-triangle-ii/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)

</details>
<br />

Given an integer `rowIndex`, return the `rowIndex-th` row of the Pascal's triangle.

Notice that the row index starts from **0**.

![](https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif)

In Pascal's triangle, each number is the sum of the two numbers directly above it.

**Follow up:**

Could you optimize your algorithm to use only O(k) extra space?


**Example 1:**
```
Input: rowIndex = 3
Output: [1,3,3,1]
```

**Example 2:**

```
Input: rowIndex = 0
Output: [1]
```

**Example 3:**

```
Input: rowIndex = 1
Output: [1,1]
```

**Constraints:**

 + `0 <= rowIndex <= 33`
