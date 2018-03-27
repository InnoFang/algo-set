/**
 * Created by Inno Fang on 2018/3/27.
 */

/**
 * 44 / 44 test cases passed.
 * Status: Accepted
 * Runtime: 244 ms
 */
class Solution {
    fun rotateString(A: String, B: String): Boolean {
        return A.length == B.length && (A + A).contains(B)
    }
}

fun main(args: Array<String>) {
    Solution().rotateString("aa", "a").let(::println)
}