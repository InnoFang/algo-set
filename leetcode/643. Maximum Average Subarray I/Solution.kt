/**
 * Created by Inno Fang on 2018/3/22.
 */

/**
 * 123 / 123 test cases passed.
Status: Accepted
Runtime: 2924 ms
 */
class Solution {
    fun findMaxAverage(nums: IntArray, k: Int): Double {
        if (nums.size == k) return nums.sum() * 1.0 / k * 1.0
        var max: Double = Int.MIN_VALUE * 1.0
        for (i in k..nums.size) {
            var sum = 0.0
            for (j in i - k until i) sum += nums[j]
            max = maxOf(max, sum * 1.0 / k * 1.0)
        }
        return max
    }
}

fun main(args: Array<String>) {
    Solution().findMaxAverage(intArrayOf(1, 12, -5, -6, 50, 3), 4).let(::println)
    Solution().findMaxAverage(intArrayOf(-1), 1).let(::println)
}