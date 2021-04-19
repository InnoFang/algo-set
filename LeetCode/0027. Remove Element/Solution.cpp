/**
 * 113 / 113 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 8.6 MB 
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] != val) {
                nums[len++] = nums[i];
            }
        }
        return len;
    }
};

/**
 * 113 / 113 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 8.5 MB 
 */
class Solution2 {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size() - 1;
        for (int i = 0; i <= n; ++ i) {
            if (nums[i] == val) {
                swap(nums[i--], nums[n--]);
            }
        }
        return n + 1;
    }
};
