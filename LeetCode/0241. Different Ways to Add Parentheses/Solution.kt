/**
 * Created by Inno Fang on 2018/3/19.
 */

/**
 * 25 / 25 test cases passed.
 * Status: Accepted
 * Runtime: 328 ms
 */
class Solution {
    fun diffWaysToCompute(input: String): List<Int> {
        val ans = ArrayList<Int>()
        input.forEachIndexed { idx, c ->
            if (c in "+-*") {
                val first = diffWaysToCompute(input.substring(0, idx))
                val second = diffWaysToCompute(input.substring(idx + 1))
                first.forEach { f ->
                    second.forEach { s ->
                        when (c) {
                            '+' -> ans.add(f + s)
                            '-' -> ans.add(f - s)
                            '*' -> ans.add(f * s)
                        }
                    }
                }
            }
        }
        if (ans.isEmpty()) ans.add(input.toInt())
        return ans
    }
}

fun main(args: Array<String>) {
    Solution().diffWaysToCompute("2*3-4*5").format()
    Solution().diffWaysToCompute("2-1-1").format()
    Solution().diffWaysToCompute("21").format()
}

fun List<Int>.format() {
    for (i in this) print("$i ,")
    println()
}