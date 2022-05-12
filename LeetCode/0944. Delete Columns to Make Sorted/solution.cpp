/**
 * 85 / 85 test cases passed.
 * Runtime: 36 ms
 * Memory Usage: 11.9 MB 
 */
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs[0].size();
        int ans = 0;
        for (int j = 0; j < n; ++ j) {
            for (int i = 1; i < strs.size(); ++ i) {
                if (strs[i][j] < strs[i - 1][j]) {
                    ++ ans;
                    break;
                }
            }
        }
        return ans;
    }
};
