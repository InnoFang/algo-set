# [1996. The Number of Weak Characters in the Game](https://leetcode-cn.com/problems/the-number-of-weak-characters-in-the-game/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Greedy`](https://leetcode.com/tag/greedy/)
* [`Stack`](https://leetcode.com/tag/stack/)

</details>
<br />

You are playing a game that contains multiple characters, and each of the characters has **two** main properties: **attack** and **defense**. You are given a 2D integer array properties where `properties[i] = [attack_i, defense_i]` represents the properties of the `ith` character in the game.

A character is said to be **weak** if any other character has **both** attack and defense levels **strictly greater** than this character's attack and defense levels. More formally, a character `i` is said to be **weak** if there exists another character `j` where `attack_j > attack_i` and `defense_j > defense_i`.

Return *the number of **weak** characters*.


**Example 1:**

```
Input: properties = [[5,5],[6,3],[3,6]]
Output: 0
Explanation: No character has strictly greater attack and defense than the other.
```

**Example 2:**

```
Input: properties = [[2,2],[3,3]]
Output: 1
Explanation: The first character is weak because the second character has a strictly greater attack and defense.
```

**Example 3:**

```
Input: properties = [[1,5],[10,4],[4,3]]
Output: 1
Explanation: The third character is weak because the second character has a strictly greater attack and defense.
```

**Constraints:**

 + `2 <= properties.length <= 10^5`
 + `properties[i].length == 2`
 + `1 <= attacki, defensei <= 10^5`
