/**
 * 111 / 111 test cases passed.
 * Runtime: 72 ms
 * Memory Usage: 38.9 MB 
 */
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0, maxSum = nums[0], maxn = 0, minSum = nums[0], minn = 0;
        for (auto &num : nums) {
            maxn = max(maxn + num, num);
            maxSum = max(maxSum, maxn);
            minn = min(minn + num, num);
            minSum = min(minSum, minn);
            total += num;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};
