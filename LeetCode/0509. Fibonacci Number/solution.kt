/**
 * 31 / 31 test cases passed
 * Status: Accepted
 * Runtime: 164 ms
 */
class Solution {
    fun fib(N: Int): Int {
        if (N < 2) return N
        val memo = MutableList(N + 1) { 0 }
        memo[0] = 0
        memo[1] = 1
        return (2..N).forEach { memo[it] = memo[it - 1] + memo[it - 2]}.let{ memo[N]}
    }
}
