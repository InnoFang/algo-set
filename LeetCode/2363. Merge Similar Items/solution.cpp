/**
 * Runtime: 24 ms
 * Memory Usage: 16.6 MB 
 */
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> cnt;
        for (auto &item: items1) cnt[item[0]] += item[1];
        for (auto &item: items2) cnt[item[0]] += item[1];
        vector<vector<int>> ans;
        for (auto &[v, w]: cnt) ans.push_back({v, w});
        return ans;
    }
};
