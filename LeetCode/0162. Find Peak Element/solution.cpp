/**
 * 63 / 63 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.6 MB 
 */
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        auto pos = max_element(nums.begin(), nums.end());
        return pos - nums.begin();
    }
};

/**
 * 63 / 63 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.6 MB 
 */
class Solution2 {
public:
    int findPeakElement(vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1;
        while (lo < hi) {
            int mid = lo + ((hi - lo) >> 1);
            (nums[mid] < nums[mid + 1]) ? lo = mid + 1 : hi = mid;
        }
        return lo;
    }
};
