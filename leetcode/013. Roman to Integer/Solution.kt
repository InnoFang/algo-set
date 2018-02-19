/**
 * Created by Inno Fang on 2018/2/19.
 */


/**
 * 3999 / 3999 test cases passed.
 * Status: Accepted
 * Runtime: 272 ms
 */
class Solution {
    fun romanToInt(s: String): Int {
        return s.foldIndexed(0) { idx, acc, c ->
            when (c) {
                'M' -> if (idx > 0 && s[idx - 1] == 'C') acc + 1000 - 200 else acc + 1000
                'D' -> if (idx > 0 && s[idx - 1] == 'C') acc + 500 - 200 else acc + 500
                'C' -> if (idx > 0 && s[idx - 1] == 'X') acc + 100 - 20 else acc + 100
                'L' -> if (idx > 0 && s[idx - 1] == 'X') acc + 50 - 20 else acc + 50
                'X' -> if (idx > 0 && s[idx - 1] == 'I') acc + 10 - 2 else acc + 10
                'V' -> if (idx > 0 && s[idx - 1] == 'I') acc + 5 - 2 else acc + 5
                'I' -> acc + 1
                else -> 0
            }
        }
    }
}

fun main(args: Array<String>) {
    Solution().romanToInt("MMMCMXCIX").let(::println)   // 3999
    Solution().romanToInt("MM").let(::println)          // 2000
    Solution().romanToInt("MCMXC").let(::println)       // 1990
    Solution().romanToInt("MCMLXXXIV").let(::println)   // 1984
    Solution().romanToInt("MCMLXXVI").let(::println)    // 1976
    Solution().romanToInt("MDCCCXCIX").let(::println)   // 1899
    Solution().romanToInt("MCD").let(::println)         // 1400
}