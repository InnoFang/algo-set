/**
 * 80 / 80 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 13 MB 
 */
class Solution {
public:
    // 返回第 i 个点染 c 色能否成功
    bool dfs(const vector<vector<int>> &g, int i, int c, vector<int> &v) {      
        // 第i个点已染过
        if (v[i] != -1) return v[i] == c;                                       
        // 对第i个点染上 c 色
        v[i] = c;
        for (int j : g[i]) {
            if (!dfs(g, j, !c, v)) {
                // 递归相邻的点，c => !c 换色   
                return false;                 
            } 
        } 
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        const int n = graph.size();
        vector<int> v(n, -1);                                                   
        for (int i = 0; i < n; i++) {
            // -1 表示待染色
            if (v[i] == -1 && !dfs(graph, i, 0, v)) 
                return false;   
        }
        return true;
    }
};
