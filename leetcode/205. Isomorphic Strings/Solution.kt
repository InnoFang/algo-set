/**
 * Created by Inno Fang on 2018/2/16.
 */

/**
 * 30 / 30 test cases passed.
 * Status: Accepted
 * Runtime: 367 ms
 */
class Solution {
    fun isIsomorphic(s: String, t: String): Boolean {
        if (s.length != t.length) return false
        val match = HashMap<Char, Char>()
        (0 until s.length).forEach {
            if (match.containsKey(s[it])) {
                if ((match[s[it]] != t[it])) return false
            } else {
                if (!match.containsValue(t[it])) match.put(s[it], t[it])
                else return false
            }
        }
        return true
    }
}

fun main(args: Array<String>) {
    Solution().isIsomorphic("egg", "add").let(::println)
    Solution().isIsomorphic("foo", "bar").let(::println)
    Solution().isIsomorphic("paper", "title").let(::println)
    Solution().isIsomorphic("ab", "aa").let(::println)
}