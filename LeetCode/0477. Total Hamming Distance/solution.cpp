/**
 * 46 / 46 test cases passed.
 * Runtime: 36 ms
 * Memory Usage: 18.6 MB 
 */
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        // the length of the binary number of 10 ^ 9 is 30
        for (int i = 0; i < 30; ++ i) {
            int c = 0;
            for (auto num: nums) {
                c += (num >> i) & 1;
            }
            ans += c * (n - c);
        }
        return ans;
    }
};
