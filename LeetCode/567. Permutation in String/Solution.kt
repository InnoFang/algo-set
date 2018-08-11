/**
 * Created by Inno Fang on 2018/2/21.
 */


/**
 * 102 / 102 test cases passed.
 * Status: Accepted
 * Runtime: 220 ms
 */
class Solution {
    fun checkInclusion(s1: String, s2: String): Boolean {
        if (s1.length > s2.length) return false
        val slide = IntArray(26) { 0 }
        s1.indices.forEach { slide[s1[it] - 'a']++ }
        (0 until s2.length).forEach {
            slide[s2[it] - 'a']--
            if (it >= s1.length) slide[s2[it - s1.length] - 'a']++
            if (slide.none { it != 0 }) return true
        }
        return false
    }
}

fun main(args: Array<String>) {
    Solution().checkInclusion("ab", "eidbaooo").let(::println)
}
