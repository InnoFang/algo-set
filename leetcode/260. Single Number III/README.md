# [260. Single Number III](https://leetcode.com/problems/single-number-iii/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Bit Manipulation`](https://leetcode.com/tag/bit-manipulation/)

</details>
<br />


Given an array of numbers `nums`, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

For example:

Given `nums = [1, 2, 1, 3, 2, 5]`, return `[3, 5]`.

**Note:**

 1. The order of the result is not important. So in the above example, [5, 3] is also correct.
 2. Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?


## Solution

题目大意就是一个数组里，只有两个元素出现了一次，其余其他元素都出现了两次，找到并返回出现了一次的两个元素

如果这题目的是找出唯一出现一次的元素，其余元素都出现两次的话，可以使用异或（xor）遍历一遍数组即可实现

> **异或满足的定理如下**

>> a ^ b = b ^ a 满足交换律
>>
>> 0 ^ a = a  任意数与 0 异或等于他本身
>>
>> a ^ a = a  任意数与自身异或等于 0
>
>_可以自行将两数化为二进制来验证_

但是现在是两个出现了一次的元素，那么遍历一遍数组并取异或最终会得到这两个只出现一次的元素的异或值

我们知道，异或的原则是两个比特位不相同则为 1，否则为 0。那么对两个仅出现了一次的两个值的异或值来说，如果某个比特位为 1，那么两个值对应的比特位不相同

那么我们可以把异或值其中的一个比特位为依据，将原数组分割为两部分，该比特位为 0 的一部分，不为 0 的为一部分，这样再分别对两部分内的值遍历一遍并取异或则能得到我们想要的结果

这里关键就是如何找到那个可以作为分隔依据的比特位，简便起见，我们选择从右到左第一个为 1 的比特位，有三种方式

假设，有两个数

 + 3（二进制：0011）
 + 5（二进制：0101）

这两个值异或的二进制为 0110，记为 `x`。找到最右边的第一个不同的比特位的方式有如下三种

 + bitFlag = x & -x
 + bitFlag = x & ~(x - 1)
 + bitFlag = x & (~x + 1)

至于为什么可以这么做，我们用二进制模拟一遍即可，那第一个为例，`x` 与它的负数取位与，因为在计算机中，负数是要变成它补码再进行运算的，所以

    x = 0110
    -x = 1010 (补码为 x 取反再加 1)
    x  &  -x
      0110
    & 1010
    -------
      0010

    即两数从右到左第二个比特位是不同的

其余两个同理，可以自己尝试算一下

kotlin 代码参考如下

```kotlin
class Solution {
    fun singleNumber(nums: IntArray): IntArray {
        // 遍历一遍数组并两两异或，最终能得到唯一出现一次的两值的异或值
        val x = nums.reduce { acc, n -> acc xor n }

        // 取得从右到左第一个不同的比特的三种方式
//        val bitFlag = x and -x
        val bitFlag = x and (x - 1).inv()
//        val bitFlag = x and (x.inv() + 1)

        // 保存结果的数组
        val res = IntArray(2) { 0 }

        // 遍历一遍数组，按 bitFlag 这个比特位值的不同可以划分为两种情况，分别取异或
        nums.forEach {
            when {
                it and bitFlag != 0 -> res[0] = res[0] xor it
                else -> res[1] = res[1] xor it
            }
        }
        return res
    }
}

```