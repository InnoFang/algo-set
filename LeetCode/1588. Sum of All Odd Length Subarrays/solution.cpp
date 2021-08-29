/**
 * 96 / 96 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 8.1 MB 
 */
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> prefixSum { 0 };
        for (auto& num: arr) {
            prefixSum.emplace_back( prefixSum.back() + num );
        }
        int ans = 0;
        for (int i = 0; i < arr.size(); ++ i) {
            for (int range = 1; i + range - 1 < arr.size(); range += 2) {
                ans += prefixSum[i + range] - prefixSum[i];
            }
        }
        return ans;
    }
};
