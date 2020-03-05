/**
 * Created by Inno Fang on 2018/1/11.
 */
class Solution {
    private var rows = 0
    private var cols = 0
    private val direct = arrayOf(intArrayOf(-1, 0), intArrayOf(0, 1), intArrayOf(1, 0), intArrayOf(0, -1))
    private var visited = Array(rows, { BooleanArray(cols) })
    private fun tryExist(board: Array<CharArray>, word: String, index: Int, x: Int, y: Int): Boolean {
        if (index == word.length - 1)
            return board[x][y] == word[index]

        if (board[x][y] == word[index]) {
            visited[x][y] = true
            (0 until 4).forEach {
                val newX = x + direct[it][0]
                val newY = y + direct[it][1]
                if (newX in 0..(rows - 1) && newY in 0..(cols - 1))
                    if (!visited[newX][newY] && tryExist(board, word, index + 1, newX, newY))
                        return true
            }
            visited[x][y] = false
        }

        return false
    }

    fun exist(board: Array<CharArray>, word: String): Boolean {
        rows = board.size
        cols = board[0].size
        visited = Array(rows, { BooleanArray(cols) })
        (0 until rows).forEach { i ->
            (0 until cols).forEach { j ->
                if (tryExist(board, word, 0, i, j))
                    return true
            }
        }
        return false
    }
}

fun main(args: Array<String>) {
    Solution().exist(arrayOf(charArrayOf('A', 'B', 'C', 'E'), charArrayOf('S', 'F', 'C', 'S'), charArrayOf('A', 'D', 'E', 'E')), "ABCCED").let(::println)
    Solution().exist(arrayOf(charArrayOf('A', 'B', 'C', 'E'), charArrayOf('S', 'F', 'C', 'S'), charArrayOf('A', 'D', 'E', 'E')), "SEE").let(::println)
}