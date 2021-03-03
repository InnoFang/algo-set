/**
 * 15 / 15 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.7 MB 
 */
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num + 1);
        for (int i = 1; i <= num; ++ i) {
            if (i & 1) dp[i] = dp[i - 1] + 1;
            else dp[i] = dp[i >> 1];
        }
        return dp;
    }
};

/**
 * 15 / 15 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.7 MB 
 */
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num + 1);
        for (int i = 1; i <= num; ++ i) {
            if (i & 1) dp[i] = dp[i - 1] + 1;
            else dp[i] = dp[i >> 1];
        }
        return dp;
    }
};
class Solution2 {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num + 1);
        for (int i = 1; i <= num; ++ i) {
            dp[i] = dp[i >> 1] + (i & 1);
        }
        return dp;
    }
};
