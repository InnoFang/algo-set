/**
 * Created by Inno Fang on 2018/3/3.
 */


/**
 * 302 / 302 test cases passed.
 * Status: Accepted
 * Runtime: 520 ms
 */
class Solution {
    fun monotoneIncreasingDigits(N: Int): Int {
        val src = N.toString()
        var res = ""
        src.toCharArray().forEachIndexed { idx, c ->
            (c..'9').forEach { num ->
                if (src < res + Array(src.length - idx) { num }.joinToString("")) {
                    res += (num - 1)
                    return@forEachIndexed
                }
            }
            res += '9'
        }
        return res.toInt()
    }

}

/**
 * 302 / 302 test cases passed.
 * Status: Accepted
 * Runtime: 228 ms
 */
class Solution2 {
    fun monotoneIncreasingDigits(N: Int): Int {
        val nums = N.toString().toCharArray()
        var i = 1
        while (i < nums.size && nums[i-1] <= nums[i]) i++
        while (i > 0 && i < nums.size && nums[i-1] > nums[i]) nums[--i]--
        (i+1..nums.lastIndex).forEach { nums[it] = '9' }
        return nums.joinToString("").toInt()
    }
}

fun main(args: Array<String>) {
    Solution2().monotoneIncreasingDigits(332).let(::println)
    Solution2().monotoneIncreasingDigits(1234).let(::println)
    Solution2().monotoneIncreasingDigits(10).let(::println)
}