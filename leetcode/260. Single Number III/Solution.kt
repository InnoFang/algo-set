package io.innofang

/**
 * Created by Inno Fang on 2018/2/13.
 */

/**
 * 30 / 30 test cases passed.
 * Status: Accepted
 * Runtime: 387 ms
 */
class Solution {
    fun singleNumber(nums: IntArray): IntArray {
        val x = nums.reduce { acc, n -> acc xor n }
//        val bitFlag = x and -x
        val bitFlag = x and (x - 1).inv()
//        val bitFlag = x and (x.inv() + 1)
        val res = IntArray(2) { 0 }
        nums.forEach {
            when {
                it and bitFlag != 0 -> res[0] = res[0] xor it
                else -> res[1] = res[1] xor it
            }
        }
        return res
    }
}

fun main(args: Array<String>) {
    Solution().singleNumber(intArrayOf(1, 2, 1, 3, 2, 5)).forEach { print("$it ") };println()
}