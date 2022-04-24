/**
 * 58 / 58 test cases passed.
 * Runtime: 128 ms
 * Memory Usage: 93.5 MB 
 */
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size(); 
        if (n == 1) return 0;
        int total = 0, temp = 0;
        for (int i = 0; i < n; ++ i) {
            total += nums[i];
            temp += i * nums[i];
        }
        int ans = temp;
        for (int i = 0; i < n - 1; ++ i) {
            temp = temp - total + nums[i] * n;
            ans = max(ans, temp);
        }
        return ans;
    }
};
