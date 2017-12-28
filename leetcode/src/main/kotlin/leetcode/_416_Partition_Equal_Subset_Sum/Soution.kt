package leetcode._416_Partition_Equal_Subset_Sum


/**
 * Created by Inno Fang on 2017/12/9.
 */

class Solution {

    private val memo = MutableList<MutableList<Int>>(0) { MutableList<Int>(0) { 0 } }

    fun canPartition(nums: IntArray): Boolean {
        if (nums.isEmpty() || nums.sum() and 1 == 1) return false
        val par = nums.sum() shr 1

        memo.addAll(MutableList(nums.size) { MutableList(par + 1) { -1 } })

        return tryPartition(nums, nums.size - 1, par)
    }

    private fun tryPartition(nums: IntArray, index: Int, sum: Int): Boolean {
        if (sum == 0)
            return true
        if (sum < 0 || index < 0)
            return false

        if (memo[index][sum] != -1)
            return memo[index][sum] == 1
        memo[index][sum] = if (tryPartition(nums, index - 1, sum)
                || tryPartition(nums, index - 1, sum - nums[index])) 1 else 0
        return memo[index][sum] == 1
    }
}

class Solution2 {
    fun canPartition(nums: IntArray): Boolean {
        if (nums.isEmpty() || nums.sum() and 1 == 1) return false
        val par = nums.sum() shr 1

        val dp = MutableList(par + 1) { false }

        (0..par).forEach {
            dp[it] = (nums[0] == it)
        }
        (1 until nums.size).forEach { i ->
            (par downTo nums[i]).forEach { j ->
                dp[j] = dp[j] || dp[j - nums[i]]
            }
        }
        return dp[par]
    }
}

class Solution3 {
    fun canPartition(nums: IntArray): Boolean {
        if (nums.isEmpty() || nums.sum() and 1 == 1) return false
        val par = nums.sum() shr 1

        val dp = MutableList(nums.size) { MutableList(par + 1) { false } }

        (0 until nums.size).forEach { i ->
            (0..par).forEach { j ->
                if (i < 1) dp[i][j] = (j == nums[i])
                else dp[i][j] = dp[i - 1][j] || if (nums[i] <= j) dp[i - 1][j - nums[i]] else false
            }
        }

        return dp[nums.size - 1][par]
    }
}

class Solution4 {
    fun canPartition(nums: IntArray): Boolean {
        if (nums.isEmpty() || nums.sum() and 1 == 1) return false
        val par = nums.sum() shr 1

        val dp = MutableList(2) { MutableList(par + 1) { false } }

        (0..par).forEach {
            dp[0][it] = (nums[0] == it)
        }
        (1 until nums.size).forEach { i ->
            (0..par).forEach { j ->
                dp[i and 1][j] = dp[(i - 1) and 1][j] || if (nums[i] <= j) dp[(i - 1) and 1][j - nums[i]] else false
            }
        }

        return dp[(nums.size - 1) and 1][par]
    }
}

class Solution5 {
    fun canPartition(nums: IntArray): Boolean {
        if (nums.isEmpty() || nums.sum() and 1 == 1) return false
        val par = nums.sum() shr 1

        val dp = MutableList(par + 1) { false }

        (0..par).forEach { dp[it] = (nums[0] == it) }
        (1 until nums.size).forEach { i ->
            (par downTo nums[i]).forEach { j ->
                dp[j] = dp[j] || dp[j - nums[i]]
            }
        }
        return dp[par]
    }
}



fun main(args: Array<String>) {

    val solution = Solution5()
    solution.canPartition(intArrayOf(1, 5, 11, 5)).let(::println)
    solution.canPartition(intArrayOf(1, 2, 2, 5)).let(::println)
    solution.canPartition(intArrayOf(2, 2, 3, 5)).let(::println)
}

// 322. Coin Change