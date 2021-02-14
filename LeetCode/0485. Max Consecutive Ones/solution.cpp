/**
 * 41 / 41 test cases passed.
 * Status: Accepted
 * Runtime: 40 ms
 */
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, start = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] == 0) {
                start = i + 1;
            } else {
                ans = max(ans, i - start + 1);
            }
        }
        return ans;
    }
};

