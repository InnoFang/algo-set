/**
 * Created by Inno Fang on 2017/12/7.
 */
class Solution {
    fun singleNumber(nums: IntArray): Int {
        var res = 0
        (0 until nums.size).forEach {
            res = res xor nums[it]
        }
        return res
    }
}

fun main(vararg args: String) {
    val solution = Solution()
    solution.singleNumber(intArrayOf(6, 3, 5, 3, 6)).let(::println) // 5
    solution.singleNumber(intArrayOf(1, 3, 5, 3, 5)).let(::println) // 1
    solution.singleNumber(intArrayOf()).let(::println) //
    solution.singleNumber(intArrayOf(5, 3, 5, 3, 6)).let(::println) // 6
}