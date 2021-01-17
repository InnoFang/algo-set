# [1232. Check If It Is a Straight Line](https://leetcode-cn.com/problems/check-if-it-is-a-straight-line/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Geometry`](https://leetcode.com/tag/geometry/)
* [`Math`](https://leetcode.com/tag/maths/)

</details>
<br />

You are given an array `coordinates`, `coordinates[i] = [x, y]`, where `[x, y]` represents the coordinate of a point. Check if these points make a straight line in the XY plane.

**Example 1:**

![](https://assets.leetcode.com/uploads/2019/10/15/untitled-diagram-2.jpg)

```
Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2019/10/09/untitled-diagram-1.jpg)

```
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
```

**Constraints:**

 + `2 <= coordinates.length <= 1000`
 + `coordinates[i].length == 2`
 + `-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4`
 + `coordinates` contains no duplicate point.
