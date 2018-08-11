/**
 * Created by Inno Fang on 2018/3/1.
 */

/**
 * 325 / 325 test cases passed.
 * Status: Accepted
 * Runtime: 484 ms
 */
class Solution {
    fun checkPossibility(nums: IntArray): Boolean {
        var cnt = 0
        (1..nums.lastIndex).forEach {
            if (nums[it - 1] > nums[it]) {
                if (++cnt > 1) return false
                if (it - 2 < 0 || nums[it - 2] <= nums[it]) nums[it - 1] = nums[it]
                else nums[it] = nums[it - 1]
            }
        }
        return true
    }
}

fun main(args: Array<String>) {
    Solution().checkPossibility(intArrayOf(4, 2, 3)).let(::println)
    Solution().checkPossibility(intArrayOf(3, 4, 2, 3)).let(::println)
    Solution().checkPossibility(intArrayOf(4, 2, 1)).let(::println)
}