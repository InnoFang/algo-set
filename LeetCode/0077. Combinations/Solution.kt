class Solution {
    private val res = ArrayList<List<Int>>()
    fun combine(n: Int, k: Int): List<List<Int>> {
        if (n < 1 || k < 1 || n < k) return res
        combination(n, k, 1, ArrayList<Int>())
        return res
    }

    private fun combination(n: Int, k: Int, start: Int, list: ArrayList<Int>) {
        if (list.size == k) res.add(ArrayList(list))
        else (start..n).forEach {
            list.add(it)
            combination(n, k, it + 1, list)
            list.remove(it)
        }
    }
}

class Solution2 {
    private val res = ArrayList<List<Int>>()
    fun combine(n: Int, k: Int): List<List<Int>> {
        if (n < 1 || k < 1 || n < k) return res
        combination(n, k, 1, ArrayList<Int>())
        return res
    }

    private fun combination(n: Int, k: Int, start: Int, list: ArrayList<Int>) {
        if (list.size == k) res.add(ArrayList(list))
        // 对 list 还需要填补 k - list.size 这么多个数，那么在接下来的循环中，
        // 要确保到 n 的数有这么多个，否则就不需要继续循环了，其次，因为要算上当前要加的这个数，所以还需要 +1
        else (start..(n - (k - list.size) + 1)).forEach {
            list.add(it)
            combination(n, k, it + 1, list)
            list.remove(it)
        }
    }
}

fun main(args: Array<String>) {
    Solution2().combine(4, 2).forEach {
        it.forEach {
            print("$it ")
        }
        println()
    }
}


// 39. combination sum
// 40. combination sum II
// 216. combination sum III
// 78. Subsets
// 90. Subsets II
// 401. Binary Watch