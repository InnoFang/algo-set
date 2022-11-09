/**
 * Runtime: 42 ms
 * Memory Usage: 38.4 MB 
 */
class Solution {
    public int toCode(String s) {
        return s.chars()
            .boxed()
            .map(x -> x - 'a')
            .reduce(0, (x, y) -> x | (1 << y));
    }
    public int countConsistentStrings(String allowed, String[] words) {
        int allowedCode = toCode(allowed);
        int ans = 0;
        for (String word: words) {
            ans += ((allowedCode | toCode(word)) == allowedCode) ? 1 : 0;
        }
        return ans;
    }
}
