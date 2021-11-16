# [391. Perfect Rectangle](https://leetcode.com/problems/perfect-rectangle/)

![](https://img.shields.io/badge/Difficulty-Hard-red.svg)


<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)

</details>
<br />
Given an array `rectangles` where `rectangles[i] = [xi, yi, ai, bi]` represents an axis-aligned rectangle. The bottom-left point of the rectangle is `(xi, yi)` and the top-right point of it is `(ai, bi)`.

Return *`true` if all the rectangles together form an exact cover of a rectangular region*.

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/03/27/perectrec1-plane.jpg)

```
Input: rectangles = [[1,1,3,3],[3,1,4,2],[3,2,4,4],[1,3,2,4],[2,3,3,4]]
Output: true
Explanation: All 5 rectangles together form an exact cover of a rectangular region.
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2021/03/27/perfectrec2-plane.jpg)

```
Input: rectangles = [[1,1,2,3],[1,3,2,4],[3,1,4,2],[3,2,4,4]]
Output: false
Explanation: Because there is a gap between the two rectangular regions.
```

**Example 3:**

![](https://assets.leetcode.com/uploads/2021/03/27/perfectrec3-plane.jpg)

```
Input: rectangles = [[1,1,3,3],[3,1,4,2],[1,3,2,4],[3,2,4,4]]
Output: false
Explanation: Because there is a gap in the top center.
```

**Example 4:**

![](https://assets.leetcode.com/uploads/2021/03/27/perfecrrec4-plane.jpg)

```
Input: rectangles = [[1,1,3,3],[3,1,4,2],[1,3,2,4],[2,2,4,4]]
Output: false
Explanation: Because two of the rectangles overlap with each other.
``` 

**Constraints:**

 + `1 <= rectangles.length <= 2 * 10^4`
 + `rectangles[i].length == 4`
 + `-10^5 <= xi, yi, ai, bi <= 10^5`
