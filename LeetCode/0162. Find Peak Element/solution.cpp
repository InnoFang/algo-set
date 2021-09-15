/**
 * 63 / 63 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.6 MB 
 */
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        auto pos = max_element(nums.begin(), nums.end());
        return pos - nums.begin();
    }
};
