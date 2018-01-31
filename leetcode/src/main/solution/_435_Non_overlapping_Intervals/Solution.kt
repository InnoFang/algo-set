package algorithm._435_Non_overlapping_Intervals

/**
 * Created by Inno Fang on 2018/1/31.
 */
class Interval(
        var start: Int = 0,
        var end: Int = 0
)

/**
 * Dynamic Programming  动态规划
 * 将应该删去多少个区间，转化为最大的不重叠区间是几个
 * 这样要求应该删去多少个区间，就可以用 区间个数 - 最大连续区间数 得到
 * 类似于最长上升子序列问题 LIS
 *
 * 18 / 18 test cases passed.
 * Runtime: 1651 ms
 */
class Solution {
    fun eraseOverlapIntervals(intervals: Array<Interval>): Int {
        if (intervals.isEmpty()) return 0

        // 先对区间进行排序
        // 规则：按区间开始位置排序
        //      1. 若区间开始位置不同，则哪个区间开始位置在前，哪个区间在前
        //      2. 若区间开始位置相同，则哪个区间的结束位置在前，哪个区间
        intervals.sortWith(Comparator { o1, o2 ->
            if (o1.start != o2.start) o1.start - o2.start
            else o1.end - o2.end
        })

        // 保存每个区间位置之前有多少个不重叠区间
        val dp = MutableList(intervals.size, { 1 })

        // 对区间进行遍历
        (1 until intervals.size).forEach { i ->
            (0 until i).forEach { j ->
                if (intervals[i].start >= intervals[j].end)
                    dp[i] = maxOf(dp[i], 1 + dp[j])
            }
        }

        // 应删去的区间数 = 区间总数 - 最大的不重叠区间数
        return intervals.size - dp.max()!!
    }
}

/**
 * Greedy 贪心算法
 * 将应该删去多少个区间，转化为最大的不重叠区间是几个
 * 这样要求应该删去多少个区间，就可以用 区间个数 - 最大连续区间数 得到
 *
 * 18 / 18 test cases passed.
 * Runtime: 423 ms
 */
class Solution2 {
    fun eraseOverlapIntervals(intervals: Array<Interval>): Int {
        if (intervals.isEmpty()) return 0

        // 先对区间进行排序
        // 规则：按区间结束位置排序
        //      1. 若区间结束位置不同，则哪个区间开始位置在前，哪个区间在前
        //      2. 若区间结束位置相同，则哪个区间的结束位置在前，哪个区间
        intervals.sortWith(Comparator { o1, o2 ->
            if (o1.end != o2.end) o1.end - o2.end
            else o1.start - o2.start
        })

        var res = 1
        var pre = 0
        (1 until intervals.size).forEach {
            if (intervals[it].start >= intervals[pre].end) {
                res++; pre = it
            }
        }

        return intervals.size - res
    }
}

fun main(args: Array<String>) {
    Solution2().eraseOverlapIntervals(arrayOf(Interval(1, 2))).let(::println) // 0
    Solution2().eraseOverlapIntervals(arrayOf(
            Interval(1, 2),
            Interval(2, 3),
            Interval(3, 4),
            Interval(1, 3)
    )).let(::println) // 1
    Solution2().eraseOverlapIntervals(arrayOf(
            Interval(1, 2),
            Interval(1, 2),
            Interval(1, 2)
    )).let(::println) // 2
    Solution2().eraseOverlapIntervals(arrayOf(
            Interval(1, 2),
            Interval(2, 3)
    )).let(::println) // 0
}