/**
 * Created by Inno Fang on 2018/3/29.
 */

/**
 * 49 / 49 test cases passed.
 * Status: Accepted
 * Runtime: 428 ms
 */
class Solution {
    private val parent = mutableListOf<Int>()

    private fun find(a: Int): Int {
        if (a != parent[a]) parent[a] = find(parent[a])
        return parent[a]
    }

    private fun union(p: Int, q: Int) {
        val rootP = find(p)
        val rootQ = find(q)
        if (rootQ != rootP) parent[rootP] = rootQ
    }

    fun accountsMerge(accounts: List<List<String>>): List<List<String>> {
        parent.addAll(List(accounts.size) { it })

        val mail = HashMap<String, Int>()
        for (i in (0..accounts.lastIndex)) {
            for (j in (1..accounts[i].lastIndex)) {
                val a = accounts[i][j]
                if (!mail.containsKey(a)) mail[a] = i
                else {
                    val k = mail[a]!!
                    if (accounts[i][0] == accounts[k][0]) union(k, i)
                }
            }
        }

        val merged = HashMap<Int, java.util.TreeSet<String>>()
        for (i in (0..parent.lastIndex)) {
            val a = find(i)
            merged.getOrPut(a, { java.util.TreeSet() }).addAll(accounts[i])
        }

        val res = ArrayList<ArrayList<String>>()
        merged.forEach { _, v -> res.add(ArrayList(v)) }
        return res
    }
}