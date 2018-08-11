/**
 * Created by Inno Fang on 2017/12/3.
 */

/**
 * 586 / 586 test cases passed.
 * Status: Accepted
 * Runtime: 1112 ms
 */
class Solution {
    fun numSquares(n: Int): Int {
        val dp = (0..n + 1).toMutableList()
        // perfect number that lower than n
        val pn = (1..n).map { it * it }.takeWhile { it <= n }.toMutableList()

        (1..n).forEach { i ->
            pn.takeWhile { it <= i }.forEach { j ->
                dp[i] = Math.min(dp[i], 1 + dp[i - j])
            }
        }
        return dp[n]
    }

}
/**
 * 586 / 586 test cases passed.
 * Status: Accepted
 * Runtime: 494 ms
 */
class Solution2 {
    fun numSquares(n: Int): Int {
        val que = java.util.LinkedList<Pair<Int, Int>>()
        val visited = MutableList(n) { false }
        que.add(Pair(n, 0))
        while (que.isNotEmpty()) {
            val num = que.peek().first
            val step = que.peek().second
            que.poll()

            for (i in (1..n)) {
                val tmp = num - i * i
                if (tmp < 0) break
                if (tmp == 0) return step + 1
                if (!visited[tmp]) {
                    que.add(Pair(tmp, step + 1))
                    visited[tmp] = true
                }
            }
        }
        // cannot find.
        return -1
    }
}

fun main(args: Array<String>) {
    Solution2().numSquares(1).let(::println) // 1
    Solution2().numSquares(4).let(::println) // 1
    Solution2().numSquares(12).let(::println) // 3
    Solution2().numSquares(13).let(::println) // 2
    Solution2().numSquares(16).let(::println) // 1
    Solution2().numSquares(24).let(::println) // 3
    Solution2().numSquares(50).let(::println) // 2
}