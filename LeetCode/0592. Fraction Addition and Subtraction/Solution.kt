/**
 * Created by Inno Fang on 2018/3/7.
 */

/**
 * 105 / 105 test cases passed.
 * Status: Accepted
 * Runtime: 564 ms
 */
class Solution {
    fun fractionAddition(expression: String): String {
        val match = java.util.regex.Pattern.compile("(-?\\w*/\\w*)").matcher(expression)
        val numerator = mutableListOf<Int>()
        val denominator = mutableListOf<Int>()
        while (match.find()) {
            with(match.group().split("/")) {
                numerator.add(this[0].toInt())
                denominator.add(this[1].toInt())
            }
        }
        val deLcm = lcm(denominator, denominator.size)
        val nuSum = numerator.foldIndexed(0) { idx, acc, i -> acc + (i * (deLcm / denominator[idx])) }
        val fracGcd = gcd(deLcm, if (nuSum < 0) -nuSum else nuSum)
        return "${nuSum / fracGcd}/${deLcm / fracGcd}"
    }

    private fun gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)
    private fun lcm(a: Int, b: Int): Int = (a * b) / gcd(a, b)
    private fun lcm(a: List<Int>, len: Int): Int = if (len == 1) a[0] else lcm(a[len - 1], lcm(a, len - 1))
}

fun main(args: Array<String>) {
    Solution().fractionAddition("-1/2+1/2").let(::println)
    Solution().fractionAddition("-1/2+1/2+1/3").let(::println)
    Solution().fractionAddition("1/3-1/2").let(::println)
    Solution().fractionAddition("5/3+1/3").let(::println)
    Solution().fractionAddition("-5/2+10/3+7/9").let(::println)
    // -5 * 9 + 10 * 6 + 7 * 2 = -45 + 60 + 14 = 29
}

operator fun Any.invoke() = println("test: $this")