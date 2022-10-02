# [777. Swap Adjacent in LR String](https://leetcode.cn/problems/swap-adjacent-in-lr-string/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`String`](https://leetcode.com/tag/string/)

</details>
<br />

In a string composed of `'L'`, `'R'`, and `'X'` characters, like `"RXXLRXRXL"`, a move consists of either replacing one occurrence of `"XL"` with `"LX"`, or replacing one occurrence of `"RX"` with `"XR"`. Given the starting string `start` and the ending string `end`, return `True` if and only if there exists a sequence of moves to transform one string to the other.

**Example 1:**

    Input: start = "RXXLRXRXL", end = "XRLXXRRLX"
    Output: true
    Explanation: We can transform start to end following these steps:
    RXXLRXRXL ->
    XRXLRXRXL ->
    XRLXRXRXL ->
    XRLXXRRXL ->
    XRLXXRRLX

**Example 2:**

    Input: start = "X", end = "L"
    Output: false

**Constraints:**

 + `1 <= start.length <= 10^4`
 + `start.length == end.length`
 + Both `start` and `end` will only consist of characters in `'L'`, `'R'`, and `'X'`.
