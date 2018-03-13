# [231. Power of Two](https://leetcode.com/problems/power-of-two/description/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Math`](https://leetcode.com/tag/math/)
* [`Bit Manipulation`](https://leetcode.com/tag/bit-manipulation/)

</details>
<br />


Given an integer, write a function to determine if it is a power of two.

## Solution

**题目大意**

判断一个数是否是 2 的次方数

比如 4 是 2 的 2 次方数，8 是 2 的 3 次方数，但是 6 却不是

**解题思路**

**思路一：** 使用换底公式

若已知 `n^2 = num`，则 `n = log_2(num)`

换底公式 : `log_2(num) = log10(num) / log10(2.0)`

举例如下，输入一个数 num，使用换底公式可以得到它是 2 的几次方

`double res = Math.log10(num) / Math.log10(2.0)`

这里需要判断 res 是否为整数即可，方法就是做浮点数减法

`(res - (int)res) < 1e-10`

刚发对判断 3^n 数、4^n 数都可行

kotlin代码如下

```kotlin
/**
 * 1108 / 1108 test cases passed.
 * Status: Accepted
 * Runtime: 372 ms
 */
class Solution {
    fun isPowerOfTwo(n: Int): Boolean {
        if (n == 0) return false
        val res = Math.log10(n.toDouble()) / Math.log10(2.0)
        return (res - res.toInt()) < 1e-10
    }
}
```

---------

**思路二：** 因为题目给定了输入数据范围为整型，那么我们可以借助第一个方法得到在整型范围内最大的 2 的次方数

因为 Integer 的最大值为 `2 ^ 32 / 2 - 1` 即 `2 ^ 30 = 1073741824`

那么我们就可以让用这个数对输入的数取模，如果为 0 则符合要求

kotlin 代码如下

```
/**
 * 1108 / 1108 test cases passed.
 * Status: Accepted
 * Runtime: 204 ms
 */
class Solution {
    fun isPowerOfTwo(n: Int): Boolean {
        return n > 0 && (1073741824 % n == 0)
    }
}
```

------

**思路三：** 如果数 n 是 2 的次方数，那么其二进制肯定是第一位为 1 其余位 0

kotlin 代码如下

```kotlin
/**
 * 1108 / 1108 test cases passed.
 * Status: Accepted
 * Runtime: 196 ms
 */
class Solution {
    fun isPowerOfTwo(n: Int): Boolean {
        return n > 0 && (n and n-1 == 0)
    }
}
```