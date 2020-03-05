/**
 * Created by Inno Fang on 2018/1/21.
 */
class Solution {
    fun removeElement(nums: IntArray, `val`: Int): Int {
        var size = 0
        nums.indices.forEach {
            if (nums[it] != `val`) {
                nums[size++] = nums[it]
            }
        }
        // nums.indices.takeWhile { it < size }.forEach { print("${nums[it]} ") }
        // println()
        return size
    }
}

fun main(args: Array<String>) {
    Solution().removeElement(intArrayOf(1,3,3,5,5,7), 3).let(::println)
}