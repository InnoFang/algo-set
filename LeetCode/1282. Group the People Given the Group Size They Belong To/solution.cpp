/**
 * 103 / 103 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 15.1 MB 
 */
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<vector<int>>> rec;
        for (int i = 0; i < groupSizes.size(); ++ i) {
            int gs = groupSizes[i];
            if (!rec.count(gs) || rec[gs].back().size() == gs) {
                rec[gs].push_back({i});
            } else {
                rec[gs].back().emplace_back(i);
            }
        }
        vector<vector<int>> ans;
        for (auto [_, vals] : rec) {
            for (auto val : vals) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};
