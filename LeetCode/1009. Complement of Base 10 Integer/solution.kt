/**
 * 128 / 128 test cases passed.
 * Runtime: 124 ms
 * Memory Usage: 32.3 MB 
 */
class Solution {
    fun bitwiseComplement(n: Int): Int {
        if (n == 0) return 1

        var mask = n
        mask = mask or (mask shr 1)
        mask = mask or (mask shr 2)
        mask = mask or (mask shr 4)
        mask = mask or (mask shr 8)
        mask = mask or (mask shr 16)
        return n xor mask
    }
}
