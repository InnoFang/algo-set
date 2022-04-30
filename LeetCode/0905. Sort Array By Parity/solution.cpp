/**
 * 285 / 285 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 15.7 MB 
 */
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0;       
        for (int r = 0; r < nums.size(); ++ r) {
            if (nums[r] % 2 == 0) {
                swap(nums[l], nums[r]);
                ++ l;
            }
        }
        return nums;
    }
};
