/**
 * 47 / 47 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.9 MB 
 */
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int max_ = *max_element(nums.begin(), nums.end());
        vector<int> freq(max_ + 1);
        for (auto& num: nums) {
            freq[num] += num;
        }
        int last = 0, curr = 0;
        for (auto& cnt: freq) {
            int tmp = curr;
            curr = max(curr, last + cnt);
            last = tmp;
        }
        return curr;
    }
};
