/**
 * Runtime: 0 ms
 * Memory Usage: 38.1 MB 
 */
class Solution {
    public int subtractProductAndSum(int n) {
        int p = 1, s = 0;
        while (n > 0) {
            p *= n % 10;
            s += n % 10;
            n /= 10;
        }
        return p - s;
    }
}
