/**
 * 113 / 113 test cases passed.
 * Status: Accepted
 * Runtime: 22 ms
 */
class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int len = M.size();
        group = len;
        for (int i = 0; i < len; i++) {
            rank.push_back(1);
            list.push_back(i);
        }
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (M[i][j]) {
                    _union(i, j);
                }
            }
        }
        return group;
    }
private:
    vector<int> list;
    vector<int> rank;
    int group;

    int find(int p) {
        while (p != list[p]){
            p = list[p] = list[list[p]];
        }
        return p;
    }

    void _union(int p, int q) {
        int x = find(p);
        int y = find(q);
        if (x == y) return;
        if (rank[x] < rank[y]) list[x] = y;
        else {
            list[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
        group--;
    }
};

/**
 * 113 / 113 test cases passed.
 * Status: Accepted
 * Runtime: 12 ms
 */
class Solution2 {
public:
    void dfs(vector<vector<int>> &isConnected, vector<bool> &used, int provinces, int i) {
        for (int j = 0; j < provinces; ++ j) {
            if (isConnected[i][j] && !used[j]) {
                used[j] = true;
                dfs(isConnected, used, provinces, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int provinces = isConnected.size();
        vector<bool> used(provinces);
        for (int i = 0; i < provinces; ++ i) {
            if (!used[i]) {
                dfs(isConnected, used, provinces, i);
                ++ ans;
            }
        }
        return ans;
    }
};
