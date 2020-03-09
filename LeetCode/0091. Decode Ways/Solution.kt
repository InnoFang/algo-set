class Solution {
    fun numDecodings(s: String): Int {
        if (s.isEmpty() || s == "0") return 0
        val dp = Array(s.length + 1) { 0 }

        dp[0] = 1

        (1..s.length).forEach {
            if ('0' != s[it-1]) {
                dp[it] += dp[it - 1]
            }
            if (it > 1 && "${s[it-2]}${s[it-1]}" >= "10" && "${s[it-2]}${s[it-1]}" <= "26") {
                dp[it] += dp[it - 2]
            }
        }
        return dp[s.length]
    }
}

fun main(args: Array<String>) {
    val solution = Solution()
    solution.numDecodings("").let(::println)        //0
    solution.numDecodings("0").let(::println)       //0
    solution.numDecodings("1").let(::println)       //1
    solution.numDecodings("10").let(::println)      //1
    solution.numDecodings("12").let(::println)      //2
    solution.numDecodings("26").let(::println)      //2
    solution.numDecodings("30").let(::println)      //0
    solution.numDecodings("132").let(::println)     //2
    solution.numDecodings("2685").let(::println)    //2
    solution.numDecodings("123321").let(::println)  //6
}
