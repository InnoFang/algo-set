/**
 * 72 / 72 test cases passed.
 * Status: Accepted
 * Runtime: 712 ms
 */
 struct Edge {
    int i, j, dist;
    Edge(int i, int j, int dist): i(i), j(j), dist(dist) {}
};

class Solution {
public:
    int find(int p) {
        while (p != parent[p]) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

    bool union_(int p, int q) {
        int fp = find(p), fq = find(q);
        if (fp == fq) return false;
        if (rank[fp] < rank[fq]) swap(fp, fq);
        rank[fp] += rank[fq];
        parent[fq] = fp;
        return true;
    }

    int distance(vector<int>& i, vector<int>& j) {
        return abs(i[0] - j[0]) + abs(i[1] - j[1]);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();

        rank.resize(n, 1);
        parent.resize(n);
        for(int i = 0; i < n; ++ i) parent[i] = i;

        vector<Edge> edges;
        for(int i = 0; i < n; ++ i) {
            for (int j = i + 1; j < n; ++ j) {
                Edge e( i, j, distance(points[i], points[j]) );
                edges.push_back( e );
            }
        }
        sort(edges.begin(), edges.end(), [](const Edge& e1, const Edge& e2) {
            return e1.dist < e2.dist;
        });
        int ans = 0, num = 0;
        for (auto& edge: edges) {
            if ( union_(edge.i, edge.j) ) {
                ans += edge.dist;
                num ++;
                if (num == n) break;
            }
        }
        return ans;
    }
private:
    vector<int> rank, parent;
    int n;
};
