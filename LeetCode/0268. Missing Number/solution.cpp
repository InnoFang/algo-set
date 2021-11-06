/**
 * 122 / 122 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 17.4 MB 
 */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += i + 1;
            ans -= nums[i];
        }
        return ans;
    }
};

/**
 * 122 / 122 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 17.5 MB 
 */
class Solution2 {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans ^= (i + 1) ^ (nums[i]);
        }
        return ans;
    }
};
