/**
 * 66 / 66 test cases passed.
 * Runtime: 212 ms
 * Memory Usage: 91.4 MB 
 */
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> hasIndegree(n);
        for (auto &edge : edges) {
            hasIndegree[edge[1]] = true;
        }
        vector<int> ans;
        for (int i = 0; i < n; ++ i) {
            if (!hasIndegree[i]) {
                ans.emplace_back(i);
            }
        }
        return ans;
    }
};
