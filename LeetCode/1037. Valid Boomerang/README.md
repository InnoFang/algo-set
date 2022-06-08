# [1037. Valid Boomerang](https://leetcode.cn/problems/valid-boomerang/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Math`](https://leetcode.com/tag/math/)
* [`Geometry`](https://leetcode.com/tag/geometry/)

</details>
<br />

Given an array `points` where `points[i] = [xi, yi]` represents a point on the **X-Y** plane, return *`true` if these points are a **boomerang***.

A **boomerang** is a set of three points that are **all distinct** and **not in a straight line**.

**Example 1:**

    Input: points = [[1,1],[2,3],[3,2]]
    Output: true

**Example 2:**

    Input: points = [[1,1],[2,2],[3,3]]
    Output: false

**Constraints:**

 + `points.length == 3`
 + `points[i].length == 2`
 + `0 <= xi, yi <= 100`
