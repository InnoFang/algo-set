/**
 * 211 / 211 test cases passed.
 * Runtime: 132 ms
 * Memory Usage: 10.3 MB 
 */
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for (int a = 0; a < n - 3; ++ a) {
            for (int b = a + 1; b < n - 2; ++ b) {
                for (int c = b + 1; c < n - 1; ++ c) {
                    for (int d = c + 1; d < n; ++ d) {
                        if (nums[a] + nums[b] + nums[c] == nums[d]) {
                            ++ ans;
                        }
                    }
                }
            }
        }
        return ans;
    }
};

/**
 * 211 / 211 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 11.9 MB 
 */
class Solution2 {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        map<int, int> store;
        for (int b = n - 3; b >= 1; -- b) {
            for (int d = b + 2; d < n; ++ d) {
                store[nums[d] - nums[b + 1]] ++;
            }
            for (int a = 0; a < b; ++ a) {
                if (int sum = nums[a] + nums[b]; store.count(sum)) {
                    ans += store[sum];
                }
            }
        }
        return ans;
    }
};
