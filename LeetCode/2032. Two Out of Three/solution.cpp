/**
 * Runtime: 20 ms
 * Memory Usage: 25.4 MB 
 */
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> cnt;
        for (auto& num: nums1) cnt[num] = 1;
        for (auto& num: nums2) if (cnt[num] == 1) cnt[num] = 2;
        for (auto& num: nums3) if (cnt.count(num)) cnt[num] = 3;
        vector<int> ans;
        for (auto &[num, c]: cnt) {
            if (c > 1) ans.push_back(num);
        }
        return ans;
    }
};
