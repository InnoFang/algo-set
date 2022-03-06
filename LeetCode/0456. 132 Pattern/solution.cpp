/**
 * 102 / 102 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 37.2 MB 
 */
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int minn = INT_MIN;
        stack<int> stk;
        for (int i = nums.size() - 1; i >= 0; -- i) {
            if (nums[i] < minn) return true;
            while (!stk.empty() && stk.top() < nums[i]) {
                minn = stk.top();
                stk.pop();
            }
            stk.push(nums[i]);
        }
        return false;
    }
};
