# [71. Simplify Path]()

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`String`](https://leetcode.com/tag/string/)
* [`Stack`](https://leetcode.com/tag/stack/)

</details>
<br />


Given an absolute path for a file (Unix-style), simplify it.

For example,

**path** = `"/home/"`, => `"/home"`

**path** = `"/a/./b/../../c/"`, => `"/c"`

<details>
<summary style="color:#4FC3F7">click to show corner cases.</summary>

**Corner Cases:**

 + Did you consider the case where **path** = `"/../"`? <br /> In this case, you should return `"/"`.
 + Another corner case is the path might contain multiple slashes `'/'` together, such as `"/home//foo/"`. <br />
   In this case, you should ignore redundant slashes and return `"/home/foo"`.

</details>
<br />
