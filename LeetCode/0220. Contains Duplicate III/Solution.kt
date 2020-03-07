import java.util.TreeSet

/**
 * 40 / 40 test cases passed.
 * Status: Accepted
 * Runtime: 418 ms
 */
class Solution {
    fun containsNearbyAlmostDuplicate(nums: IntArray, k: Int, t: Int): Boolean {
        val kRange = TreeSet<Long>()
        nums.forEachIndexed { index, num ->
            if (match(kRange, num, t)) return true

            kRange.add(num.toLong())

            if (kRange.size == k + 1) kRange.remove(nums[index - k].toLong())
        }
        return false
    }

    private fun match(nums: TreeSet<Long>, num: Int, t: Int): Boolean {
        return nums.ceiling(num.toLong() - t.toLong())?.let { it <= num.toLong() + t.toLong() } ?: false
    }
}

fun main(args: Array<String>) {
    Solution().containsNearbyAlmostDuplicate(intArrayOf(-1, -1), 1, 0).let(::println)
    Solution().containsNearbyAlmostDuplicate(intArrayOf(-2147483648,-2147483647), 3, 3).let(::println)
}