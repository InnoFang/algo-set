# [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)


![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Hash Table`](https://leetcode.com/tag/hash-table/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`String`](https://leetcode.com/tag/string/)

</details>
<br />

Given a string, find the length of the **longest substring** without repeating characters.

**Examples:**

Given `"abcabcbb"`, the answer is `"abc"`, which the length is 3.

Given `"bbbbb"`, the answer is `"b"`, with the length of 1.

Given `"pwwkew"`, the answer is `"wke"`, with the length of 3. Note that the answer must be a **substring**, `"pwke"` is a subsequence and not a substring.


## Solution

本题大意就是从一个给定的字符串中，找到一个**最长的不含有重复字符的连续子串**，最后返回它的长度


比如，给定 `"abcabcbb"`，在这个字符串中，符合要求的结果是 `"abc"`，它的长度是 3

该题的解法是一个典型的 _滑动窗口_，那么我们来模拟一下这个字符串，假设当前的情形如下，

    abcabcbb
      ^  ^
      l  r

1. 我们有两个下标， `l` 和 `r` 分别用来表示子串的两端，现在我们这个滑动窗口扫到的
子串为 `cabc` 很明显时有重复字符 `c` 的，所以，我们这个时候就需要移动我们的 `l` 下标，
让它加一，使得子串为 `abc`，子串符合要求，那么我们就可以更新结果（即子串的长度，前提是大于当前最大的长度）。

         abcabcbb
            ^ ^
            l r

2. 接着我们还需要往下遍历，即下标 `r` 向前移动，那么在遍历时就需要判断下个字符是否是重复字符
，在这里 `r` 下标的下一个字符为 b ，而我们的子串内还有该字符，所以 `r` 就不能往前移动，
而需要使 `l` 往前移动，使得子串不能含有下一个重复字符，直到 `l` 移动到如下位置时才满足要求

        abcabcbb
             ^
            l/r

此时，`l` 和 `r` 重合了，但是它的子串为 c ，也是满足要求的，此时 `r` 就可以继续往前移动了，重复 步骤 1 和 2
 直到 `l` 走到了字符串的末尾

以上就是该题的大致思路


那么这里的一个问题就是，如何查找子串内是否含有下一个要找的重复元素，可以使用遍历一遍的方式，也可以用语言内置的查找函数，不过这里有个小技巧

因为字符都是 ASCII 码字符，ASCII 含有 128 个，扩展的 ASCII 码字符是 256 个，所以我们可以使用一个 256 长（或 128）的数组来存取子串的字符出现的频率

比如定义一个数组 freq 长度 256，初始化值为 0

当 `r` 遍历到一个字符时，就把对应字符的值加 1，当 `l` 遍历到一个字符时，就把对应字符的值减 1，

所以判断下一个字符时候为子串内已有的字符则可以判断下一个字符的在 freq 中对应的值是否为 0，
若为 0 则对应字符加一，并且下标 `r` + 1，否则，`r` 不动，`l` 下标对应的字符减一，`l` + 1

参考 kotlin 代码如下

```kotlin
class Solution {
    fun lengthOfLongestSubstring(s: String): Int {
        val freq = IntArray(256) { 0 }
        var l = 0
        var r = -1
        var res = 0
        while (l < s.length) {
            if (r + 1 < s.length && freq[s[r + 1].toInt()] == 0) freq[s[++r].toInt()]++
            else freq[s[l++].toInt()]--

            res = maxOf(res, r - l + 1)
        }
        return res
    }
}
```