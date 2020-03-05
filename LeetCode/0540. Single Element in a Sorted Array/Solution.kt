/**
 * Created by Inno Fang on 2018/2/25.
 */


/**
 * 7 / 7 test cases passed.
 * Status: Accepted
 * Runtime: 292 ms
 */
class Solution {
    fun singleNonDuplicate(nums: IntArray): Int {
        var lo = 0 ; var hi = nums.lastIndex / 2
        while (lo < hi) {
            val mid = lo + (hi - lo) / 2
            if (nums[mid * 2] != nums[mid * 2 + 1]) hi = mid
            else lo = mid + 1
        }
        return nums[lo * 2]
    }
}

fun main(args: Array<String>) {
    Solution().singleNonDuplicate(intArrayOf(1, 1, 2)).let(::println)
}