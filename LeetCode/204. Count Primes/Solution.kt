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


/**
 * 20 / 20 test cases passed.
 * Status: Accepted
 * Runtime: 385 ms
 */
class Solution2 {
    fun countPrimes(n: Int): Int {
        val isPrime = BooleanArray(n) { true }
        return (2 until n).count { i ->
            if (isPrime[i]) (2 * i until n step i).forEach { isPrime[it] = false }
            isPrime[i]
        }
    }
}

fun main(args: Array<String>) {
    Solution2().countPrimes(10).let(::println)
}