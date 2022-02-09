/**
 * 237 / 237 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 12.1 MB 
 */
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0, n = nums.size();
        for (int i = 0; i < n; ++ i) {
            for (int j = i + 1; j < n; ++ j) {
                if (abs(nums[i] - nums[j]) == k) {
                    ++ ans; 
                }
            }
        }
        return ans;
    }
};

/**
 * 237 / 237 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 13.1 MB 
 */
class Solution2 {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0, n = nums.size();
        unordered_map<int, int> record;        
        for (int i = 0; i < n; ++ i) {
            ans += record.count(nums[i] - k) ? record[nums[i] - k] : 0;
            ans += record.count(nums[i] + k) ? record[nums[i] + k] : 0;
            record[nums[i]]++;
        }
        return ans;
    }
};
