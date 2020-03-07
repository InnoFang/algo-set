/**
 * 250 / 250 test cases passed.
 * Status: Accepted
 * Runtime: 424 ms
 */
class Solution {
    fun dominantIndex(nums: IntArray): Int {
        if (nums.isEmpty()) return -1
        if (nums.size == 1) return 0
        var max = Int.MIN_VALUE + 1
        var big = Int.MIN_VALUE
        var index = -1
        nums.forEachIndexed { i, num ->
            if (num > max) {
                big = max
                max = num
                index = i
            } else if (num > big) big = num
        }
        return if (max >= big * 2) index else -1
    }
}

fun main(args: Array<String>) {
    Solution().dominantIndex(intArrayOf(3, 6, 1, 0)).let(::println)
    Solution().dominantIndex(intArrayOf(1, 2, 3, 4)).let(::println)
    Solution().dominantIndex(intArrayOf(1)).let(::println)
}