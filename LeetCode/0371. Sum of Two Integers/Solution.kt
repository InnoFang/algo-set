/**
 * Created by Inno Fang on 2017/12/8.
 */
class Solution {
    fun getSum(a: Int, b: Int): Int {
        var sum = a
        var carry = b
        while (carry != 0) {
            val temp = sum
            sum = temp xor carry
            carry = (temp and carry) shl 1
        }
        return sum
    }
}

fun main(args: Array<String>) {
    Solution().getSum(2, 4).let(::println)
}