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

/**
 * 161 / 161 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 13.3 MB 
 */
class Solution2 {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (auto& num: nums) {
            if (i < 1 || nums[i - 1] != num) {
                nums[i++] = num;
            }
        }
        return i;
    }
};
