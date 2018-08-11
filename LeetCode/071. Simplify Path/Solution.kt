/**
 * Created by Inno Fang on 2018/3/2.
 */


/**
 * 252 / 252 test cases passed.
 * Status: Accepted
 * Runtime: 348 ms
 */
class Solution {
    fun simplifyPath(path: String): String {
        if (path.isEmpty()) return path
        val stack = mutableListOf<String>()
        path.split("/").let {
            it.slice(1..it.lastIndex).forEach {
                when (it) {
                    ".", "" -> return@forEach
                    "" -> if (stack.isNotEmpty()) stack.removeAt(stack.lastIndex)
                    else -> if (it.isNotEmpty()) stack.add("/$it")
                }
            }
        }
        if (stack.isEmpty()) stack.add("/")
        return stack.joinToString("")
    }
}

fun main(args: Array<String>) {
    Solution().simplifyPath("/home/").let(::println)
    Solution().simplifyPath("/a/./b/../../c/").let(::println)
    Solution().simplifyPath("/a/..").let(::println)
    Solution().simplifyPath("/").let(::println)
    Solution().simplifyPath("/.").let(::println)
    Solution().simplifyPath("/home/foo/.ssh/../.ssh2/authorized_keys/").let(::println)
    Solution().simplifyPath("").let(::println)
    Solution().simplifyPath("///TJbrd/owxdG//").let(::println)
}

// more testcase
/*
    "/"
    ""
    "/home/foo/.ssh/../.ssh2/authorized_keys/"
    "/."
    "/.."
    "/home/"
    "/home/."
    "/home/.."
    "/a/./b/../../c/"
    "/../"
    "/home//foo/"
    "///TJbrd/owxdG//"
 */