class Solution {
    fun climbStairs(n: Int): Int {
        val arr = MutableList(n + 2) { 0 }
        arr[1] = 1
        arr[2] = 2
        return (3..n).forEach { arr[it] = arr[it - 1] + arr[it - 2] }.let { arr[n] }
    }

}
class Solution2 {
    fun climbStairs(n: Int): Int {
        if (n <= 0) return 0

        val steps = hashMapOf(Pair(1, 1))
        for (i in 2..n) {
            val ones = steps[1] ?: 0
            val twos = steps[2] ?: 0
            steps.put(1, twos + ones)
            steps.put(2, ones)
        }
        return (steps[1] ?: 0) + (steps[2] ?: 0)
    }
}


fun main(args: Array<String>) {
    Solution().climbStairs(1).let(::println)
}
