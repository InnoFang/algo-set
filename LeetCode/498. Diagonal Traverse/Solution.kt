/**
 * Created by Inno Fang on 2018/3/23.
 */

/**
 * 32 / 32 test cases passed.
 * Status: Accepted
 * Runtime: 636 ms
 */
class Solution {
    fun findDiagonalOrder(matrix: Array<IntArray>): IntArray {
        if (matrix.isEmpty()) return intArrayOf()
        val rows = matrix.size
        val cols = matrix[0].size
        val store = MutableList(rows + cols - 1) { ArrayList<Int>() }
        for (i in (0 until rows)) {
            for (j in (0 until cols)) {
                store[i + j].add(matrix[i][j])
            }
        }
        val result = java.util.LinkedList<Int>()
        store.forEachIndexed { index, list ->
            if (index % 2 == 0) {
                result.addAll(list.reversed())
            } else {
                result.addAll(list)
            }
        }
        return result.toIntArray()
    }
}

/**
 * 32 / 32 test cases passed.
 * Status: Accepted
 * Runtime: 400 ms
 */
class Solution2 {
    fun findDiagonalOrder(matrix: Array<IntArray>): IntArray {
        if (matrix.isEmpty()) return intArrayOf()
        val rows = matrix.size
        val cols = matrix[0].size
        val store = MutableList(rows + cols - 1) { java.util.LinkedList<Int>() }
        for (i in (0 until rows)) {
            for (j in (0 until cols)) {
                if (((i + j) and 1) == 0) store[i + j].add(0, matrix[i][j])
                else store[i + j].add(matrix[i][j])
            }
        }
        val result = java.util.LinkedList<Int>()
        store.forEach { result.addAll(it) }
        return result.toIntArray()
    }
}