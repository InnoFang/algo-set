package algorithm._51_N_Queens

/**
 * Created by Inno Fang on 2018/1/13.
 */
class Solution {

    val res = ArrayList<ArrayList<String>>()
    var col = BooleanArray(0, { false })
    var dia1 = BooleanArray(0, { false })
    var dia2 = BooleanArray(0, { false })


    fun solveNQueens(n: Int): List<List<String>> {
        col = BooleanArray(n, { false })
        dia1 = BooleanArray(2 * n + 1, { false })
        dia2 = BooleanArray(2 * n + 1, { false })

        res.clear()

        putQueen(n, 0, ArrayList())

        return res
    }

    // 在 n 皇后问题中，摆放第 index 行的皇后
    private fun putQueen(n: Int, index: Int, row: ArrayList<Int>) {

        if (n == index) {
            res.add(generateBoard(n, row))
        }

        (0 until n).forEach { i ->
            if (!col[i] && !dia1[index + i] && !dia2[index - i + n - 1]) {
                row.add(i)
                col[i] = true
                dia1[index + i] = true
                dia2[index - i + n - 1] = true
                putQueen(n, index + 1, row)
                col[i] = false
                dia1[index + i] = false
                dia2[index - i + n - 1] = false
                row.remove(i)
            }
        }
    }

    private fun generateBoard(n: Int, row: ArrayList<Int>): ArrayList<String> {
        val board = ArrayList<String>()
        CharArray(n, { '.' }).toString()
        (0 until n).forEach { i ->
            val chars = CharArray(n, { '.' })
            chars[row[i]] = 'Q'
            board.add(String(chars))
        }
        return board
    }
}

fun main(args: Array<String>) {
    val n = 8
    Solution().solveNQueens(n).forEach { list ->
        list.forEach(::println)
        println()
    }
}