package io.innofang

/**
 * Created by Inno Fang on 2018/2/7.
 */

/**
 * 15 / 15 test cases passed.
 * Status: Accepted
 * Runtime: 422 ms
 */
class Solution {
    fun minSubArrayLen(s: Int, nums: IntArray): Int {
        var l = 0
        var r = -1
        var sum = 0
        var res = nums.size + 1

        while (l < nums.size) {
            if (r + 1 < nums.size && sum < s) sum += nums[++r]
            else sum -= nums[l++]

            if (sum >= s) res = minOf(r - l + 1, res)
        }
        return if (res != nums.size + 1) res else 0
    }
}

fun main(args: Array<String>) {
    Solution().minSubArrayLen(7, intArrayOf(2,3,1,2,4,3)).let(::println)
    Solution().minSubArrayLen(15, intArrayOf(1,2,3,4,5)).let(::println)
}