/**
 * 126 / 126 test cases passed.
 * Runtime: 148 ms
 * Memory Usage: 32 MB 
 */
class Solution {
    fun minSteps(n: Int): Int {
        if (n == 1) return 0
        var x: Int = n shr 1;
        while (n % x != 0) x -= 1
        return minSteps(x) + (n / x)
    }
}
