/**
 * 88 / 88 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 13.3 MB 
 */
class Solution {
public:
    int lower_bound(const vector<int> &nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= target) r = mid - 1;
            else l = mid + 1;
        }
        return l < nums.size() && nums[l] == target ? l : -1;
    }

    int upper_bound(const vector<int> &nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= target) l = mid + 1;
            else r = mid - 1;
        }
        return r >= 0 && nums[r] == target ? r : -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {lower_bound(nums, target), upper_bound(nums, target)};
    }
};
