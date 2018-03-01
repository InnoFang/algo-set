# [648. Replace Words](https://leetcode.com/problems/replace-words/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Hash Table`](https://leetcode.com/tag/hash-table/)
* [`Trie`](https://leetcode.com/tag/trie/)

</details>
<br />


In English, we have a concept called `root`, which can be followed by some other words to form another longer word - let's call this word `successor`. For example, the root `an`, followed by `other`, which can form another word `another`.

Now, given a dictionary consisting of many roots and a sentence. You need to replace all the `successor` in the sentence with the `root` forming it. If a `successor` has many `roots` can form it, replace it with the root with the shortest length.

You need to output the sentence after the replacement.

**Example 1:**

> **Input:** dict = ["cat", "bat", "rat"]
>
> sentence = "the cattle was rattled by the battery"
>
> **Output:** "the cat was rat by the bat"

**Note:**

 1. The input will only have lower-case letters.
 2. 1 <= dict words number <= 1000
 3. 1 <= sentence words number <= 1000
 4. 1 <= root length <= 100
 5. 1 <= sentence words length <= 1000

# Solution

**题目大意如下：**

给定一个字符数组作为字典，字典内的所有字符串称为 _root_，能够由 _root_ 和其他单词组成的单词称为 _successor_

比如，_root_ `an` ，可以和单词 `other` 组成另一个单词 `another`。单词 `another` 就成为 _root_ `an` 的一个 _successor_

现在给一个全是有小写字母组成的句子，找到句子中的 _successor_ 并替换成对应的 _root_ ，然后输出替换后的句子，
如果一个单词有多个 _root_ 单词的话，应替换成长度最小的 _root_

**这题的思路大致如下**

我可以把句子按空格 `" "` 分割成一个个单词，然后对每个单词去 `dict` 数组里找是否有匹配的，若有则替换，否则不替换

因为 `dict` 的长度范围为 `[1, 1000]` ，句子单词数范围也为 `[1, 1000]`，如果用二重循环暴搜的话，可能会超时。
因此我们需要对 dict 做个优化，我们可以以每个单词的首字母为分组，这样在对句子中的单词进行判断时，
只需要根据首字母找到对应的分组，对这个组内的 _root_ 进行查找，这样会更快。此外如果有多个 _root_ 匹配上了的话，就还需从中选出长度最小的 _root_ 进行替换

最后再把字符串数组变成字符串返回即可

------------------

kotlin 代码如下

```kotlin
/**
 * 124 / 124 test cases passed.
 * Status: Accepted
 * Runtime: 444 ms
 */
class Solution {
    fun replaceWords(dict: List<String>, sentence: String): String {
        val store = dict.groupBy { it[0] }
        return sentence.split(" ")
                .map { word ->
                    if (store.containsKey(word[0])) {
                        store[word[0]]!!
                                .filter { word.startsWith(it) }
                                .let { if (it.isEmpty()) word else it.minBy { it.length } }
                    } else word
                }.joinToString(" ")
    }
}
```