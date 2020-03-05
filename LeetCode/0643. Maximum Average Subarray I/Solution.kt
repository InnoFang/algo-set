/**
 * Created by Inno Fang on 2018/3/22.
 */

/**
 * 123 / 123 test cases passed.
 * Status: Accepted
 * Runtime: 2924 ms
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

/**
 * 123 / 123 test cases passed.
 * Status: Accepted
 * Runtime: 752 ms
 */
class Solution2 {
    fun findMaxAverage(nums: IntArray, k: Int): Double {
        if (nums.isEmpty() || k == 0) return 0.0
        var average = nums.take(k).sum().toDouble() / k.toDouble()
        var max = average
        for (i in 0..nums.lastIndex - k) {
            average += (nums[i + k] - nums[i]).toDouble() / k.toDouble()
            if (average > max) max = average
        }
        return max
    }
}

fun main(args: Array<String>) {
    Solution2().findMaxAverage(intArrayOf(1, 12, -5, -6, 50, 3), 4).let(::println)
    Solution2().findMaxAverage(intArrayOf(-1), 1).let(::println)
}