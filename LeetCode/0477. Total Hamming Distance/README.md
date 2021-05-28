# []()

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Bit Manipulation`](https://leetcode-cn.com/tag/bit-manipulation/)

</details>
<br />

The [Hamming distance](https://en.wikipedia.org/wiki/Hamming_distance) between two integers is the number of positions at which the corresponding bits are different.

Given an integer array `nums`, return *the sum of **Hamming distances** between all the pairs of the integers in `nums`*.

**Example 1:**

```
Input: nums = [4,14,2]
Output: 6
Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
showing the four bits relevant in this case).
The answer will be:
HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
```

**Example 2:**

```
Input: nums = [4,14,4]
Output: 4
```

**Constraints:**

 + `1 <= nums.length <= 10^5`
 + `0 <= nums[i] <= 10^9`
