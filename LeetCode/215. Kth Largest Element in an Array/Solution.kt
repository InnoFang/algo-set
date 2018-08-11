/**
 * Created by Inno Fang on 2018/2/28.
 */

/**
 * 31 / 31 test cases passed.
 * Status: Accepted
 * Runtime: 480 ms
 */
class Solution {
    fun findKthLargest(nums: IntArray, k: Int): Int {
        return partition(nums, k, 0, nums.lastIndex)
    }

    private fun partition(nums: IntArray, k: Int, start: Int, end: Int): Int {
        var lo = start
        var hi = end
        while (lo < hi) {
            while (lo < hi && nums[hi] <= nums[start]) hi--
            while (lo < hi && nums[lo] >= nums[start]) lo++
            if (lo < hi) (nums[hi] to nums[lo]).run { nums[lo] = first; nums[hi] = second }
        }
        (nums[start] to nums[hi]).run { nums[start] = second; nums[hi] = first }
        return when {
            lo == k - 1 -> {
                nums[lo]
            }
            lo > k - 1 -> partition(nums, k, start, lo - 1)
            else -> partition(nums, k, lo + 1, end)
        }
    }
}

/**
 * 31 / 31 test cases passed.
 * Status: Accepted
 * Runtime: 332 ms
 */
class Solution2 {
    fun findKthLargest(nums: IntArray, k: Int): Int {
        val que = java.util.PriorityQueue<Int>()
        nums.forEach {
            que.offer(it)
            if (que.size > k) que.poll()
        }
        return que.peek()
    }
}

fun main(args: Array<String>) {
    Solution2().findKthLargest(intArrayOf(3, 5, 9, 1, 4, 7, 2, 6, 8, 0), 3).let(::println)
}