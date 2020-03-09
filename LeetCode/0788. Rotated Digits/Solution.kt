class Solution {
    fun rotatedDigits(N: Int): Int {
        val valid = hashMapOf(0 to 0, 1 to 1, 8 to 8, 2 to 5, 5 to 2, 6 to 9, 9 to 6)
        var cnt = 0
        (1..N).forEach {
            var i = it
            val new = IntArray("$it".length)
            var j = new.lastIndex
            while (i > 0) {
                if (i % 10 in valid) {
                    new[j--] = valid[i % 10]!!
                    i /= 10
                } else return@forEach
            }
            if (new.reduce { acc, i -> acc * 10 + i } == it) return@forEach
            cnt++
        }
        return cnt
    }
}

fun main(args: Array<String>) {
    Solution().rotatedDigits(10).let(::println)
}
