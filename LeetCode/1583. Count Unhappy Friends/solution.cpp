/**
 * 99 / 99 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 24.9 MB 
 */
class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
         vector<vector<int>> importence(n, vector<int>(n));
         vector<int> mapper(n);
         for (int i = 0, imp = n; i < n; ++ i) {
             for (const auto& pref: preferences[i]) {
                 importence[i][pref] = imp --;
             }
         }
         for (const auto& pair: pairs) {
             int x = pair[0], y = pair[1];
             mapper[x] = y;
             mapper[y] = x;
         }
         int ans = 0;
         for (int x = 0; x < n; ++ x) {
             int y = mapper[x];
             for (int u = 0; u < n; ++ u) {
                 if (x != u && y != u) {
                     int v = mapper[u];
                     if (importence[x][u] > importence[x][y] && 
                         importence[u][x] > importence[u][v]) {
                             ans ++;
                             break;
                         }
                 }
             }
         }
         return ans;
    }
};
