package solution._035_Search_Insert_Position

import algorithm.fibnacci.num

/**
 * Created by Inno Fang on 2018/1/23.
 */

class Solution {
    fun searchInsert(nums: IntArray, target: Int): Int {
        var low = 0
        var high = nums.size - 1
        while (low <= high) {
            val mid = (low + high) ushr 1
            when {
                target < nums[mid] -> high = mid - 1
                target > nums[mid] -> low = mid + 1
                else -> return mid
            }
        }
        return low
    }
}

fun main(args: Array<String>) {
    Solution().searchInsert(intArrayOf(1, 3, 5, 6), 5).let(::println)  // 2
    Solution().searchInsert(intArrayOf(1, 3, 5, 6), 2).let(::println)  // 1
    Solution().searchInsert(intArrayOf(1, 3, 5, 6), 7).let(::println)  // 4
    Solution().searchInsert(intArrayOf(1, 3, 5, 6), 0).let(::println)  // 0
    Solution().searchInsert(intArrayOf(1, 3), 2).let(::println)  // 1
    Solution().searchInsert(intArrayOf(), 0).let(::println)  // 0
}