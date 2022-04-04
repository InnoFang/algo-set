/**
 * 150 / 150 test cases passed.
 * Runtime: 236 ms
 * Memory Usage: 57.3 MB 
 */
class Solution {
public:
    map<char, int, greater<char>> rec;
    void dfs(pair<char, int> &curr, vector<char> &ans, int repeatLimit) {
        if (rec[curr.first] == 0) {
            rec.erase(curr.first);
            curr.second = 0;
        }
        if (!rec.count(curr.first) || (rec.size() > 0 && curr.first != rec.begin()->first) || curr.second == repeatLimit) {
            auto front = rec.begin();
            while (front != rec.end() && front->first == curr.first) {
               ++front; 
            }
            if (front == rec.end()) return;
            curr = make_pair(front->first, 0);
        } 
        curr.second += 1;
        rec[curr.first] -= 1;
        ans.push_back(curr.first);
        dfs(curr, ans, repeatLimit);
    }
    string repeatLimitedString(string s, int repeatLimit) {
        for (auto &c : s) { rec[c] += 1; }
        
        vector<char> ans;
        auto front = rec.begin();
        pair<char, int> curr = make_pair(front->first, 0);
        dfs(curr, ans, repeatLimit);
        return string(ans.begin(), ans.end());
    }
};
