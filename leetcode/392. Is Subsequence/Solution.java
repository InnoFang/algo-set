/**
 * Created by Inno Fang on 2018/3/18.
 */

class Solution {
    public boolean isSubsequence(String s, String t) {
        if (s.isEmpty()) return true;
        if (t.isEmpty()) return false;
        int i = t.indexOf(s.charAt(0));
        return i != -1 && (s.length() == 1 || isSubsequence(s.substring(1), t.substring(i + 1)));
    }
}