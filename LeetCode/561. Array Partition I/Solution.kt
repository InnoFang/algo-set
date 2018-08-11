/**
 * Created by Inno Fang on 2018/1/7.
 */
class Solution {
    fun arrayPairSum(nums: IntArray): Int {
        nums.sort()
        var res = 0
        (0 until nums.size step 2).forEach{
            res += minOf(nums[it], nums[it+1])
        }
        return res
    }
}
class Solution2 {
    fun arrayPairSum(nums: IntArray): Int {
        nums.sort()
        var res = 0
        (0 until nums.size step 2).forEach {
            res += nums[it]
        }
        return res
    }
}

fun main(args: Array<String>) {
    Solution2().arrayPairSum(intArrayOf(1,4,3,2)).let(::println)
    Solution2().arrayPairSum(intArrayOf(1,2)).let(::println)
}