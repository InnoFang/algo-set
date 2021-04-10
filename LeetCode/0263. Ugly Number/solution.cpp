/**
 * 1013 / 1013 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        while (n % 5 == 0) n /= 5;
        while (n % 3 == 0) n /= 3;
        while (n % 2 == 0) n /= 2;
        return n == 1;
    }
};
