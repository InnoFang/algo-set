/**
 * 60 / 60 test cases passed.
 * Runtime: 244 ms
 * Memory Usage: 76.9 MB 
 */
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> store;
        int ans = 0;
        for (int l = 0, r = 0; r < nums.size(); ++ r) {
            store.insert(nums[r]);
            while (*store.rbegin() - *store.begin() > limit) {
                store.erase(store.find(nums[l]));
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

