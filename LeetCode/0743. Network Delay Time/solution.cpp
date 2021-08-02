/**
 * 52 / 52 test cases passed.
 * Runtime: 88 ms
 * Memory Usage: 36.6 MB 
 */
class Solution {
public:
    const int inf = INT_MAX >> 1;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<int>> adjMat(n + 1, vector<int>(n + 1, inf));
        for (const auto& time: times) {
            adjMat[time[0]][time[1]] = time[2];
        }

        vector<int> dist(n + 1, inf);
        vector<bool> visited(n + 1, false);
        dist[k] = 0;
        for (int i = 1; i <= n; ++ i) {
            int x = -1;
            for (int j = 1; j <= n; ++ j) {
                if (!visited[j] && (x == -1 || dist[j] < dist[x])) {
                    x = j;
                }
            }
            visited[x] = true;
            for (int j = 1; j <= n; ++ j) {
                if (!visited[j]) {
                    dist[j] = min(dist[j], dist[x] + adjMat[x][j]);
                }
            }
        }
        int ret = *max_element(dist.begin() + 1, dist.end());
        return ret == inf ? -1 : ret;
    }
};
