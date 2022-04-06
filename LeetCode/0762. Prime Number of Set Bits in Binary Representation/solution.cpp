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

/**
 * 202 / 202 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.7 MB 
 */
class Solution2 {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; ++ i) {
            ans += ((1 << __builtin_popcount(i)) & 0b10100010100010101100) != 0;
        }
        return ans;
    }
};
