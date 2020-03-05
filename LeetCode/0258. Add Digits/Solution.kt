/**
 * Created by Inno Fang on 2017/12/21.
 */
class Solution {
    fun addDigits(num: Int): Int {
        var num = num
        while (num >= 10) {
            var sum = 0
            while (num != 0) {
                sum += num % 10
                num /= 10
            }
            num = sum
        }
        return num
    }
}

fun main(args: Array<String>) {
    Solution().addDigits(38).let(::println)
}