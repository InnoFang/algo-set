# [470. Implement Rand10() Using Rand7()](https://leetcode-cn.com/problems/implement-rand10-using-rand7/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Math`](https://leetcode.com/tag/math/)
* [`Rejection Sampling`](https://leetcode.com/tag/regection-sampling/)
* [`Probability and Statistics`](https://leetcode.com/tag/probability-and-statistics/)
* [`Randomized`](https://leetcode.com/tag/randomized/)

</details>
<br />

Given the **API** `rand7()` that generates a uniform random integer in the range `[1, 7]`, write a function `rand10()` that generates a uniform random integer in the range `[1, 10]`. You can only call the API `rand7()`, and you shouldn't call any other API. Please **do not** use a language's built-in random API.

Each test case will have one **internal** argument n, the number of times that your implemented function `rand10()` will be called while testing. Note that this is **not an argument** passed to `rand10()`.

**Follow up:**

 + What is the **expected value** for the number of calls to `rand7()` function?
 + Could you minimize the number of calls to r`and7()`?

**Example 1:**

```
Input: n = 1
Output: [2]
```

**Example 2:**

```
Input: n = 2
Output: [2,8]
```

**Example 3:**

```
Input: n = 3
Output: [3,8,10]
```

**Constraints:**

 + `1 <= n <= 10^5`
