/**
 * 55 / 55 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.1 MB 
 */
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans = 1, acc = 1;
        for (auto &num : nums) {
            if (acc + num <= 0) {
                int diff  = -(acc + num) + 1;
                ans += diff;
                acc += diff;
            }
            acc += num;
        }
        return ans;
    }
};
