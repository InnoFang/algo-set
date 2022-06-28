/**
 * 140 / 140 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 15.8 MB 
 */
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        for (auto &num : nums) {
            num += 1000 * (nums[num] % 1000);
        }
        for (auto &num : nums) {
            num /= 1000;
        }
        return nums;
    }
};
