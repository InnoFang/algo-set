# [127. Word Ladder](https://leetcode.com/problems/word-ladder/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Breadth-first Search`](https://leetcode.com/tag/breadth-first-search/)

</details>
<br />


Given two words (_beginWord_ and _endWord_), and a dictionary's word list, find the length of shortest transformation sequence from _beginWord_ to _endWord_, such that:

 1. Only one letter can be changed at a time.
 2. Each transformed word must exist in the word list. Note that beginWord is not a transformed word.

For example,

Given:

_beginWord_ = `"hit"`

_endWord_ = `"cog"`

wordList = `["hot","dot","dog","lot","log","cog"]`

As one shortest transformation is `"hit" -> "hot" -> "dot" -> "dog" -> "cog"`,
return its length `5`.

**Note:**

 * Return 0 if there is no such transformation sequence.
 * All words have the same length.
 * All words contain only lowercase alphabetic characters.
 * You may assume no duplicates in the word list.
 * You may assume beginWord and endWord are non-empty and are not the same.