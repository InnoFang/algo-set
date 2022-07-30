/**
 * 38 / 38 test cases passed.
 * Runtime: 76 ms
 * Memory Usage: 38.2 MB 
 */
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> origin = arr;
        sort(arr.begin(), arr.end());
        unordered_map<int, int> rec;
        vector<int> ans(arr.size());
        for (auto &val : arr) {
            if (!rec.count(val)) {
                rec[val] = rec.size() + 1;
            }
        }
        for (int i = 0; i < ans.size(); ++ i) {
            ans[i] = rec[origin[i]];
        }
        return ans;
    }
};
