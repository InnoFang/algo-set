/**
 * Created by Inno Fang on 2018/1/24.
 */
class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        val alpha = IntArray(26) { 0 }
        s.forEach { alpha[it.toInt() - 'a'.toInt()]++ }
        t.forEach { alpha[it.toInt() - 'a'.toInt()]-- }
        return alpha.none { it != 0 }
    }
}

fun main(args: Array<String>) {
    Solution().isAnagram("anagram", "nagaram").let(::println)
    Solution().isAnagram("rat", "car").let(::println)
    Solution().isAnagram("", "car").let(::println)
    Solution().isAnagram("", "").let(::println)
    Solution().isAnagram("rat", "").let(::println)
    Solution().isAnagram("aa", "a").let(::println)
    Solution().isAnagram("ccac", "aacc").let(::println)
}