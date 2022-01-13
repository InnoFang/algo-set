/**
 * 232 / 232 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 10.5 MB 
 */
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        int first = 0, second = -1;
        for (int i = 1; i < nums.size(); ++ i) {
            if (nums[i] > nums[first]) {
                second = first;
                first = i;
            } else if (second == -1 || nums[i] > nums[second]) {
                second = i;
            }
        }
        if (nums[first] >> 1 >= nums[second]) {
            return first;
        }
        return -1;
    }
};
