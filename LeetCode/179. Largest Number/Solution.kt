/**
 * Created by Inno Fang on 2018/3/14.
 */

/**
 * 221 / 221 test cases passed.
 * Status: Accepted
 * Runtime: 256 ms
 */
class Solution {
    fun largestNumber(nums: IntArray): String {
        return nums.map { it.toString() }
                .sortedWith(Comparator { o1, o2 -> (o2 + o1).compareTo(o1 + o2) })
                .let { if (it[0] == "0") "0" else it.joinToString("") }
    }
}

fun main(args: Array<String>) {
    Solution().largestNumber(intArrayOf(3, 30, 34, 5, 9)).let(::println)
    Solution().largestNumber(intArrayOf(0, 0)).let(::println)
}