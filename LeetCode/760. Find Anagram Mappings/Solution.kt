/**
 * Created by Inno Fang on 2018/1/7.
 */
class Solution {
    fun anagramMappings(A: IntArray, B: IntArray): IntArray {
        val p = IntArray(A.size)
        A.forEachIndexed{ index, i -> p[index] = B.indexOf(i) }
        return p
    }
}

fun main(args: Array<String>) {
    Solution().anagramMappings(intArrayOf(12, 28, 46, 32, 50), intArrayOf(50, 12, 32, 46, 28)).forEach { print("$it,") }
    println()
}