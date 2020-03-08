class Solution {
    fun matrixReshape(nums: Array<IntArray>, r: Int, c: Int): Array<IntArray> {
        val rows = nums.size
        val cols = nums[0].size
        if (cols * rows == r * c) {
            val retMat = Array(r) { IntArray(c) }
            var ir = 0
            var ic = 0
            nums.forEach {
                it.forEach {
                    if (ic == c) {
                        ic = 0
                        ir++
                    }
                    retMat[ir][ic++] = it
                }
            }
            return retMat
        } else return nums
    }
}

fun main(args: Array<String>) {
    Solution().matrixReshape(arrayOf(intArrayOf(1,2), intArrayOf(3,4)), 1, 4).forEach { it.forEach(::println) }
}
