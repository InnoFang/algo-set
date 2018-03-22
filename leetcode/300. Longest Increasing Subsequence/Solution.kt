/**
 * Created by Inno Fang on 2017/12/28.
 */


/**
 * 24 / 24 test cases passed.
 * Status: Accepted
 * Runtime: 655 ms
 */
class Solution {
    fun lengthOfLIS(nums: IntArray): Int {
        if (nums.isEmpty()) return 0
        val dp = Array(nums.size) { 1 }

        (0 until nums.size).forEach { i ->
            (0 until i).forEach { j ->
                if (nums[i] > nums[j]) dp[i] = maxOf(dp[j] + 1, dp[i])
            }
        }
        return dp.max()!!
    }
}

/**
 * 24 / 24 test cases passed.
 * Status: Accepted
 * Runtime: 376 ms
 */
class Solution2 {
    fun lengthOfLIS(nums: IntArray): Int {
        val store = IntArray(nums.size) { 0 }
        var len = 0
        nums.forEach {
            var l = 0
            var r = len
            while (l != r) {
                val mid = l + (r - l) / 2
                if (store[mid] < it) l = mid + 1
                else r = mid
            }
            store[l] = it
            if (l == len) ++len
        }
        return len
    }
}

fun main(args: Array<String>) {
    Solution2().lengthOfLIS(intArrayOf(10, 9, 2, 5, 3, 7, 101, 18)).let(::println)
    Solution2().lengthOfLIS(intArrayOf(4, 10, 4, 3, 8, 9)).let(::println)
    Solution2().lengthOfLIS(intArrayOf(1, 0, 1, 0, 1, 0)).let(::println)
    Solution2().lengthOfLIS(intArrayOf(10, 15, 20, 11, 9, 101)).let(::println)
    Solution2().lengthOfLIS(intArrayOf()).let(::println)
}
// 376. Wiggle Subsequence