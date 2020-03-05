/**
 * Created by Inno Fang on 2018/4/10.
 */

class Solution {
    fun isPowerOfThree(n: Int): Boolean {
        if (n == 0) return false
        val res = Math.log10(n.toDouble()) / Math.log10(3.0)
        return (res - res.toInt()) < 1e-10
    }
}