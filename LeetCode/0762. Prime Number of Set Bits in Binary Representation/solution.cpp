/**
 * 202 / 202 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 6.1 MB 
 */
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        unordered_set<int> prime({2, 3, 5, 7, 11, 13, 17, 19});
        for (int i = left; i <= right; ++ i) {
            ans += prime.count(__builtin_popcount(i));
        }
        return ans;
    }
};
