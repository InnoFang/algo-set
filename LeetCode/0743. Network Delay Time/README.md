# [743. Network Delay Time](https://leetcode-cn.com/problems/network-delay-time/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Shortest Path`](https://leetcode.com/tag/shortest-path/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)
* [`Breadth-first Search`](https://leetcode.com/tag/breadth-first-search/)
* [`Heap`](https://leetcode.com/tag/heap/)
* [`Graph`](https://leetcode.com/tag/graph/)

</details>
<br />

You are given a network of `n` nodes, labeled from `1` to `n`. You are also given `times`, a list of travel times as directed edges `times[i] = (ui, vi, wi)`, where `ui` is the source node, `vi` is the target node, and `wi` is the time it takes for a signal to travel from source to target.

We will send a signal from a given node `k`. Return the time it takes for all the `n` nodes to receive the signal. If it is impossible for all the `n` nodes to receive the signal, return `-1`.

**Example 1:**

![](https://assets.leetcode.com/uploads/2019/05/23/931_example_1.png)

```
Input: times = [[2,1,1],[2,3,1],[3,4,1]], n = 4, k = 2
Output: 2
```

**Example 2:**

```
Input: times = [[1,2,1]], n = 2, k = 1
Output: 1
```

**Example 3:**

```
Input: times = [[1,2,1]], n = 2, k = 2
Output: -1
```

**Constraints:**

 + `1 <= k <= n <= 100`
 + `1 <= times.length <= 6000`
 + `times[i].length == 3`
 + `1 <= ui, vi <= n`
 + `ui != vi`
 + `0 <= wi <= 100`
 + All the pairs `(ui, vi)` are **unique**. (i.e., no multiple edges.)
