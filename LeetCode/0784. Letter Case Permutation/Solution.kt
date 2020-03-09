class Solution {
    fun letterCasePermutation(S: String): List<String> {

        val res = mutableListOf<String>()
        val que = java.util.LinkedList<Pair<String, Int>>()
        que.push(Pair(S, 0))
        while (que.isNotEmpty()) {
            val per = que.peek().first
            val index = que.peek().second
            que.pop()

            if (!res.contains(per)) res.add(per)

            for (i in index until per.length) {
                per[i].let {
                    if (it.isLetter()) {
                        val newChar = if (it.isUpperCase()) it.toLowerCase() else it.toUpperCase()
                        val new = StringBuilder(per).replace(i, i + 1, "$newChar").toString()
                        que.push(Pair(new, i + 1))
                    }
                }
            }
        }
        return res
    }
}

fun main(args: Array<String>) {
    Solution().letterCasePermutation("a1b2").forEach(::format).let(::newLine)
    Solution().letterCasePermutation("3z4").forEach(::format).let(::newLine)
    Solution().letterCasePermutation("12345").forEach(::format).let(::newLine)
}

fun format(a: Any) = print("$a ")
fun newLine(a: Any) = println()
