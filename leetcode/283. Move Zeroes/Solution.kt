package algorithm._283_Move_Zeroes

/**
 * Created by Inno Fang on 2018/1/4.
 */


/**
 * 21 / 21 test cases passed.
 * Status: Accepted
 * Runtime: 542 ms
 */
class Solution {
    fun moveZeroes(nums: IntArray): Unit {
        var zeroes = 0
        ((nums.size - 1) downTo 0).forEach { i ->
            if (nums[i] == 0) {
                zeroes++
                (i..(nums.size - 1 - zeroes)).forEach { j ->
                    nums[j] = nums[j + 1]
                }
            }
        }
        ((nums.size - zeroes)..(nums.size - 1)).forEach { nums[it] = 0 }
    }
}

/**
 * 21 / 21 test cases passed.
 * Status: Accepted
 * Runtime: 492 ms
 */
class Solution2 {
    fun moveZeroes(nums: IntArray): Unit {
        var zeroes = 0
        nums.indices.forEach {
            when (nums[it]) {
                0 -> zeroes++
                else -> {
                    if (zeroes != 0) {
                        nums[it - zeroes] = nums[it]
                        nums[it] = 0
                    }
                }
            }
        }
    }
}

class Solution3 {
    fun moveZeroes(nums: IntArray): Unit {
        var zeroes = 0
        nums.forEach { if (it != 0) nums[zeroes++] = it }
        (zeroes until nums.size).forEach { nums[it] = 0 }
    }
}

fun main(args: Array<String>) {
    val nums = intArrayOf(0, 1, 0, 3, 12)
    Solution3().moveZeroes(nums)
    nums.forEach(::println)
}