/**
 * Created by Inno Fang on 2018/2/16.
 */

/**
 * 20 / 20 test cases passed.
 * Status: Accepted
 * Runtime: 441 ms
 */
class Solution {
    fun countPrimes(n: Int): Int {
        var count = 0
        val isPrime = BooleanArray(n) { true }
        (2 until n).forEach { i ->
            if (isPrime[i]) {
                count++
                (i until n step i).forEach { isPrime[it] = false }
            }
        }
        return count
    }
}

fun main(args: Array<String>) {
    Solution().countPrimes(10).let(::println)
}