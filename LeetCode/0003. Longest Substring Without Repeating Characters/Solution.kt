/**
 * Created by Inno Fang on 2018/2/8.
 */


/**
 * 983 / 983 test cases passed.
 * Status: Accepted
 * Runtime: 396 ms
 */
class Solution {
    fun lengthOfLongestSubstring(s: String): Int {
        val freq = IntArray(256) { 0 }
        var l = 0
        var r = -1
        var res = 0
        while (l < s.length) {
            if (r + 1 < s.length && freq[s[r + 1].toInt()] == 0) freq[s[++r].toInt()]++
            else freq[s[l++].toInt()]--

            res = maxOf(res, r - l + 1)
        }
        return res
    }
}

fun main(args: Array<String>) {
    Solution().lengthOfLongestSubstring("abcabcbb").let(::println)
    Solution().lengthOfLongestSubstring("bbbbb").let(::println)
    Solution().lengthOfLongestSubstring("pwwkew").let(::println)
}