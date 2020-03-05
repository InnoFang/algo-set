/**
 * 39 / 39 test cases passed.
 * Status: Accepted
 * Runtime: 7 ms
 */

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        for (int i = 0, len = 2 * edges.size(); i < len; i++) {
            store[i] = i;
            ranks[i] = 1;
        }
        for (auto edge: edges) {
            if (!_union(edge[0], edge[1])) return edge;
        }
        return vector<int>(2);
    }
private:
    int store[2002];
    int ranks[2002];

    int find(int p) {
        while (p != store[p]) p = store[p] = store[store[p]];
        return p;
    }

    bool _union(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP == rootQ) return false;
        if (ranks[rootP] < ranks[rootQ]) store[rootP] = rootQ;
        else {
            store[rootQ] = rootP;
            if (ranks[rootQ] == ranks[rootP]) ranks[rootQ]++;
        }
        return true;
    }
};