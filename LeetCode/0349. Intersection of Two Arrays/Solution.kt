class Solution {
    fun intersection(nums1: IntArray, nums2: IntArray): IntArray {
        val res = nums1.toHashSet()
        res.retainAll(nums2.toHashSet())
        return res.toIntArray()
    }
}

fun main(args: Array<String>) {
    Solution().intersection(intArrayOf(1, 2, 3, 1), intArrayOf(2, 3)).forEach { print("$it ") };println()
}
