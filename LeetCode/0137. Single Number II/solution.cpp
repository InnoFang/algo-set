/**
 * 14 / 14 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 9.8 MB 
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (auto& num: nums) {
            ++ freq[num];
        }

        int ans;
        for (auto& pair: freq) {
            if (pair.second == 1) {
                ans = pair.first;
                break;
            } 
        }
        return ans;
    }
};
