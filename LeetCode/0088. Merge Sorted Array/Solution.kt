/**
 * 59 / 59 test cases passed.
 * Status: Accepted
 * Runtime: 557 ms
 */
class Solution {
    fun merge(nums1: IntArray, m: Int, nums2: IntArray, n: Int): Unit {
        val nums3 = IntArray(m + n)
        var i = 0
        var j = 0
        var k = 0
        while (i < m + n) {
            if (j < m && k < n && nums1[j] <= nums2[k]) nums3[i++] = nums1[j++]
            else if (j < m && k < n && nums1[j] >= nums2[k])  nums3[i++] = nums2[k++]
            else if (j == m) nums3[i++] = nums2[k++]
            else if (k == n) nums3[i++] = nums1[j++]
        }
        nums3.indices.forEach{ nums1[it] = nums3[it] }
    }
}

/**
 * 59 / 59 test cases passed.
 * Status: Accepted
 * Runtime: 336 ms
 */
class Solution2 {
    fun merge(nums1: IntArray, m: Int, nums2: IntArray, n: Int) {
        var i = m - 1
        var j = n - 1
        var k = m + n - 1
        while (j >= 0)
            nums1[k--] = if (i >= 0 && nums1[i] > nums2[j]) nums1[i--] else nums2[j--]
        nums1.forEach { print("$it ") }; println()
    }
}
fun main(args: Array<String>) {
    val a = IntArray(8)
    a[0] = 1; a[1] = 2; a[2] = 2; a[3] = 4
    Solution2().merge(a, 4, intArrayOf(5,6,7,8), 4)

}