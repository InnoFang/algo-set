/**
 * Runtime: 8 ms
 * Memory Usage: 17.3 MB 
 */
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int pos = nums.end() - upper_bound(nums.begin(), nums.end(), 0);
        return neg > pos ? neg : pos;
    }
};
