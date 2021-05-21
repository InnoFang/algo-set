# [1035. Uncrossed Lines](https://leetcode-cn.com/problems/uncrossed-lines/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)
![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)
![](https://img.shields.io/badge/Difficulty-Hard-red.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode-cn.com/tag/array/)
* [`Dynamic Programming`](https://leetcode-cn.com/tag/dynamic-programming/)

</details>
<br />

We write the integers of `nums1` and `nums2` (in the order they are given) on two separate horizontal lines.

Now, we may draw connecting lines: a straight line connecting two numbers `nums1[i]` and `nums2[j]` such that:

 + `nums1[i] == nums2[j]`;
 + The line we draw does not intersect any other connecting (non-horizontal) line.
Note that a connecting lines cannot intersect even at the endpoints: each number can only belong to one connecting line.

Return the maximum number of connecting lines we can draw in this way.


**Example 1:**

![](https://assets.leetcode.com/uploads/2019/04/26/142.png)

```

Input: nums1 = [1,4,2], nums2 = [1,2,4]
Output: 2
Explanation: We can draw 2 uncrossed lines as in the diagram.
We cannot draw 3 uncrossed lines, because the line from nums1[1]=4 to nums2[2]=4 will intersect the line from nums1[2]=2 to nums2[1]=2.
```

**Example 2:**

```
Input: nums1 = [2,5,1,2,5], nums2 = [10,5,2,1,5,2]
Output: 3
```

**Example 3:**

```
Input: nums1 = [1,3,7,1,7,5], nums2 = [1,9,2,5,1]
Output: 2
```

**Note:**

 + `1 <= nums1.length <= 500`
 + `1 <= nums2.length <= 500`
 + `1 <= nums1[i], nums2[i] <= 2000`
