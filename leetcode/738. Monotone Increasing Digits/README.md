# [738. Monotone Increasing Digits](https://leetcode.com/problems/monotone-increasing-digits/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Greedy`](https://leetcode.com/tag/greedy/)

</details>
<br />


Given a non-negative integer `N`, find the largest number that is less than or equal to `N`0 with monotone increasing digits.

(Recall that an integer has _monotone increasing digits_ if and only if each pair of adjacent digits `x` and `y` satisfy `x <= y`.)


**Example 1:**

> **Input:** N = 10 <br />
> **Output:** 9

**Example 2:**

> **Input:** N = 1234 <br />
> **Output:** 1234

**Example 3:**

> **Input:** N = 332 <br />
> **Output:** 299

**Note:** `N` is an integer in the range `[0, 10^9]`.

## Solution

**题目大意：**

给一个数 N ，找出一个 <= N 的最大的保证每个数字是单调增的数

**解题思路：**

> Solution 1

刚看到这题时，感觉可以从 N 到 0 到这排序，然后每个数遍历一下各数字是否是单调增的，
不过看了下题目给出的数据范围是 `[0, 10^9]`，加入输入的数字是 `98765432` 的话，
那至少要遍历到 `22222222` 才可以结束，就这个数据而言就需要遍历 76543210 次，
并且每个数是 8 位，那么最终遍历次数就有 6 亿多次，毫无疑问这是肯定会超时的，所以单纯的暴力解法是行不通的


如果要保证数的每个数字是单调增的话，假设 num 是该数，num[i] 是该数第 i 上的数字，
那么单调增的条件即为 `nums[i-1] <= num[i] (i ∈ [1, num.size])`

假设 N 的结果是 _千位数_ 并且 _千位_ 上的数是 2 的话，那么满足 N 结果的最小的数应该是 2222，最大的数应该是是 2999，注意的情况是根据结果来推测的

比如 N 是 4321，那么我们先让 4321 与 4444 比较，前者小于后者，那么可以说 N 的结果应该不会是 4 开头的千位数，因为它连 4 开头的千位数的最小要求都不满足。<br/>
那么再让 4321 与 3333 比较，前者大于后者，那么可以确定，N 的结果至少是 3 开头的千位数。<br /> 那么剩下的数该如何确定呢？既然我们已经确定了第一个数字，那么我们就可以用
诸如 3111、3222、...、3999 这样的数字与 N 进行比较，比较后发现 3999 小于 4321，那么可以确定 N 的结果的第二个数字是 9。<br /> 其它位数上的数字依次类推

kotlin 代码参考如下

```kotlin
/**
 * 302 / 302 test cases passed.
 * Status: Accepted
 * Runtime: 520 ms
 */
class Solution {
    fun monotoneIncreasingDigits(N: Int): Int {
        val src = N.toString()
        var res = ""
        src.toCharArray().forEachIndexed { idx, c ->
            (c..'9').forEach { num ->
                if (src < res + Array(src.length - idx) { num }.joinToString("")) {
                    res += (num - 1)
                    return@forEachIndexed
                }
            }
            res += '9'
        }
        return res.toInt()
    }

}
```


----------------------


