/**
 * Created by Inno Fang on 2018/3/25.
 */

/**
 * 94 / 94 test cases passed.
 * Status: Accepted
 * Runtime: 336 ms
 */
class Solution {
    private var lo = 0
    private var max = 0
    fun longestPalindrome(s: String): String {
        val len = s.length
        if (len < 2) return s
        (0..s.lastIndex).forEach {
            find(s, it, it)
            find(s, it, it + 1)
        }
        return s.substring(lo, lo + max)
    }

    private fun find(s: String, from: Int, to: Int) {
        val len = s.length
        var i = from
        var j = to
        while (i >= 0 && j < len && s[i] == s[j]) {
            i--
            j++
        }
        if (j - i - 1 > max) {
            max = j - i - 1
            lo = i + 1
        }
    }
}

fun main(args: Array<String>) {
    Solution().longestPalindrome("babad").let(::println)
    Solution().longestPalindrome("Is PAT&TAP symmetric?").let(::println)
}