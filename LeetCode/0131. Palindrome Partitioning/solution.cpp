/**
 * 32 / 32 test cases passed.
 * Runtime: 288 ms
 * Memory Usage: 133.4 MB 
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

/**
 * 32 / 32 test cases passed.
 * Runtime: 224 ms
 * Memory Usage: 133.4 MB 
 */
class Solution2 {
public:
    vector<vector<bool>> dp;
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        dp.assign(s.size(), vector<bool>(s.size()));

        for (int i = 0; i < s.size(); ++ i) {
            for (int j = 0; j <= i; ++ j) {
                if (i == j) dp[j][i] = true;
                else if (i - j == 1) dp[j][i] = s[i] == s[j];
                else dp[j][i] = s[i] == s[j] && dp[j + 1][i - 1];
            }
        }

        dfs(s, 0, ans, {});
        return ans;
    }

    void dfs(const string& s, int start, vector<vector<string>>& ans, vector<string> path) {
        if (start == s.size()) {
            ans.push_back(path);
            return;
        }
        for (int i = start; i < s.size(); ++ i) {
            if (dp[start][i]) {
                path.push_back(s.substr(start, i - start + 1));
                dfs(s, i + 1, ans, path);
                path.pop_back();
            }
        }
    }
};