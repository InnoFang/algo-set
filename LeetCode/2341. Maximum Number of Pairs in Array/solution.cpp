/**
 * Runtime: 4 ms
 * Memory Usage: 8.9 MB 
 */
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for (auto &num: nums) {
            cnt[num] += 1;
        }
        int pair = 0;
        for (auto &[_, c]: cnt) {
            pair += c / 2;
        }
        return {pair, int(nums.size()) - pair * 2};
    }
};
