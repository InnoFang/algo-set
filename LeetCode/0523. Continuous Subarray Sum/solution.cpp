/**
 * 94 / 94 test cases passed.
 * Runtime: 204 ms
 * Memory Usage: 98.1 MB 
 */
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> ps(nums.size() + 1);
        for (int i = 1; i < ps.size(); ++ i) {
            ps[i] = ps[i - 1] + nums[i - 1];
        }
        unordered_set<int> st;
        for (int i = 2; i < ps.size(); ++ i) {
            st.insert(ps[i - 2] % k);
            if (st.count(ps[i] % k)) {
                return true;
            }
        }
        return false;
    }
}; 

/**
 * 94 / 94 test cases passed.
 * Runtime: 164 ms
 * Memory Usage: 94.1 MB 
 */
class Solution2 {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if (nums.size() < 2) return false;
        unordered_map<int, int> mp;
        int remainder = 0;
        mp[0] = -1;
        for (int i = 0; i < nums.size(); ++ i) {
            remainder = (remainder + nums[i]) % k;
            if (mp.count(remainder)) {
                int prevIdx = mp[remainder];
                if (i - prevIdx >= 2) {
                    return true;
                }
            }
            else mp[remainder % k] = i;
        }
        return false;
    }
};
