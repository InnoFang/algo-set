package leetcode._202_Happy_Number


/**
 * Created by Inno Fang on 2017/12/18.
 */
class Solution {
    private val memo = HashSet<Int>()
    fun isHappy(n: Int): Boolean {
        var num = n
        while (!memo.contains(num)) {
            memo.add(num)
            var sum = 0
            while (num != 0) {
                sum += (num % 10) * (num % 10)
                num /= 10
            }
            num = sum
        }
        if (num == 1) return true
        return false
    }
}

// 小于 10 的情况下，只有 1 和 7 是 Happy Number，所以可以拿 num 大于等于 10 做判定点，最小于 10 的结果进行判断
class Solution2 {
    fun isHappy(n: Int): Boolean {
        var num = n
        while (num >= 10) {
            var sum = 0
            while (num != 0) {
                sum += (num % 10) * (num % 10)
                num /= 10
            }
            num = sum
        }
        return num == 1 || num == 7
    }
}

class Solution3 {
    fun isHappy(n: Int): Boolean {
        var one = n
        var two = n
        while (n != 1) {
            one = squareSum(one)
            two = squareSum(squareSum(two))
            if (one == 1 || two == 1) return true
            if (one == two) return false
        }
        return true
    }

    private fun squareSum(n: Int): Int {
        var sum = 0
        var num = n
        while (num != 0) {
            val mod = num % 10
            sum += mod * mod
            num /= 10
        }
        return sum
    }
}

fun main(args: Array<String>) {
    Solution3().isHappy(34).let(::println)
    Solution3().isHappy(7).let(::println)
    Solution3().isHappy(8).let(::println)
    Solution3().isHappy(82).let(::println)
    Solution3().isHappy(68).let(::println)
    Solution3().isHappy(100).let(::println)
    Solution3().isHappy(1).let(::println)
    Solution3().isHappy(10000000).let(::println)
    Solution3().isHappy(0x6ffffff).let(::println)
    Solution3().isHappy(128319).let(::println)
}