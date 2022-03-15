/**
 * 111 / 111 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 8.1 MB 
 */
class Solution {
public:
    void dfs(vector<int> &nums, int idx, int result, int &largest, int &count) {
        if (idx == nums.size()) {
            if (result > largest) {
                largest = result;
                count = 1;
            } else if (result == largest) {
                ++ count;
            }
            return;
        }
        dfs(nums, idx + 1, result | nums[idx], largest, count);
        dfs(nums, idx + 1, result, largest, count);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int largest = 0, count = 0; 
        dfs(nums, 0, 0, largest, count);
        return count;
    }
};
