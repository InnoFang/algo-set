# [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/description/)

![](https://img.shields.io/badge/Difficulty-Hard-red.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Union Find`](https://leetcode.com/tag/union-find/)

</details>
<br />


Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

For example,
Given `[100, 4, 200, 1, 3, 2]`,
The longest consecutive elements sequence is `[1, 2, 3, 4]`. Return its length: `4`.

Your algorithm should run in O(_n_) complexity.

## Solution

**题目大意**

给定一个未排序的整形数组，找到**最长的连续元素序列的长度**

**解题思路**

这题最直观的就是使用并查集来实现。但是有一点要注意的就是，因为数字可能出现负数，所以使用一个数组来存储不合适，所以这里选择的使用 HashMap 来存储

不过，还有个很好的思路就是，我的任务就是找到最长的连续元素序列的长度，其他的并不需要考虑，那么我们在查找时，我们可以使用 Set，对其中的元素进行遍历，
在确保该元素没有比它小的元素时，寻找比该数大并且连续的个数，确保没有比当前数小的情况是防止重复运算

----------

kotlin 代码如下 (使用并查集的方法及其优化详见代码 Solution1 和 Solution2)
```kotlin
/**
 * 68 / 68 test cases passed.
 * Status: Accepted
 * Runtime: 260 ms
 */
class Solution {
    fun longestConsecutive(nums: IntArray): Int {
        val set = nums.toHashSet()
        var longestStreak = 0
        set.forEach {
            if (!set.contains(it-1)){
                var currentStreak = 1
                while (set.contains(it + currentStreak)) currentStreak++
                longestStreak = maxOf(longestStreak, currentStreak)
            }
        }
        return longestStreak
    }
}
```

