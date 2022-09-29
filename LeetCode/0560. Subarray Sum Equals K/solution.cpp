/**
 * 92 / 92 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 40.5 MB 
 */
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> rec;
        rec[0] = 1;
        int ans = 0, psum = 0;
        for (auto &num : nums) {
            psum += num;
            if (rec.count(psum - k)) {
                ans += rec[psum - k];
            }
            ++ rec[psum];
        }
        return ans;
    }
};
