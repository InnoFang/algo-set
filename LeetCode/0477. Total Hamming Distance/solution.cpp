/**
 * 46 / 46 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 18.5 MB 
 */
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i <= 31; ++ i) {
            int c = 0;
            for (auto num: nums) {
                c += (num >> i) & 1;
            }
            ans += c * (n - c);
        }
        return ans;
    }
};
