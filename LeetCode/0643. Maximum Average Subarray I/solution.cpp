/**
 * 123 / 123 test cases passed.
 * Status: Accepted
 * Runtime: 140 ms
 */
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sumK = accumulate(nums.begin(), nums.begin() + k, 0);
        double maxAveg = sumK / k ;
        for (int i = 0; i < nums.size() -  k; ++ i) {
            sumK = sumK - nums[i] + nums[i + k];
            maxAveg = max(maxAveg, sumK / k);
        }
        return maxAveg;
    }
};

