/**
 * 23 / 23 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 15.9 MB 
 */
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> store;
        for (int i = 0; i < nums.size(); ++ i) {
            if (store.count(nums[i])) 
                return true;
            store.insert(nums[i]);
            if (i >= k) {
                store.erase(nums[i - k]);
            }
        }
        return false;
    }
};
