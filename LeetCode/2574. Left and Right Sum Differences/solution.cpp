/**
 * Runtime: 8 ms
 * Memory Usage: 10.9 MB 
 */
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;
        vector<int> ans;
        for (auto &num: nums) {
            rightSum -= num;
            ans.push_back(abs(leftSum - rightSum));
            leftSum += num;
        }
        return ans;
    }
};
