/**
 * 307 / 307 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 25.9 MB 
 */
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxn = INT_MIN;
        int minn = INT_MAX;
        int left = -1, right = n - 1;
        for (int i = 0; i < n; ++ i) {
            if (maxn > nums[i]) {
                right = i;
            } else {
                maxn = nums[i];
            }
            if (minn < nums[n - i - 1]) {
                left = n - i - 1;
            } else {
                minn = nums[n - i - 1];
            }
        }
        return left == -1 ? 0 : right - left + 1;
    }
};
