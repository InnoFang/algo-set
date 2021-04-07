/**
 * 195 / 195 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 10.8 MB 
 */
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + ((r - l) >> 1);
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] >= nums[l]) {
                if (nums[l] <= target && target < nums[mid]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if (nums[mid] < target && target <= nums[r]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};
