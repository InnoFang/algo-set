/**
 * 89 / 89 test cases passed.
 * Runtime: 52 ms
 * Memory Usage: 25 MB 
 */
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> recore;
        int maxFreq = 1;
        for (int i = 0; i < nums.size(); ++ i) {
            if (recore.find(nums[i]) == recore.end()) {
                recore[nums[i]] = {1, i, i}; // count, left_index, right_index
            } else {
                recore[nums[i]][0] ++;
                recore[nums[i]][2] = i;
                maxFreq = max(maxFreq, recore[nums[i]][0]);
            }
        }
        int ans = nums.size();
        for (auto& [_, item]: recore) {
            if (item[0] == maxFreq) {
                ans = min(ans, item[2] - item[1] + 1);
            }
        }
        return ans;
    }
};
