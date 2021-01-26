/**
 * 19 / 19 test cases passed.
 * Status: Accepted
 * Runtime: 32 ms
 */
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> nums(100, 0);
        int ans = 0;
        for(auto& d : dominoes) {
            int num = d[0] < d[1] ? d[0] * 10 + d[1] : d[1] * 10 + d[0];
            ans += nums[num];
            nums[num] += 1;
        }
        return ans;
    }
};

