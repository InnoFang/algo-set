/**
 * Runtime: 1 ms
 * Memory Usage: 39.5 MB 
 */
class Solution {
    public int countAsterisks(String s) {
        boolean open = true;
        int ans = 0;
        for (char c: s.toCharArray()) {
            if (c == '|') open = !open;
            else if (open && c == '*') ++ ans;
        }
        return ans;
    }
}
