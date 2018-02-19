/**
 * Created by Inno Fang on 2018/2/19.
 */]

/**
 * 3999 / 3999 test cases passed.
 * Status: Accepted
 * Runtime: 252 ms
 */
class Solution {
    fun intToRoman(num: Int): String {
        val roman = arrayOf(
                arrayOf("", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"),
                arrayOf("", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"),
                arrayOf("", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"),
                arrayOf("", "M", "MM", "MMM"))

        return StringBuilder()
                .append(roman[0][num % 10])
                .insert(0, roman[1][(num / 10) % 10])
                .insert(0, roman[2][(num / 100) % 10])
                .insert(0, roman[3][(num / 1000) % 10])
                .toString()
    }
}

fun main(args: Array<String>) {
    Solution().intToRoman(8).let(::println)
    Solution().intToRoman(17).let(::println)
    Solution().intToRoman(999).let(::println)
    Solution().intToRoman(201).let(::println)
    Solution().intToRoman(3012).let(::println)
}