/**
 * Created by Inno Fang on 2018/2/5.
 */

/**
 * 86 / 86 test cases passed.
 * Status: Accepted
 * Runtime: 495 ms
 */
class Solution {
    fun sortColors(nums: IntArray): Unit {
        var zeros = -1
        var ones = 0
        var twos = nums.size
        while (ones < twos) {
            when (nums[ones]) {
                0 -> {
                    val temp = nums[++zeros]
                    nums[zeros] = nums[ones]
                    nums[ones] = temp
                    ones++
                }
                1 -> ones++
                2 -> {
                    val temp = nums[--twos]
                    nums[twos] = nums[ones]
                    nums[ones] = temp
                }
            }
        }
    }
}

fun main(args: Array<String>) {
    var colors = intArrayOf(1, 0, 2, 0, 2, 1, 1, 0, 0, 2, 2, 0, 2, 1, 0, 2, 1)
    Solution().sortColors(colors)
    colors.forEach { print("$it ") }; println()

    colors = intArrayOf(0,0,0,0,0,0,0,0,0)
    Solution().sortColors(colors)
    colors.forEach { print("$it ") }; println()


    colors = intArrayOf(1,1,1,1,1,1,1,1,1,1,1,1)
    Solution().sortColors(colors)
    colors.forEach { print("$it ") }; println()

    colors = intArrayOf(2,2,2,2,2,2,2,2,2,2,2,2,2,2,2)
    Solution().sortColors(colors)
    colors.forEach { print("$it ") }; println()

    colors = intArrayOf()
    Solution().sortColors(colors)
    colors.forEach { print("$it ") }; println()

}