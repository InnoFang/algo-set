/**
 * 333 / 333 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.6 MB 
 */
class Solution {
public:
    int maxPower(string s) {
        int ans = 1, length = 1;
        for(int l = 0, r = 1; r < s.size(); ++r) {
            if (s[r] == s[l]) {
                ++ length;
            } else {
                ans = max(ans, length);
                l = r;
                length = 1;
            }
        }
        ans = max(ans, length);
        return ans;
    }
};

/**
 * 333 / 333 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.6 MB 
 */
class Solution2 {
public:
    int maxPower(string s) {
        int ans = 1, length = 1;
        for(int r = 1; r < s.size(); ++r) {
            if (s[r] == s[r - 1]) {
                ++ length;                
                ans = max(ans, length);
            } else { 
                length = 1;
            }
        } 
        return ans;
    }
};
