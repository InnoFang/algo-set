/**
 * Created by Inno Fang on 2018/2/19.
 */
class Solution {
    fun intToRoman(num: Int): String {
        val roman = arrayOf(
                arrayOf("", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"),
                arrayOf("", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"),
                arrayOf("", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"),
                arrayOf("", "M", "MM", "MMM"))
        return roman[3][(num / 1000) % 10] + roman[2][(num / 100) % 10] +
                roman[1][(num / 10) % 10] + roman[0][num % 10]
    }
}

fun main(args: Array<String>) {
    Solution().intToRoman(8).let(::println)
    Solution().intToRoman(17).let(::println)
    Solution().intToRoman(999).let(::println)
    Solution().intToRoman(201).let(::println)
    Solution().intToRoman(3012).let(::println)
}