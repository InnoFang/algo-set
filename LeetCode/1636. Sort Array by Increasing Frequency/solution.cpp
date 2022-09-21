/**
 * 180 / 180 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 10.8 MB 
 */
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for (int num : nums) {
            cnt[num]++;
        }
        sort(nums.begin(), nums.end(), [&](const int a, const int b) {
            if (cnt[a] != cnt[b]) {
                return cnt[a] < cnt[b];
            }
            return a > b;
        });
        return nums;
    }
};
