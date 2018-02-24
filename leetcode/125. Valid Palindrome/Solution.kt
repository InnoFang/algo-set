/**
 * Created by Inno Fang on 2018/2/24.
 */


/**
 * 476 / 476 test cases passed.
 * Status: Accepted
 * Runtime: 292 ms
 */
class Solution {
    fun isPalindrome(s: String): Boolean {
        if (s == "") return true
        val chars = s.toCharArray()
        var lo = 0 ; var hi = chars.lastIndex
        while (lo < hi) {
            while (lo < hi && !chars[lo].isLetterOrDigit()) lo++
            while (lo < hi && !chars[hi].isLetterOrDigit()) hi--
            if (!chars[lo].equals(chars[hi], true)) return false
            lo++; hi--
        }
        return true
    }
}

fun main(args: Array<String>) {
    Solution().isPalindrome("A man, a plan, a canal: Panama").let(::println)
    Solution().isPalindrome("race a car").let(::println)
    Solution().isPalindrome("0P").let(::println)
}

operator fun String.invoke() = println("test: $this")