/**
 * 34 / 34 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.6 MB 
 */
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (auto &account : accounts) {
            ans = max(ans, accumulate(account.begin(), account.end(), 0));
        }
        return ans;
    }
};
