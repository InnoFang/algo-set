/**
 * 402 / 402 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.2 MB 
 */
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> vis;
        vis.emplace(n);
        while (n != 1) {
            int t = 0;
            while (n > 0) {
                t += (n % 10) * (n % 10);
                n /= 10;
            }
            if (vis.count(t)) return false;
            n = t;
            vis.emplace(n);
        }
        return true;
    }
};
