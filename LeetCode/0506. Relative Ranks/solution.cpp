/**
 * 17 / 17 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 11.7 MB 
 */
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> c_score(score.begin(), score.end());
        sort(c_score.begin(), c_score.end(), greater<int>());
        unordered_map<int, int> rank;
        for (int i = 0; i < c_score.size(); ++i) {
            rank[c_score[i]] = i;
        }
        vector<string> ans;
        for (auto &s : score) {
            if (rank[s] == 0) ans.emplace_back("Gold Medal");
            else if (rank[s] == 1) ans.emplace_back("Silver Medal");
            else if (rank[s] == 2) ans.emplace_back("Bronze Medal");
            else ans.emplace_back(to_string(rank[s] + 1));
        }
        return ans;
    }
};
