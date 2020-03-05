# [698. Partition to K Equal Sum Subsets](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Dynamic Programming`](https://leetcode.com/tag/dynamic-programming/)
* [`Backtracking`](https://leetcode.com/tag/backtracking/)

</details>
<br />


Given an array of integers `nums` and a positive integer `k`, find whether it's possible to divide this array into `k` non-empty subsets whose sums are all equal.

**Example 1:**

> **Input:** nums = [4, 3, 2, 3, 5, 2, 1], k = 4
>
> **Output:** True
>
> **Explanation:** It's possible to divide it into 4 subsets (5), (1, 4), (2,3), (2,3) with equal sums.

**Note:**

 + `1 <= k <= len(nums) <= 16`.
 + `0 < nums[i] < 10000`.


## Solution

题目大意：给定一个数组（记为 nums）和一个数字 k，问能否将数组等分成 k 个非空子集使得各子集的元素和相等

我们先思考一下什么情况下可以进行等分。最容易想到的一点就是，数组元素之和能被 k 整除，不然没办法分成 k 份。
其次分成 k 份过后，如果数组中最大的元素比 `(sum/k)` 要大的话，也是没办法分的，所以在对数组操作前我们先对整个数组进行排序，直接拿第一个数与 `(sum/k)` 比较即可。

现在假设我们可以对 nums 数组进行等分，那么我们可以使用一个 k 长的整型数组（记为 store），每个元素的大小为 (sum/k)。
这样问题就变得简单了，我们只需要想一个规则来遍历 nums 数组，只要能将 store 数组的内容全部变为 0 即可

我们采取的规则是：只要有 nums 数组的元素比 store 数组的某个元素小，则 store 数组对应元素减去 nums 数组的这个元素。
因为 store 中的元素在减去 nums 中的某个符合要求的元素时，不确定最后的结果是否正确，如果不正确我们就需要返回上一步，去尝试下一个符合要求的值。
所以这里就有一个回溯的过程。因此我们最终采用递归回溯的方式。

-------

kotlin 代码如下：

```kotlin
/**
 * 147 / 147 test cases passed.
 * Status: Accepted
 * Runtime: 392 ms
 */
class Solution {
    fun canPartitionKSubsets(nums: IntArray, k: Int): Boolean {
        nums.sortDescending()
        val s = nums.sum()
        if (s % k != 0 || nums[0] > s / k) return false
        return possible(nums, 0, IntArray(k) { s / k })
    }

    private fun possible(nums: IntArray, idx: Int, store: IntArray): Boolean {
        if (idx == nums.size) {
            return store.none { it != 0 }
        }

        store.indices.forEach { i ->
            if (nums[idx] <= store[i]) {
                store[i] -= nums[idx]
                if (possible(nums, idx + 1, store)) return true
                store[i] += nums[idx]
            }
        }
        return false
    }
}
```