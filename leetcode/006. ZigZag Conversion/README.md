# [6. ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`String`](https://leetcode.com/tag/string/)

</details>
<br />


The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

    P   A   H   N
    A P L S I I G
    Y   I   R

And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows:

    string convert(string text, int nRows);

`convert("PAYPALISHIRING", 3)` should return `"PAHNAPLSIIGYIR"`.

## Solution

**题目大意**

给定一个字符串，并给定一个行数 `rows` ，将字符串转化为行数为 `rows` 的呈 “之” 型的排列，最后返回按行读取形成的新字符串

比如 `"PAYPALISHIRING"`，行数为 3 的 “之” 型的排列如下

    P   A   H   N
    A P L S I I G
    Y   I   R

按行读取的新字符串为 `"PAHNAPLSIIGYIR"`

**解题思路**

这一题最直观的想法，就是用一个二维数组，根据行数和字符串长度算出列数，根据 “之” 型排列的顺序填入，然后再按行构成新的字符串即可

不过，这一题其实是有规律的，不需要构造一个二维数组，我们来看看有什么规律，简便起见我们直接用数字代替字符

> 行数为 3 的排列

    0     4     8     12     16     20
    1  3  5  7  9  11 13  15 17  19 21
    2     6     10    14     18     22

行数为 3 时

 + 以第 1 行为例，第一个数到第二个数的距离为 4
 + 以第 2 行为例，第一个数到第二个数的距离为 2，但是一个大的间距还是 4
 + 以第 3 行为例，第一个数到第二个数的距离为 4

考虑一下 4 在排列中与行数的关系，其实是 4 = 2 * 3 - 2

> 行数为 4 的排列

    0        6        12        18
    1     5  7     11 13     17 19
    2  4     8  10    14  16    20
    3        9        15        21

行数为 4 时

 + 以第 1 行为例，第一个数到第二个数的距离为 6
 + 以第 2 行为例，第一个数到第二个数的距离为 4，第二个和第三个的距离为 2，但是一个大的间距还是 6
 + 以第 3 行为例，第一个数到第二个数的距离为 2，第二个和第三个的距离为 4，但是一个大的间距还是 6
 + 以第 4 行为例，第一个数到第二个数的距离为 6

考虑一下 6 在排列中与行数的关系，其实是 6 = 2 * 4 - 2

> 行数为 5 的排列

    0           8           16
    1        7  9        15 17
    2     6    10     14    18
    3  5       11  13       19
    4          12           20

行数为 5 时

 + 以第 1 行为例，第一个数到第二个数的距离为 8
 + 以第 2 行为例，第一个数到第二个数的距离为 6，第二个和第三个的距离为 2，但是一个大的间距还是 8
 + 以第 3 行为例，第一个数到第二个数的距离为 4，第二个和第三个的距离为 4，但是一个大的间距还是 8
 + 以第 4 行为例，第一个数到第二个数的距离为 2，第二个和第三个的距离为 6，但是一个大的间距还是 8
 + 以第 5 行为例，第一个数到第二个数的距离为 8

考虑一下 8 在排列中与行数的关系，其实是 6 = 2 * 5 - 2


_综上_

 + 每一个间距与行数的关系为 n = 2 * row - 2
 + 每个大的间距都相等，如果有中间的数，该数的位置为当前行 i + 2 * row - 2 - 2 * i
 + 第一列的数不适用于这个公式，所以要特殊处理
 + 第一行和最后一行要特殊处理
 + 需要注意，若**输入字符串为空**或者**输入行数为1**或者**字符串长度小于行数**，直接返回输入字符串即可

-----

kotlin 代码如下：

```kotlin
/**
 * 1158 / 1158 test cases passed.
 * Status: Accepted
 * Runtime: 468 ms
 */
class Solution {
    fun convert(s: String, numRows: Int): String {
        val len = s.length
        if (len == 0 || len <= numRows || numRows == 1) return s
        val res = StringBuilder()
        for (i in 0 until numRows) {
            var idx = i
            res.append(s[idx])
            while (idx < len) {
                if (i != numRows - 1) {
                    idx += 2 * numRows - 2 - 2 * i
                    if (idx < len) res.append(s[idx])
                }

                if (i != 0) {
                    idx += 2 * i
                    if (idx < len) res.append(s[idx])
                }
            }
        }
        return res.toString()
    }
}
```