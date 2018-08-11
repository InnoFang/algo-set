/**
 * 59 / 59 test cases passed.
 * Status: Accepted
 * Runtime: 380 ms
 */
import java.util.regex.Pattern
class Solution {
    fun lengthOfLastWord(s: String): Int {
        return s.trim().split(Pattern.compile("\\s+")).last().length
    }
}