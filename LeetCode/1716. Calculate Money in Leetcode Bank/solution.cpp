/**
 * 106 / 106 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int totalMoney(int n) {
        int row = n / 7, col = n % 7;
        int ans = 0;
        for (int i = 0; i < row; ++ i) {
            ans += 7 * (1 + i + 7 + i) / 2;
        }
        ans += col * (row + 1 + row + col) / 2;
        return ans;
    }
};


/**
 * 106 / 106 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution2 {
public:
    int totalMoney(int n) {
        int row = n / 7, col = n % 7;
        int a1 = (1 + 7) * 7 / 2, an = (row + row + 6) * 7 / 2;
        int ans = (a1 + an) * row / 2;
        ans += col * (row + 1 + row + col) / 2;
        return ans;
    }
};
