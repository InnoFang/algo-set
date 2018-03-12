/**
 * Created by Inno Fang on 2018/3/12.
 */


/**
 * 95 / 95 test cases passed.
 * Status: Accepted
 * Runtime: 448 ms
 */
class Solution {
    fun find132pattern(nums: IntArray): Boolean {
        var s3 = Int.MIN_VALUE
        val stack = java.util.Stack<Int>()
        for (i in nums.reversed()) {
            if (i < s3) return true
            else while (stack.isNotEmpty() && i > stack.peek()) s3 = stack.pop()
            stack.push(i)
        }
        return false
    }
}

fun main(args: Array<String>) {
    Solution().find132pattern(intArrayOf(3, 5, 0, 3, 4)).let(::println)
}