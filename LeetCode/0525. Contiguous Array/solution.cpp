/**
 * 564 / 564 test cases passed.
 * Runtime: 156 ms
 * Memory Usage: 81.5 MB 
 */
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp { {0, -1} };
        int ans = 0, sum = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            nums[i] ? ++sum : --sum;
            if (mp.count(sum)) ans = max(ans, i - mp[sum]);
            else mp[sum] = i;
        }
        return ans;
    }
};
