/**
 * Created by Inno Fang on 2018/3/18.
 */

class Solution {

    /**
     * 14 / 14 test cases passed.
     * Status: Accepted
     * Runtime: 11 ms
     * @param s
     * @param t
     * @return
     */
    public boolean isSubsequence(String s, String t) {
        if (s.isEmpty()) return true;
        if (t.isEmpty()) return false;
        int i = t.indexOf(s.charAt(0));
        return i != -1 && (s.length() == 1 || isSubsequence(s.substring(1), t.substring(i + 1)));
    }

    /**
     * 14 / 14 test cases passed.
     * Status: Accepted
     * Runtime: 3 ms
     * @param s
     * @param t
     * @return
     */
    public boolean isSubsequence2(String s, String t) {
        for (int i = 0, pos = 0, len = s.length(); i < len; i++, pos++){
            pos = t.indexOf(s.charAt(i), pos);
            if (pos == -1) return false;
        }
        return true;
    }
}