/**
 * 166 / 166 test cases passed.
 * Runtime: 60 ms
 * Memory Usage: 47.2 MB 
 */
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            if (i > farthest) return false;
            farthest = max(farthest, i + nums[i]);
        }
        return true;
    }
};
