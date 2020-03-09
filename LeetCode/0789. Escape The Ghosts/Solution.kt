/**
 * 40 / 40 test cases passed.
 * Status: Accepted
 * Runtime: 256 ms
 */
class Solution {
    fun escapeGhosts(ghosts: Array<IntArray>, target: IntArray): Boolean {
        val distance = fun(x: Int, y: Int) = Math.abs(x - target[0]) + Math.abs(y - target[1])
        val d = distance(0, 0)
        ghosts.forEach { if (distance(it[0], it[1]) <= d) return false }
        return true
    }
}

/**
 * 40 / 40 test cases passed.
 * Status: Accepted
 * Runtime: 328 ms
 */
class Solution2 {
    fun escapeGhosts(ghosts: Array<IntArray>, target: IntArray): Boolean {
        // val distance = fun(g: IntArray) = target.zip(g, { x1, x2 -> Math.abs(x1 + x2) }).sum()
        val distance = fun(g: IntArray) = (0..1).sumBy { Math.abs(g[it] - target[it]) }
        val d = target.sumBy(Math::abs)
        ghosts.forEach { if (distance(it) <= d) return false }
        return true
    }
}

fun main(args: Array<String>) {
    Solution().escapeGhosts(arrayOf(
            intArrayOf(1, 0),
            intArrayOf(0, 3)
    ), intArrayOf(0, 1)).let(::println)
}
