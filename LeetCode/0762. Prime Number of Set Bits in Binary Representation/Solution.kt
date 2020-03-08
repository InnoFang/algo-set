class Solution {
    fun countPrimeSetBits(L: Int, R: Int): Int {
        val prime = intArrayOf(2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31)
        var res = 0
        (L..R).forEach { i ->
            var num = i
            var bits = 0
            while (num != 0) {
                bits += num and 1
                num = num shr 1
            }
            if (prime.contains(bits)) res++
        }
        return res
    }
}

fun main(args: Array<String>) {
    Solution().countPrimeSetBits(1, 10000).let(::println)
}