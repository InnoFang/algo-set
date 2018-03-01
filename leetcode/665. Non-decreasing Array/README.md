# [665. Non-decreasing Array](https://leetcode.com/problems/non-decreasing-array/description/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)

</details>
<br />


Given an array with `n` integers, your task is to check if it could become non-decreasing by modifying **at most** 1 element.

We define an array is non-decreasing if `array[i] <= array[i + 1]` holds for every `i` (1 <= i < n).


**Example 1:**

> **Input:** [4,2,3]
>
> **Output:** True
>
> **Explanation:** You could modify the first 4 to 1 to get a non-decreasing array.

**Example 2:**

> **Input:** [4,2,1]
>
> **Output:** False
>
> **Explanation:** You can't get a non-decreasing array by modify at most one element.

**Note:** The `n` belongs to [1, 10,000].

## Solution

**题目大意如下：**

给定一个数组，判断是否能够通过修改一个元素始数组变为非递减排列 (Non-decreasing Array)，即对每个元素来说，都满足 `array[i] <= array[i + 1] (1 <= i < n)`

**解题思路如下：**

如果现在有个数不满足 `array[i-1] <= array[i]`，那么现在就须考虑到底是对 `array[i-1]` 进行修改还是对 `array[i]` 进行修改呢？

如果仅仅只是把 `array[i-1]` 变成跟 `array[i]` 是不够的，比如对下面这个数据来说

> [3, 4, 2, 4]

如果 `array[i]` 是 2， 那么把 `array[i-1]` 也变成 2 的话，就使得 `array[i-1]` 也不满足要求了

所以，变那个数还需考虑到 `array[i-2]`，因此对不满足 `array[i-1] <= array[i]` 的数，做出以下操作

 + 如果 `array[i-2] <= array[i]`，则让 `array[i-1] = array[i]` 即可
 + 否则使 `array[i] = array[i-1]`

因为需要与前一个元素做判断，所以我们从第二个元素开始遍历

此外，题目要求的是最多只变一个数，所以我们还可以用一个计数器来记录修改次数，如果次数大于 1 那么直接返回 false 即可

-----

kotlin 代码如下:

```kotlin
/**
 * 325 / 325 test cases passed.
 * Status: Accepted
 * Runtime: 484 ms
 */
class Solution {
    fun checkPossibility(nums: IntArray): Boolean {
        var cnt = 0
        (1..nums.lastIndex).forEach {
            if (nums[it - 1] > nums[it]) {
                if (++cnt > 1) return false
                if (it - 2 < 0 || nums[it - 2] <= nums[it]) nums[it - 1] = nums[it]
                else nums[it] = nums[it - 1]
            }
        }
        return true
    }
}
```