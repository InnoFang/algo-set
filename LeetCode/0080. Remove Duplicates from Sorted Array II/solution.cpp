/**
 * 164 / 164 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 10.7 MB 
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        
        int slow = 2;
        for (int fast = 2; fast < nums.size(); ++ fast) {
            if (nums[slow - 2] != nums[fast]) {
                nums[slow++] = nums[fast];
            }
        }
        return slow;
    }
};
