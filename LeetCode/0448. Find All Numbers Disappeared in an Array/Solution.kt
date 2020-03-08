class Solution {
    fun findDisappearedNumbers(nums: IntArray): List<Int> {
        var i = 0
        while (i < nums.size) {
            if (nums[i] != nums[nums[i] - 1]) {
                swap(nums, i, nums[i] - 1)
                --i
            }
            i++
        }
        return (1..nums.size).filter { nums[it - 1] != it }.toList()
    }

    private fun swap(nums: IntArray, x: Int, y: Int) {
        nums[x] += nums[y]
        nums[y] = nums[x] - nums[y]
        nums[x] -= nums[y]
    }
}

class Solution2 {
    fun findDisappearedNumbers(nums: IntArray): List<Int> {
        nums.indices.forEach { i ->
            nums[(nums[i] - 1) % nums.size] += nums.size
        }
        return (1..nums.size).filter { nums[it-1] <= nums.size }.toList()
    }
}

fun main(args: Array<String>) {
    Solution2().findDisappearedNumbers(intArrayOf(4, 3, 2, 7, 8, 2, 3, 1)).forEach(::println)
}

// https://www.cnblogs.com/grandyang/p/6222149.html
