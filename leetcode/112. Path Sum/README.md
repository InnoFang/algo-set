# [112. Path Sum](https://leetcode.com/problems/path-sum/description/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Tree`](https://leetcode.com/tag/tree/)
* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)

</details>
<br />

Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

**Note**: A leaf is a node with no children.

**Example:**

Given the below binary tree and `sum = 22`,

          5
         / \
        4   8
       /   / \
      11  13  4
     /  \      \
    7    2      1

return true, as there exist a root-to-leaf path `5->4->11->2` which sum is 22.