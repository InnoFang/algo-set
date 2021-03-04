# [354. Russian Doll Envelopes](https://leetcode-cn.com/problems/russian-doll-envelopes/)

![](https://img.shields.io/badge/Difficulty-Hard-red.svg)

<details>
<summary>Topics</summary>

* [`Binary Search`](https://leetcode-cn.com/tag/binary-search/)
* [`Dynamic Programming`](https://leetcode-cn.com/tag/dynamic-programming/)

</details>
<br />

You have a number of envelopes with widths and heights given as a pair of integers `(w, h)`. One envelope can fit into another if and only if both the width and height of one envelope is greater than the width and height of the other envelope.

What is the maximum number of envelopes can you Russian doll? (put one inside other)

**Note:**

Rotation is not allowed.

**Example:**

```
Input: [[5,4],[6,4],[6,7],[2,3]]
Output: 3 
Explanation: The maximum number of envelopes you can Russian doll is 3 ([2,3] => [5,4] => [6,7]).
```
