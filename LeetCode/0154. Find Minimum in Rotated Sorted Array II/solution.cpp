/**
 * 192 / 192 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 11.8 MB 
 */
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = l + r >> 1;
            if (nums[mid] > nums[r]) l = mid + 1;
            else if (nums[mid] < nums[r]) r = mid;
            else r -= 1;
        }
        return nums[l];
    }
};
