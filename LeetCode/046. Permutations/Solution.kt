/**
 * Created by Inno Fang on 2018/1/2.
 */
class Solution {
    private val res = ArrayList<List<Int>>()
    fun permute(nums: IntArray): List<List<Int>> {
        permutation(nums, 0, nums.size - 1)
        return res
    }

    private fun permutation(list: IntArray, start: Int, length: Int) {
        if (start == length) res.add(list.toMutableList())
        else (start..length).forEach { i ->
            swap(list, start, i)
            permutation(list, start + 1, length)
            swap(list, start, i)
        }
    }

    private fun swap(nums: IntArray, i: Int, j: Int) {
        val temp = nums[i]
        nums[i] = nums[j]
        nums[j] = temp
    }
}

fun main(vararg args: String) {
    Solution().permute(intArrayOf(1, 2, 3)).forEach {
        it.forEach {
            print("$it ")
        }
        println()
    }
}
