/**
 * Created by Inno Fang on 2017/12/2.
 */

fun minPathSum(grid: Array<IntArray>): Int {
    return (0 until grid.size).forEach { i ->
        (0 until grid[i].size).forEach { j ->
            if (i != 0 || j != 0) {
                when {
                    i == 0 -> grid[i][j] += grid[i][j - 1]
                    j == 0 -> grid[i][j] += grid[i - 1][j]
                    else -> grid[i][j] += Math.min(grid[i][j - 1], grid[i - 1][j])
                }
            }
        }
    }.let { grid[grid.size - 1][grid[0].size - 1] }
}

fun main(args: Array<String>) {
//    val grid = arrayOf(intArrayOf(1, 3, 1), intArrayOf(1, 5, 1), intArrayOf(4, 2, 1))
//    val grid = arrayOf(intArrayOf(1, 2), intArrayOf(1, 1))
    val grid = arrayOf(intArrayOf(0))
    minPathSum(grid).let(::println)
//    grid.map { it.map(::println) }
}
