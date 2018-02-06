/**
 * Created by Inno Fang on 2018/2/6.
 */

/**
 * 16 / 16 test cases passed.
 * Status: Accepted
 * Runtime: 400 ms
 */
class Solution {
    fun twoSum(numbers: IntArray, target: Int): IntArray {
        numbers.forEachIndexed { i, num ->
            val v = numbers.binarySearch(target - num, i + 1)
            if (v > 0) {
                return intArrayOf(i + 1, v + 1)
            }
        }
        return intArrayOf()
    }
}

/**
 * 16 / 16 test cases passed.
 * Status: Accepted
 * Runtime: 427 ms
 */
class Solution2 {
    fun twoSum(numbers: IntArray, target: Int): IntArray {
        var first = 0
        var second = numbers.lastIndex
        while (first < second && numbers[first] + numbers[second] != target) {
            if (numbers[first] + numbers[second] < target) first++
            if (numbers[first] + numbers[second] > target) second--
        }
        return intArrayOf(first + 1, second + 1)
    }
}

fun main(args: Array<String>) {
    Solution2().twoSum(intArrayOf(2, 7, 11, 15), 9).forEach { print("$it ") }; println()
    Solution2().twoSum(intArrayOf(2, 3, 4), 6).forEach { print("$it ") }; println()
}