/**
 * Created by Inno Fang on 2017/12/18.
 */

// 这题不是超时就是栈溢出 ... ...

// 做题之前，是不是应该先思考3分钟，用纸和笔演算一下，对于极限数据，都要测试，并且还要想出10组左右的样例？
// 这类题要找规律，多写写，多画画，

// Exception in thread "main" java.lang.StackOverflowError
/*class Solution2 {
    val memo = HashMap<Int, Int>()
    fun integerReplacement(n: Int): Int {
        return tryReplace(n, 0)
    }

    private fun tryReplace(n: Int, times: Int): Int {

        if (memo.containsKey(n)) return memo[n]!!

        val res =  when {
            n == 1 -> times
            n and 1 == 0 -> tryReplace(n / 2, times + 1)
            else -> minOf(tryReplace(n + 1, times + 1), tryReplace(n - 1, times + 1))
        }
        memo.put(n, res)
        return res
    }
}*/

class Solution {
    fun integerReplacement(n: Int): Int {
        var times = 0
        var n = n
        while (n != 1) {
            if (n and 1 == 0) {
                n = n ushr 1
            } else if (n == 3 || n.ushr(1) and 1 == 0) {
                n--
            } else{
                n++
            }

            times++
        }
        return times
    }
}

fun main(args: Array<String>) {
    Solution().integerReplacement(8).let(::println)
    Solution().integerReplacement(3).let(::println)
    Solution().integerReplacement(7).let(::println)
    Solution().integerReplacement(15).let(::println)
    Solution().integerReplacement(2147483647).let(::println)
}