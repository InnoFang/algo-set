/**
 * Created by Inno Fang on 2018/3/25.
 */

/**
 * 94 / 94 test cases passed.
 * Status: Accepted
 * Runtime: 22 ms
 */
class Solution {
    private int lo = 0;
    private int max = 0;

    public String longestPalindrome(String s) {
        int len = s.length();
        if (len < 2) return s;
        for (int i = 0; i < len; i++) {
            find(s, i, i);
            find(s, i, i + 1);
        }
        return s.substring(lo, lo + max);
    }

    private void find(String s, int i, int j) {
        int len = s.length();
        while (i >= 0 && j < len && s.charAt(i) == s.charAt(j)) {
            i--;
            j++;
        }
        len = j - i - 1;
        if (len > max) {
            max = len;
            lo = i + 1;
        }
    }
}