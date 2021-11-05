/**
 * 39 / 39 test cases passed.
 * Runtime: 128 ms
 * Memory Usage: 55.6 MB 
 */
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        vector<int> dp(arr.size(), 1);
        unordered_map<int, int> store;
        store.insert({arr[0], 0});
        for (int i = 1; i < arr.size(); ++ i) {
            int diff_val = arr[i] - difference;
            if (store.count(diff_val)) {
                int diff_idx = store[diff_val];
                dp[i] = max(dp[i], dp[diff_idx] + 1);
            }
            store[arr[i]] = i;
        }
        return *max_element(dp.begin(), dp.end());
    }
};

/**
 * 39 / 39 test cases passed.
 * Runtime: 112 ms
 * Memory Usage: 55.3 MB 
 */
class Solution2 {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int ans = 0;
        unordered_map<int, int> dp;
        for (auto &num: arr) {
            dp[num] = dp[num - difference] + 1;
            ans = max(ans, dp[num]);
        }
        return ans;
    }
};
