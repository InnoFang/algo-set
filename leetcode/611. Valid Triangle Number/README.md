# [611. Valid Triangle Number](https://leetcode.com/problems/valid-triangle-number/description/)


![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)


<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)

</details>
<br />

Given an array consists of non-negative integers, your task is to count the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle.

**Example 1:**

    Input: [2,2,3,4]
    Output: 3
    Explanation:
    Valid combinations are:
    2,3,4 (using the first 2)
    2,3,4 (using the second 2)
    2,2,3

**Note:**

 1. The length of the given array won't exceed 1000.
 2. The integers in the given array are in the range of [0, 1000].


## Solution

题目大意就是给定一个数组，返回这个数组中任意 3 个数能组成三角形的数量

当然拿到这道题的第一反应估计大部分会是 3 重循环直接暴力，但是看了下数据范围，O(n^3) 的复杂度，超时是没跑了（不然题目难度也不会是 medium），所以我们只能换一种思路

我们先假设一个数组，如下

    ___________
    |3|5|6|7|9|
    -----------

现在假设要判断前三个数能否组成三角形，我们用三个下标 i, j, k 来表示位置

    ___________
    |3|5|6|7|9|
    -----------
     ^ ^ ^
     i j k

我们在判断三角形时规定：**小的两边之和大于第三边**即可，所以我们为了判断方便，我**在对数组进行操作前要先排序**。这样我们就可以直接用 `nums[i]+nums[j]>nums[k]` 来判断结果即可，而不需要连续写三个判断

此时三个值分别是 3、5、6，构成三角形，我们可以**用一个计数器变量 cnt 来记录三角形个数**

接下来，为了下标移动方便，一般会先移动 k 下标，因此 k 下标加 1

    ___________
    |3|5|6|7|9|
    -----------
     ^ ^   ^
     i j   k


再然后我们来尝试移动下标 i，和下标 j，尝试后发现，在 0 到 k 的这个范围内，我们移动 i 和 j 下标，可以得到一下数字组合

     i j k
    ------
    |3 5 7
    |3 6 7
    |5 6 7

以上组合都能构成三角形，所以计数器变量 cnt 加 3。

但是我们仔细分析一下就可以发现，只要**当下标 i 和 j 的数能和 k 的数组成三角形，那么从 `[i, j)` 这个范围内的数都可以与 j 和 k 的数来组成三角形** (这里指的是**使 i 增加，而不是 j 减少**，因为只要 i + j > k，那么 i 在小于 j 的范围内增加，这个不等式都成立，而使 j 减少则不一定)。


因此，我们就不需要让 i 和 j 下标从开始到末尾反复移动，只需要让 i 从开始的位置增加，j 从比 k 小一的位置减少，这样就形成了一个 i 到 j 的区间

 1. 如果 `nums[i]+nums[j]>nums[k]`, 构成一个三角形，并且有一个下标 i 到 j 的区间，那么我们让 cnt += j - i 即可，并且还要让 `j--`，重复步骤 1.，直到 i >= j 停止，判断新的 `[i, j)` 区间内的数能否使得 `nums[i]+nums[j]>nums[k]` 成立
 2. 如果 `nums[i]+nums[j]<=nums[k]`，不够成三角形，所以尝试增加最小边的值，我们让 `i++`，重复步骤 1.，直到 i >= j 停止，来尝试构成一个三角形

------

kotlin 代码如下：

```kotlin
// i => lo (low)
// j => hi (high)
// k => it
class Solution {
    fun triangleNumber(nums: IntArray): Int {
        var cnt = 0
        if (nums.size > 2) {
            nums.sort()
            (2 until nums.size).forEach {
                var lo = 0
                var hi = it - 1
                while (lo < hi) {
                    if (nums[lo] + nums[hi] > nums[it]) {
                        cnt += hi - lo
                        hi--
                    } else lo++
                }
            }
        }
        return cnt
    }
}
```