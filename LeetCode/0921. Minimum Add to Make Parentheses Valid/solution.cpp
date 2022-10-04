/**
 * 115 / 115 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0, cnt = 0;
        for (auto &c : s) {
            if (c == '(') ++ cnt;
            else if (cnt > 0) -- cnt;
            else ++ ans;
        }
        return ans + cnt;
    }
};
