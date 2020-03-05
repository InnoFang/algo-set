/**
 * Created by Inno Fang on 2018/2/1.
 */

/**
 * 19 / 19 test cases passed.
 * Status: Accepted
 * Runtime: 486 ms
 */
class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val numMap = HashMap<Int, Int>()
        for (n in nums.withIndex()) {
            val component = target - n.value
            if (numMap.containsKey(component))
                return intArrayOf(numMap[component]!!, n.index)
            numMap.put(n.value, n.index)
        }
        return intArrayOf()
    }
}

class Solution2 {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val cache = HashMap<Int, Int>()
        nums.forEachIndexed { index, value ->
            val complement = target - value
            if (cache.contains(complement)) return intArrayOf(cache[complement]!!, index)
            cache[value] = index
        }
        return intArrayOf()
    }
}

fun main(args: Array<String>) {
    Solution2().twoSum(intArrayOf(2, 7, 11, 15), 9).forEach(::println) // 0 1
    Solution2().twoSum(intArrayOf(3, 2, 4), 6).forEach(::println) // 1 2
    Solution2().twoSum(intArrayOf(3, 3), 6).forEach(::println) // 0 1
}