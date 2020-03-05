/**
 * Created by Inno Fang on 2018/2/26.
 */

/**
 * 147 / 147 test cases passed.
 * Status: Accepted
 * Runtime: 392 ms
 */
class Solution {
    fun canPartitionKSubsets(nums: IntArray, k: Int): Boolean {
        nums.sortDescending()
        val s = nums.sum()
        if (s % k != 0 || nums[0] > s / k) return false
        return possible(nums, 0, IntArray(k) { s / k })
    }

    private fun possible(nums: IntArray, idx: Int, store: IntArray): Boolean {
        if (idx == nums.size) {
            return store.none { it != 0 }
        }

        store.indices.forEach { i ->
            if (nums[idx] <= store[i]) {
                store[i] -= nums[idx]
                if (possible(nums, idx + 1, store)) return true
                store[i] += nums[idx]
            }
        }
        return false
    }
}

fun main(args: Array<String>) {
    Solution().canPartitionKSubsets(intArrayOf(7, 6, 5, 4, 3, 2, 1), 7).let(::println)
    Solution().canPartitionKSubsets(intArrayOf(4, 3, 2, 3, 5, 2, 1), 4).let(::println)
    Solution().canPartitionKSubsets(intArrayOf(7, 6, 5, 4, 3, 2, 1), 4).let(::println)
    Solution().canPartitionKSubsets(intArrayOf(3522, 181, 521, 515, 304, 123, 2512, 312, 922, 407, 146, 1932, 4037, 2646, 3871, 269), 5).let(::println)
}

fun IntArray.traversal() {
    print("traversal: ")
    for (i in this) {
        print("$i ")
    }
    println()
}