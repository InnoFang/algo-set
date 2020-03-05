/**
 * Created by Inno Fang on 2017/12/28.
 */
class Solution {
    fun missingNumber(nums: IntArray): Int {
        val arr = Array(nums.size + 1) { -1 }
        nums.forEach { arr[it] = it }
        return (0..arr.size).firstOrNull { arr[it] == -1 }
                ?: -1
    }
}

class Solution2 {
    fun missingNumber(nums: IntArray): Int {
        var sum = (nums.size + 1) * nums.size / 2
        nums.forEach { sum -= it }
        return sum
    }
}

fun main(args: Array<String>) {
    Solution().missingNumber(intArrayOf(3, 0, 1)).let(::println)
}