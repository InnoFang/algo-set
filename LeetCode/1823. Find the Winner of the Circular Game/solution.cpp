/**
 * 95 / 95 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int findTheWinner(int n, int k) {
        int p = 0;
        for (int i = 2; i <= n; ++ i) {
            p = (p + k) % i;
        }
        return p + 1;
    }
};
