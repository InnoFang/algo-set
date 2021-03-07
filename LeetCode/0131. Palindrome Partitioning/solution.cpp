/**
 * 48 / 48 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 50.2 MB 
 */
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        dfs(s, ans, {});
        return ans;
    }

    void dfs(string s, vector<vector<string>>& ans, vector<string> path) {
        if (s.empty()) {
            ans.push_back(path);
            return;
        }
        for (int i = 1; i <= s.size(); ++ i) {
            string sub = s.substr(0, i);
            if (isPalindrome(sub)) {
                path.push_back(sub);
                dfs(s.substr(i), ans, path);
                path.pop_back();
            }
        }
    }

    bool isPalindrome(string s) {
        for (int i = 0, j = s.size() - 1; i <= j; ++ i, -- j) {
            if (s[i] != s[j])
                return false;
        }
        return true;
    }
};
