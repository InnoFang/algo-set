/**
 * Created by Inno Fang on 2017/12/2.
 */

/**
 * 43 / 43 test cases passed.
 * Status: Accepted
 * Runtime: 336 ms
 */
class Solution {
    fun minimumTotal(triangle: List<List<Int>>): Int {
        val tri = triangle as List<MutableList<Int>>
        (tri.lastIndex - 1 downTo 0).forEach { i ->
            (0 until tri[i].size).forEach { j ->
                tri[i][j] += minOf(tri[i + 1][j], tri[i + 1][j + 1])
            }
        }
        return tri[0][0]
    }
}


fun main(args: Array<String>) {
    val triangle = listOf(
            arrayListOf(2),
            arrayListOf(3, 4),
            arrayListOf(6, 5, 7),
            arrayListOf(4, 1, 8, 3))

    Solution().minimumTotal(triangle).let(::println)
}