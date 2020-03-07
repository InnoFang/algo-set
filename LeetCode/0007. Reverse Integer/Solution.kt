class Solution {
    fun reverse(x: Int): Int {
        var num = x
        var res : Long = 0
        while (num != 0) {
            res = res * 10 + num % 10
            num /= 10
            if (res > Int.MAX_VALUE || res < Int.MIN_VALUE) return 0
        }
        return res.toInt()
    }
}

class Solution2 {
    fun reverse(x: Int): Int {
        val num = Math.abs(x.toLong()).toString().reversed().toLong()
        if (num > Int.MAX_VALUE) return 0
        return if (x < 0) num.toInt() * -1 else num.toInt()
    }
}
fun main(args: Array<String>) {
   Solution2().reverse(123).let(::println)
   Solution2().reverse(-123).let(::println)
   Solution2().reverse(120).let(::println)
   Solution2().reverse(2147483647).let(::println)
   Solution2().reverse(-2147483647).let(::println)
//   Solution2().reverse(2147483648).let(::println)
   Solution2().reverse(-2147483648).let(::println)

}

