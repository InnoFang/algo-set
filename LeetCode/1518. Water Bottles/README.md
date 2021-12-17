# []()

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)
![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)
![](https://img.shields.io/badge/Difficulty-Hard-red.svg)


<details>
<summary>Topics</summary>

* [`Math`](https://leetcode.com/tag/math/)

</details>
<br />

Given `numBottles` full water bottles, you can exchange `numExchange` empty water bottles for one full water bottle.

The operation of drinking a full water bottle turns it into an empty bottle.

Return the **maximum** number of water bottles you can drink.


**Example 1:**

![](https://assets.leetcode.com/uploads/2020/07/01/sample_1_1875.png)

```
Input: numBottles = 9, numExchange = 3
Output: 13
Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
Number of water bottles you can drink: 9 + 3 + 1 = 13.
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/07/01/sample_2_1875.png)

```
Input: numBottles = 15, numExchange = 4
Output: 19
Explanation: You can exchange 4 empty bottles to get 1 full water bottle. 
Number of water bottles you can drink: 15 + 3 + 1 = 19.
```

**Example 3:**

```
Input: numBottles = 5, numExchange = 5
Output: 6
```

**Example 4:**

```
Input: numBottles = 2, numExchange = 3
Output: 2
```

**Constraints:**

 + `1 <= numBottles <= 100`
 + `2 <= numExchange <= 100`
