# [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/description/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Math`](https://leetcode.com/tag/math/)
* [`Binary Search`](https://leetcode.com/tag/binary-search/)

</details>
<br />


Implement `int sqrt(int x)`.

Compute and return the square root of _x_.

**x** is guaranteed to be a non-negative integer.

**Example 1:**

> **Input:** 4  <br />
> **Output:** 2


**Example 2:**

> **Input:** 8  <br />
> **Output:** 2 <br />
> **Explanation:** The square root of 8 is 2.82842..., and since we want to return an integer, the decimal part will be truncated.

## Solution

**题目大意：**

实现 `int sqrt(x)` 方法，计算并返回 x 的开根结果，x 是非负数

**解题思路：**

使用 **牛顿迭代法**

如果你看不懂，那么我直接讲代码思路：

假设我们要开根的数是 a，开根结果为 t。那么肯定有一下等式

        a
       --- = t
        t

因为在进行浮点数比较时会存在**浮点数陷阱**，所以我们设定一个阈值，当等式两边相减小于该阈值时我们认为相当，那么只要大于这个阈值即为不想等，我们需要去迭代 t 的值，直到符合要求为止

t 的更新方式如下
              a
         t + ---
              t
    t = ---------
           2

如果 t 逐渐接近正确结果那么 `a/t` 会越来越接近 t，当 `a/t` 与 `t` 的差值小于我们设定的阈值时，就停止迭代了

我们用一个例子来讲解，假设 a = 8，那么我们刚开始就从 8 开始迭代，即 t = 8。

我们设定阈值 err = 1e-10

1. `Math.abs(t - a/t) = | 8.0 - 8/8.0 | = 7.0 > err` <br /> 更新 t 值 `t = (t + a / t) / 2 = (8.0 + 8/8.0) / 2` = 4.5 <br /> 继续迭代
2. `Math.abs(t - a/t) = | 4.5 - 8/4.5 | = 2.7222222222222223 > err` <br /> 更新 t 值 `t = (t + a / t) / 2 = (4.5 + 8/4.5) / 2` = 3.138888888888889 <br /> 继续迭代
3. `Math.abs(t - a/t) = | 3.138888888888889 - 8/3.138888888888889 | = 0.5902163225172075 > err` <br /> 更新 t 值 `t = (t + a / t) / 2 = (3.138888888888889 + 8/3.138888888888889) / 2` = 2.843780727630285 <br /> 继续迭代
4. `Math.abs(t - a/t) = | 2.843780727630285 - 8/2.843780727630285 | = 0.03062431150027667 > err` <br /> 更新 t 值 `t = (t + a / t) / 2 = (2.843780727630285 + 8/2.843780727630285) / 2` = 2.8284685718801468 <br /> 继续迭代
5. `Math.abs(t - a/t) = | 2.8284685718801468 - 8/2.8284685718801468 | = 8.289366056546399E-5 > err` <br /> 更新 t 值 `t = (t + a / t) / 2 = (2.8284685718801468 + 8/2.8284685718801468) / 2` = 2.8284271250498643 <br /> 继续迭代
6. `Math.abs(t - a/t) = | 2.8284271250498643 - 8/2.8284271250498643 | = 6.073483937996116E-10 > err` <br /> 更新 t 值 `t = (t + a / t) / 2 = (2.8284271250498643 + 8/2.8284271250498643) / 2` = 2.82842712474619 <br /> 继续迭代
7. `Math.abs(t - a/t) = | 2.82842712474619 - 8/2.82842712474619 | = 1.9520675489683879568237652746034e-16 < err` 停止迭代

迭代次数跟阈值有一定关系，所以可以自行调试阈值大小

因为最终结果要求输出整数，所以最后返回结果时将浮点数结果转成整型即可

----------

kotlin 代码如下：

```kotlin
/**
 * 1017 / 1017 test cases passed.
 * Status: Accepted
 * Runtime: 204 ms
 */
class Solution {
    fun mySqrt(x: Int): Int {
        val err: Double = 1e-10
        var t = x.toDouble()
        while (Math.abs(t - x.toDouble() / t) > err)
            t = (x.toDouble() / t + t) / 2.0
        return t.toInt()
    }
}
```