package solution._476_Number_Complement

/**
 * Created by Inno Fang on 2017/12/21.
 */

class Solution {
    fun findComplement(num: Int): Int {
        if (num == 0 || num == 1) return 0

        var num = num
        var order = (Math.log10(num.toDouble()) / Math.log10(2.0)).toInt()
        var complement = IntArray(order)
        while (num != 0 && order != 0) {
            complement[--order] = if ((num and 1) == 0) 1 else 0
            num = num shr 1
        }
        return complement.reduce { acc, i ->
            (acc shl 1) or i
        }
    }
}

class Solution2 {
    fun findComplement(num: Int): Int {
        var mask = 0.inv()
        while ((num and mask) != 0) mask = mask shl 1
        return mask.inv() and num.inv()
    }
}

class Solution3 {
    fun findComplement(num: Int): Int {
        var mask = num
        mask = mask or (mask shr 1)
        mask = mask or (mask shr 2)
        mask = mask or (mask shr 4)
        mask = mask or (mask shr 8)
        mask = mask or (mask shr 16)
        return num xor mask
    }
}

fun main(args: Array<String>) {
    Solution().findComplement(5).let(::println)
    Solution().findComplement(2).let(::println)
    Solution().findComplement(1).let(::println)
    Solution().findComplement(Int.MAX_VALUE).let(::println)
    Solution().findComplement(0).let(::println)
}