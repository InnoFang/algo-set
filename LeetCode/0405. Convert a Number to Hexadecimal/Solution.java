/**
 * 100 / 100 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 35.7 MB 
 */
class Solution {
    public String toHex(int num) {
        if (num == 0) return "0";
        String hex = "0123456789abcdef";
        StringBuilder sb = new StringBuilder();
        while (sb.length() < 8 && num != 0) {
            sb.append(hex.charAt(num & 0xF));
            num >>>= 4;
        }
        return sb.reverse().toString();
    }
}