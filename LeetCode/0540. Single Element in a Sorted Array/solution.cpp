/**
 * 15 / 15 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 21.9 MB 
 */
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for (auto &num : nums) ans ^= num;
        return ans;
    }
};
