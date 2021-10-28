/**
 * 136 / 136 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.4 MB 
 */
class Solution {
public:
    Solution() {
        for (int i = 1; i <= 1e9; i <<= 1) {
            record_.insert(countDigits_(i));
        }
    }

    bool reorderedPowerOf2(int n) {
        return record_.count(countDigits_(n));
    }

private:
    string countDigits_(int n) {
        string cnt(10, 0);
        for (; n; n /= 10) {
            cnt[n % 10] += 1;
        }
        return cnt;
    }
    
private:
    unordered_set<string> record_;
};
