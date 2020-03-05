/**
 * Created by Inno Fang on 2018/2/22.
 */


/**
 * 220 / 220 test cases passed.
 * Status: Accepted
 * Runtime: 432 ms
 */
class Solution {
    fun triangleNumber(nums: IntArray): Int {
        var cnt = 0
        if (nums.size > 2) {
            nums.sort()
            (2 until nums.size).forEach {
                var lo = 0
                var hi = it - 1
                while (lo < hi) {
                    if (nums[lo] + nums[hi] > nums[it]) {
                        cnt += hi - lo
                        hi--
                    } else lo++
                }
            }
        }
        return cnt
    }
}

fun main(args: Array<String>) {
    Solution().triangleNumber(intArrayOf(2, 2, 3, 4)).let(::println)
    Solution().triangleNumber(intArrayOf(2, 5, 6, 7, 9)).let(::println)
    Solution().triangleNumber(intArrayOf(0, 0, 1, 1, 2, 3)).let(::println)
    Solution().triangleNumber(intArrayOf(3, 2, 1, 1, 0, 0)).let(::println)
}