/**
 * Created by Inno Fang on 2018/2/27.
 */

/**
 * 15 / 15 test cases passed.
 * Status: Accepted
 * Runtime: 296 ms
 */
class Solution {
    fun generate(numRows: Int): List<List<Int>> {
        val triangle = mutableListOf<List<Int>>()
        (1..numRows).forEach { r ->
            val row = MutableList(r) { c ->
                if (c == 0 || c == r - 1) 1
                else triangle[r - 2][c - 1] + triangle[r - 2][c]
            }
            triangle.add(row)
        }
        return triangle
    }
}

fun main(args: Array<String>) {
    (0..10).forEach {
        println("\t+-----$it-----+")
        Solution().generate(3).forEach {
            it.forEach { print("\t$it") }
            println()
        }
    }
}