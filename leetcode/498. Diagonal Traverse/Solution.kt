/**
 * Created by Inno Fang on 2018/3/23.
 */

/**
 * 32 / 32 test cases passed.
 * Status: Accepted
 * Runtime: 572 ms
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
        val result = mutableListOf<Int>()
        store.forEachIndexed { index, list ->
            if (index % 2 == 0) {
                for (i in (list.lastIndex downTo 0)) {
                    result.add(list[i])
                }
            } else{
                for (i in list) {
                    result.add(i)
                }
            }
        }
        return result.toIntArray()
    }
}