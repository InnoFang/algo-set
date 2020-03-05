/**
 * Created by Inno Fang on 2018/3/4.
 */

/**
 * 87 / 87 test cases passed.
 * Status: Accepted
 * Runtime: 316 ms
 */
class Solution {
    fun searchRange(nums: IntArray, target: Int): IntArray {
        return intArrayOf(nums.floor(target), nums.ceil(target))
    }

    private fun IntArray.floor(target: Int): Int {
        var l = 0
        var r = lastIndex
        while (l <= r) {
            val mid = l + (r - l) / 2
            if (this[mid] >= target) r = mid - 1
            else l = mid + 1
        }
        return if (l < size && this[l] == target) l else -1
    }

    private fun IntArray.ceil(target: Int): Int {
        var l = 0
        var r = lastIndex
        while (l <= r) {
            val mid = l + (r - l) / 2
            if (this[mid] <= target) l = mid + 1
            else r = mid - 1
        }
        return if (r >= 0 && this[r] == target) r else -1
    }
}

fun main(args: Array<String>) {
    Solution().searchRange(intArrayOf(5, 7, 7, 8, 8, 10), 8).forEach { print("$it ") }; println()
    Solution().searchRange(intArrayOf(1), 1).forEach { print("$it ") }; println()
    Solution().searchRange(intArrayOf(1, 1), 1).forEach { print("$it ") }; println()
    Solution().searchRange(intArrayOf(1, 1, 1), 1).forEach { print("$it ") }; println()
}