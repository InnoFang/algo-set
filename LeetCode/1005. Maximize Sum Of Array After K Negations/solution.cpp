/**
 * 80 / 80 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.7 MB 
 */
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int abs_min = INT_MAX;
        size_t sum = 0;
        for (auto &num : nums) {
            abs_min = min(abs_min, abs(num));
            sum += num;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() && k; ++i, --k) {
            if (nums[i] >= 0) break;
            sum -= 2 * nums[i];
        }
        if (k > 0 && (k & 1)) {
            sum -= 2 * abs_min;
        }
        return sum;
    }
};
