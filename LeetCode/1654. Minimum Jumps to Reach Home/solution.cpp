/**
 * 95 / 95 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 14.3 MB 
 */
//https://leetcode-cn.com/problems/minimum-jumps-to-reach-home/solution/dao-jia-de-zui-shao-tiao-yue-ci-shu-zui-duan-lu-zh/
class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b,  int x) {
        int F = *max_element(forbidden.begin(), forbidden.end());
        int bound = max(F + a + b, x + b);  

        unordered_set<int> ban(forbidden.begin(), forbidden.end());
        int dist[bound + 1][2];
        memset(dist, 0x3f, sizeof(dist));
        dist[0][0] = 0;
        // direction: 0: forward
        //            1: backward
        queue<pair<int, int>> que( {{0, 0}} ); // <current, direction>
        while (!que.empty()) {
            auto [curr, direct] = que.front(); que.pop();
            if (curr == x) return dist[curr][direct];
            int next = curr + a;
            if (next <= bound && !ban.count(next) && dist[curr][direct] + 1 < dist[next][0]) {
                dist[next][0] = dist[curr][direct] + 1;
                que.emplace(next, 0);
            }
            if (direct != 1) {
                next = curr - b;
                if (next >= 0 && !ban.count(next) && dist[curr][direct] + 1 < dist[next][1]) {
                    dist[next][1] = dist[curr][direct] + 1;
                    que.emplace(next, 1);
                }
            }
        }
        return -1;
    }
};
