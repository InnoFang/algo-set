/**
 * 56 / 56 test cases passed.
 * Status: Accepted
 * Runtime: 8 ms
 */
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n = nums.size();
        int m = nums[0].size();
        if (m * n != r * c) 
            return nums;
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < m * n; ++ i) {
            ans[i / c][i % c] = nums[i / m][i % m];
        }
        return ans;
    }
};

