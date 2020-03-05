/**
 * Created by Inno Fang on 2017/12/4.
 */

/**
 * 1108 / 1108 test cases passed.
 * Status: Accepted
 * Runtime: 372 ms
 */
class Solution {
    fun isPowerOfTwo(n: Int): Boolean {
        if (n == 0) return false
        val res = Math.log10(n.toDouble()) / Math.log10(2.0)
        return (res - res.toInt()) < 1e-10
    }
}

/**
 * 1108 / 1108 test cases passed.
 * Status: Accepted
 * Runtime: 204 ms
 */
class Solution2 {
    fun isPowerOfTwo(n: Int): Boolean {
        return n > 0 && (1073741824 % n == 0)
    }
}

/**
 * 1108 / 1108 test cases passed.
 * Status: Accepted
 * Runtime: 196 ms
 */
class Solution3 {
    fun isPowerOfTwo(n: Int): Boolean {
        return n > 0 && (n and n-1 == 0)
    }
}

fun main(args: Array<String>) {
    Solution3().isPowerOfTwo(2).let(::println)  // T
    Solution3().isPowerOfTwo(4).let(::println)  // T
    Solution3().isPowerOfTwo(6).let(::println)  // F
    Solution3().isPowerOfTwo(8).let(::println)  // T
    Solution3().isPowerOfTwo(10).let(::println) // F
    Solution3().isPowerOfTwo(12).let(::println) // F
    Solution3().isPowerOfTwo(16).let(::println) // T
}