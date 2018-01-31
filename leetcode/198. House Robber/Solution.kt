/**
 * Created by Inno Fang on 2017/12/7.
 */
// 198

class Solution {
    var memo: MutableList<Int> = MutableList(0) { -1 }
    fun rob(nums: IntArray): Int {
        memo.addAll(MutableList(nums.size) { -1 })
        return tryRob(nums, 0)
    }

    private fun tryRob(nums: IntArray, index: Int): Int {
        if (index >= nums.size)
            return 0
        if (memo[index] != -1)
            return memo[index]

        var res = 0
        (index until nums.size).forEach {
            res = maxOf(res, nums[it] + tryRob(nums, it + 2))
        }
        memo[index] = res
        return res
    }
}

class Solution2 {
    fun rob(nums: IntArray): Int {
        val n = nums.size
        if (n == 0) return 0
        val dp = Array(n) { -1 }
        dp[n - 1] = nums[n - 1]
        (n - 2 downTo 0).forEach { i ->
            (i until n).forEach { j ->
                dp[i] = maxOf(dp[i], nums[j] + (if (j + 2 < n) dp[j + 2] else 0))
            }
        }
        return dp[0]
    }

}


public class Solution3 {
    fun rob(nums: IntArray): Int {
        if (nums.isEmpty()) return 0
        val n = nums.size
        val dp = Array(nums.size) { -1 }
        dp[0] = nums[0]
        (1 until n).forEach { i ->
            dp[i] = maxOf(dp[i - 1], nums[i] + if (i > 1) dp[i - 2] else 0)
        }
//        dp.forEach(::println)
        return dp[n - 1]
    }
}


fun main(args: Array<String>) {
    val solution = Solution3()
    solution.rob(intArrayOf(3, 4, 2, 1)).let(::println)
    solution.rob(intArrayOf(8, 4, 5, 3, 1)).let(::println)
}

// 213. House Robber II
// 337. House Robber III
// 309. Best Time to Buy and Sell Stock with Cooldown