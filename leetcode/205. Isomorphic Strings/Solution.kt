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

/**
 * 30 / 30 test cases passed.
 * Status: Accepted
 * Runtime: 322 ms
 */
class Solution2 {
    fun isIsomorphic(s: String, t: String): Boolean {
        val m1 = IntArray(256) { -1 }
        val m2 = IntArray(256) { -1 }
        (0 until s.length).forEach {
            if (m1[s[it].toInt()] != m2[t[it].toInt()]) return false
            m1[s[it].toInt()] = it
            m2[t[it].toInt()] = it
        }
        return true
    }
}

fun main(args: Array<String>) {
    Solution2().isIsomorphic("egg", "add").let(::println)
    Solution2().isIsomorphic("foo", "bar").let(::println)
    Solution2().isIsomorphic("paper", "title").let(::println)
    Solution2().isIsomorphic("ab", "aa").let(::println)
}