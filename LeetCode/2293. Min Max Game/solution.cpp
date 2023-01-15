/**
 * Runtime: 0 ms
 * Memory Usage: 9.7 MB 
 */
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        vector<int> newNums(n >> 1);
        for (int i = 0; i < newNums.size(); ++ i) {
            if (i & 1) {
                newNums[i] = max(nums[2 * i], nums[2 * i + 1]);
            } else {
                newNums[i] = min(nums[2 * i], nums[2 * i + 1]);
            }
        }
        return minMaxGame(newNums);
    }
};
