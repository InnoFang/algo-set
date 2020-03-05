/**
 * Created by Inno Fang on 2017/12/16.
 */
class Solution {
    fun convertToBase7(num: Int): String {
        if (num < 0)
            return "-" + convert(-num).reversed()
        return convert(num).reversed()
    }

    private fun convert(num: Int): String {
        if (num < 7) return num.toString()
        return "${(num % 7)}${(convert(num / 7))}"
    }
}

fun main(args: Array<String>) {
    Solution().convertToBase7(-10000000).let(::println)
    //150666343
    //10000000
}