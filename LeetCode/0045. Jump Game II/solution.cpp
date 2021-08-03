/**
 * 106 / 106 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 16.1 MB 
 */
class Solution {
public:
    int jump(vector<int>& nums) {
        int boundary = 0;
        int end = 0;
        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i ++ ) {
            boundary = max(boundary, i + nums[i]);
            if (i == end) {
                end = boundary;
                ans ++;
            }
        }
        return ans;
    }
};
