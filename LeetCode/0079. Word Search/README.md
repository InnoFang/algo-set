# [79. Word Search](https://leetcode.com/problems/word-search/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Related Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Backtracking`](https://leetcode.com/tag/backtracking/)

</details>
<br />

Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

For example,
Given **board** =

    [
      ['A','B','C','E'],
      ['S','F','C','S'],
      ['A','D','E','E']
    ]


**word** = `"ABCCED"`, -> returns `true`,

**word** = `"SEE"`, -> returns `true`,

**word** = `"ABCB"`, -> returns `false`.
