/**
 * 15 / 15 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 21.9 MB 
 */
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for (auto &num : nums) ans ^= num;
        return ans;
    }
};

/**
 * 15 / 15 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 21.8 MB 
 */
class Solution2 {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == nums[mid ^ 1]) l = mid + 1;
            else r = mid;
        }
        return nums[l];
    }
};
