/**
 * 161 / 161 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 13.4 MB 
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int slow = 0;
        for (int fast = 1; fast < nums.size(); ++ fast) {
            if (nums[fast] != nums[slow]) {
                nums[++slow] = nums[fast];
            }
        }
        return slow + 1;
    }
};
