# [42. Trapping Rain Water](https://leetcode-cn.com/problems/trapping-rain-water/)

![](https://img.shields.io/badge/Difficulty-Hard-red.svg)

<details>
<summary>Topics</summary>

* [`Stack`](https://leetcode-cn.com/tag/stack/)
* [`Array`](https://leetcode-cn.com/tag/array/)
* [`Two Pointers`](https://leetcode-cn.com/tag/two-pointers/)
* [`Dynamic Programming`](https://leetcode-cn.com/tag/dynamic-programming/)

</details>
<br />

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.


**Example 1:**

![](https://assets.leetcode.com/uploads/2018/10/22/rainwatertrap.png)

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
```

**Example 2:**

```
Input: height = [4,2,0,3,2,5]
Output: 9
```

**Constraints:**

 + `n == height.length`
 + `0 <= n <= 3 * 10^4`
 + `0 <= height[i] <= 10^5`
