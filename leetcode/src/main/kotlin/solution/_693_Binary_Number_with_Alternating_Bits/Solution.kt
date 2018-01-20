package solution._693_Binary_Number_with_Alternating_Bits

/**
 * Created by Inno Fang on 2017/12/29.
 */

// WA : 9
//class Solution {
//    fun hasAlternatingBits(n: Int): Boolean {
//        if (n != 0 && (n and 0b11) == 0) return false
//        return (n shr 1 and n) == 0
//    }
//}


// WA : 3
class Solution {
    fun hasAlternatingBits(n: Int): Boolean {
        var mask = n
        mask = mask or (mask shr 1)
        mask = mask or (mask shr 2)
        mask = mask or (mask shr 4)
        mask = mask or (mask shr 8)
        mask = mask or (mask shr 16)
        return ((n shr 1) xor n) == (mask)
    }
}

class Solution2 {
    fun hasAlternatingBits(n: Int): Boolean {
        var n: Long = n.toLong()
        return (n + (n shr 1) + 1) and (n + (n shr 1)) == 0L
    }
}

class Solution3 {
    fun hasAlternatingBits(n: Int): Boolean {
        val a = n xor (n shr 1)
        return a and (a + 1) == 0
    }
}

fun main(args: Array<String>) {
    assert(0, true)
    assert(1, true)
    assert(2, true)
    assert(3, false)
    assert(4, false)
    assert(5, true)
    assert(6, false)
    assert(7, false)
    assert(8, false)
    assert(9, false)
    assert(10, true)
    assert(11, false)
    assert(12, false)
    assert(13, false)
    assert(14, false)
    assert(15, false)
    assert(16, false)
    assert(17, false)
    assert(100, false)
    assert(101, false)
}

var cas = 0
fun assert(n: Int, ans: Boolean) {
    val solution = Solution()
    val res = solution.hasAlternatingBits(n)
    println("cas:${++cas}.\t[$n] \t${res == ans}")
}


