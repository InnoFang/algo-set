/**
 * 987 / 987 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 10.6 MB 
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, ans = 0;
        unordered_set<char> us;
        for (int r = 0; r < s.size(); ++ r) {
            if (!us.count(s[r])) {
                ans = max(ans, r - l + 1);
            }
            while (us.count(s[r])) {
                us.erase(s[l++]);
            } 
            us.insert(s[r]);
        }
        return ans;
    }
};
