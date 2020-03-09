class Solution {
    fun allPathsSourceTarget(graph: Array<IntArray>): List<List<Int>> {
        val result = ArrayList<ArrayList<Int>>()
        val path = arrayListOf(0)
        dfs(graph, 0, result, path)
        return result
    }

    private fun dfs(graph: Array<IntArray>, idx: Int, result: ArrayList<ArrayList<Int>>, path: ArrayList<Int>) {
        if (graph[idx].isEmpty()) {
            val p = ArrayList(path)
            result.add(p)
        } else {
            for (i in 0 until graph[idx].size) {
                val node = graph[idx][i]
                path.add(node)
                dfs(graph, node, result, path)
                path.remove(node)
            }
        }
    }
}

fun main(args: Array<String>) {
    Solution().allPathsSourceTarget(arrayOf(
            intArrayOf(1,2),
            intArrayOf(3),
            intArrayOf(3),
            intArrayOf())).forEach{
        it.forEach { print("$it ") }
        println()
    }
}
