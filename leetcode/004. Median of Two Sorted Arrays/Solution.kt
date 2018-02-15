/**
 * Created by Inno Fang on 2018/2/15.
 */

/**
 * 2080 / 2080 test cases passed.
 * Status: Accepted
 * Runtime: 568 ms
 */
class Solution {
    fun findMedianSortedArrays(nums1: IntArray, nums2: IntArray): Double {
        var i = 0; var j = 0
        val store = mutableListOf<Int>()
        (0 until nums1.size + nums2.size).forEach {
            if (i < nums1.size && j < nums2.size) {
                if (nums1[i] <= nums2[j]) store.add(nums1[i++])
                else store.add(nums2[j++])
            }

            if (i == nums1.size && j < nums2.size) store.add(nums2[j++])
            else if (j == nums2.size && i < nums1.size) store.add(nums1[i++])
        }

        return store.size.let {
            if (it and 1 == 0) (store[it / 2] + store[it / 2 - 1]) / 2.0
            else store[it / 2].toDouble()
        }
    }
}

fun main(args: Array<String>) {
    Solution().findMedianSortedArrays(intArrayOf(1, 3), intArrayOf(2)).let(::println)
    Solution().findMedianSortedArrays(intArrayOf(1, 2), intArrayOf(3, 4)).let(::println)
}