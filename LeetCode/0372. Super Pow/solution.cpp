/**
 * 55 / 55 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 11.4 MB 
 */
class Solution {
public:
    const int mod = 1337;
    int superPow(int a, vector<int>& b) {
        if (b.empty()) return 1;
        int last = b.back(); b.pop_back();
        return quick_mod(a, last) % mod * quick_mod(superPow(a, b), 10) % mod;
    }
    size_t quick_mod(size_t x, int y) {
        size_t ret = 1;
        while (y) {
            if (y & 1) ret = (ret * x) % mod;
            x  = x * x % mod;
            y >>= 1;
        }
        return ret;
    }
};
