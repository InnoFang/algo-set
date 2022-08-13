# [768. Max Chunks To Make Sorted II](https://leetcode.cn/problems/max-chunks-to-make-sorted-ii/)

![](https://img.shields.io/badge/Difficulty-Hard-red.svg)

<details>
<summary>Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Sorting`](https://leetcode.com/tag/sorting/)
* [`Greedy`](https://leetcode.com/tag/greedy/)
* [`Stack`](https://leetcode.com/tag/stack/)
* [`Monotonic Stack`](https://leetcode.com/tag/monotonic-stack/)

</details>
<br />

You are given an integer array `arr`.

We split `arr` into some number of **chunks** (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.

Return *the largest number of chunks we can make to sort the array*.

**Example 1:**

    Input: arr = [5,4,3,2,1]
    Output: 1
    Explanation:
    Splitting into two or more chunks will not return the required result.
    For example, splitting into [5, 4], [3, 2, 1] will result in [4, 5, 1, 2, 3], which isn't sorted.

**Example 2:**

    Input: arr = [2,1,3,4,4]
    Output: 4
    Explanation:
    We can split into two chunks, such as [2, 1], [3, 4, 4].
    However, splitting into [2, 1], [3], [4], [4] is the highest number of chunks possible.

**Constraints:**

 + `1 <= arr.length <= 2000`
 + `0 <= arr[i] <= 10^8`
