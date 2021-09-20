/**
 * 126 / 126 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int minSteps(int n) {
        if (n == 1) return 0; 
        int x;
        for (x = n >> 1; n % x != 0; x--) {} 
        return minSteps(x) + (n / x);
    }
};
