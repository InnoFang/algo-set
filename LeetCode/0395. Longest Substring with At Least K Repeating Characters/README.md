# [395. Longest Substring with At Least K Repeating Characters](https://leetcode-cn.com/problems/longest-substring-with-at-least-k-repeating-characters/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Recursion`](https://leetcode-cn.com/tag/recursion/)
* [`Divide and Conquer`](https://leetcode-cn.com/tag/divide-and-conquer/)
* [`Sliding Window`](https://leetcode-cn.com/tag/sliding-window/)

</details>
<br />


Given a string `s` and an integer `k`, return *the length of the longest substring of `s` such that the frequency of each character in this substring is greater than or equal to `k`*.

**Example 1:**

```
Input: s = "aaabb", k = 3
Output: 3
Explanation: The longest substring is "aaa", as 'a' is repeated 3 times.
```

**Example 2:**

```
Input: s = "ababbc", k = 2
Output: 5
Explanation: The longest substring is "ababb", as 'a' is repeated 2 times and 'b' is repeated 3 times.
```

**Constraints:**

 + `1 <= s.length <= 10^4`
 + `s` consists of only lowercase English letters.
 + `1 <= k <= 10^5`

