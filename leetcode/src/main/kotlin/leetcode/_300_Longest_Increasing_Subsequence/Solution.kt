package leetcode._300_Longest_Increasing_Subsequence

/**
 * Created by Inno Fang on 2017/12/28.
 */

/*

// WA [4,10,4,3,8,9]
class Solution {
    fun lengthOfLIS(nums: IntArray): Int {
        if (nums.isEmpty()) return 0
        val dp = IntArray(nums.size)

        dp[nums.size - 1] = 1

        (nums.size - 2 downTo 0).forEach { i ->
            dp[i] = if (nums[i] >= nums[i + 1]) dp[i + 1] else 1 + dp[i + 1]
        }
        return dp[0]
    }
}
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

fun main(args: Array<String>) {
    Solution().lengthOfLIS(intArrayOf(10, 9, 2, 5, 3, 7, 101, 18)).let(::println)
    Solution().lengthOfLIS(intArrayOf(4, 10, 4, 3, 8, 9)).let(::println)
    Solution().lengthOfLIS(intArrayOf(1, 0, 1, 0, 1, 0)).let(::println)
    Solution().lengthOfLIS(intArrayOf(10, 15, 20, 11, 9, 101)).let(::println)
    Solution().lengthOfLIS(intArrayOf()).let(::println)
}


/*
* [4,10,4,3,8,9]
* [10, 9, 2, 5, 3, 7, 101, 18]
* []
* */


// 376. Wiggle Subsequence