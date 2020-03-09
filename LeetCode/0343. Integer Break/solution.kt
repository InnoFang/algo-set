/**
 * Created by Inno Fang on 2017/12/2.
 *
 * dp 自底向上
 *
 * 记忆化搜索，存储最优结果
 *
 * 初始化初始条件
 *
 * 遍历 {
 *
 *   分割 {
 *
 *   }
 * }
 *
 */

// 343
/*
 * 状态转移方程
 * dp[i] = max(dp[i],       /* 自身的值 */
 *             j * (i - j), /* 分两个值的情况 */
 *             j * dp[i-j]  /* 分多个值的情况 */
 *             )
 */
fun integerBreak(n: Int): Int {
    val dp = Array(n + 1) { -1 }

    dp[1] = 1

    (2..n).forEach { i ->
        (1..i).forEach { j ->
            dp[i] = max3(dp[i], j * dp[i - j], j * (i - j))
        }
    }

    return dp[n]
}

fun max3(a: Int, b: Int, c: Int): Int {
    return Math.max(a, Math.max(b, c))
}

fun main(args: Array<String>) {
    integerBreak(10).let(::println)
}
