# [744. Find Smallest Letter Greater Than Target](https://leetcode-cn.com/problems/find-smallest-letter-greater-than-target/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Binary Search`](https://leetcode.com/tag/binary-search/)

</details>
<br />

Given a characters array `letters` that is sorted in **non-decreasing** order and a character `target`, return *the smallest character in the array that is larger than `target`*.

**Note** that the letters wrap around.

 + For example, if `target == 'z'` and `letters == ['a', 'b']`, the answer is `'a'`.


**Example 1:**

```
Input: letters = ["c","f","j"], target = "a"
Output: "c"
```

**Example 2:**

```
Input: letters = ["c","f","j"], target = "c"
Output: "f"
```

**Example 3:**

```
Input: letters = ["c","f","j"], target = "d"
Output: "f"
```

**Constraints:**

 + `2 <= letters.length <= 10^4`
 + `letters[i]` is a lowercase English letter.
 + `letters` is sorted in **non-decreasing** order.
 + `letters` contains at least two different characters.
 + `target` is a lowercase English letter.
