/**
 * Created by Inno Fang on 2018/3/10.
 */

/**
 * 1158 / 1158 test cases passed.
 * Status: Accepted
 * Runtime: 63 ms
 */
class Solution {
    public String convert(String s, int numRows) {
        int len = s.length();
        if (len == 0 || len < numRows || numRows == 1) return s;
        StringBuilder res = new StringBuilder();
        for (int i = 0; i < numRows; i++) {
            int idx = i;
            res.append(s.charAt(idx));
            while (idx < len) {
                if (i != numRows - 1) {
                    idx += 2 * numRows - 2 - 2 * i;
                    if (idx < len) res.append(s.charAt(idx));
                }

                if (i != 0) {
                    idx += 2 * i;
                    if (idx < len) res.append(s.charAt(idx));
                }
            }
        }
        return res.toString();
    }

    public static void main(String[] args) {
        System.out.println(new Solution().convert("PAYPALISHIRING", 4));
    }
}