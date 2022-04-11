/**
 * 9 / 9 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        int ans = 10;
        int available = 9;
        int unique = 9;
        while (n > 1) {
            available *= unique;
            ans += available;
            unique -= 1;
            n -= 1;
        }
        return ans;
    }
};


/**
 * 9 / 9 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution2 {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        int ans = 10;
        int available = 9;
        for (int i = 0; i < n - 1; ++i) {
            available *= 9 - i;
            ans += available;
        }
        return ans;
    }
};
