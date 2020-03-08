/**
 * 31 / 31 test cases passed.
 * Status: Accepted
 * Runtime: 938 ms
 */
class Solution {
    fun numberOfBoomerangs(points: Array<IntArray>): Int {
        var res = 0
        points.forEachIndexed { i, p1 ->
            val store = HashMap<Int, Int>()
                if (i != j) {
                    val dis = dis(p1, p2)
                    store[dis] = (store[dis] ?: 0) + 1
                }
            }
            store.forEach { _, v ->
                res += v * (v - 1)
            }
        }
        return res
    }

    private fun dis(p1: IntArray, p2: IntArray)
            : Int = (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1])
}

fun main(args: Array<String>) {
    Solution().numberOfBoomerangs(arrayOf(
            intArrayOf(0, 0),
            intArrayOf(1, 0),
            intArrayOf(2, 0))).let(::println)
}