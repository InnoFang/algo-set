/**
 * 206 / 206 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 39 MB 
 */
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> count;
        for (auto &num: nums) {
            count[num] += 1;
        }
        int ans = 0;
        for (auto &item: count) {
            if (count.count(item.first + 1)) {
                ans = max(ans, count[item.first] + count[item.first + 1]);
            }
        }
        return ans;
    }
};
