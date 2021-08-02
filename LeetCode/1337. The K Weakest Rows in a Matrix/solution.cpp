/**
 * 52 / 52 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 10.2 MB 
 */
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        using pii = pair<int, int>;
        priority_queue<pii, vector<pii>, std::greater<pii>> pq;
        for (int i = 0; i < mat.size(); ++ i) {
            int solders = 0;
            for (int j = 0; j < mat[0].size(); ++ j ) {
                if (mat[i][j] == 1) ++ solders;
                else break;
            }
            pq.emplace(solders, i);
        }
        vector<int> ans(k);
        for (int i = 0; i < k; ++ i) {
            ans[i] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
