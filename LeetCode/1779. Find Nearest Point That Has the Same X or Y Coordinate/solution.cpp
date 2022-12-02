/**
 * Runtime: 156 ms
 * Memory Usage: 57.9 MB 
 */
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size();
        int best = INT_MAX, idx = -1;
        for (int i = 0; i < n; ++ i) {
            int px = points[i][0], py = points[i][1];
            if (x == px) {
                int d = abs(y - py);
                if (d < best) {
                    best = d;
                    idx = i;
                } 
            } else if (y == py) {
                int d = abs(x - px);
                if (d< best) {
                    best = d;
                    idx = i;
                }
            }
        }
        return idx;
    }
};
