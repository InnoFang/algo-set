/**
 * 34 / 34 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 9.7 MB 
 */
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n;
        int ans = 0;
        for (int i = 0; i < n - 1; ++ i) {
            if (ans > n / 2) return ans;
            
            unordered_map<string, int> cnt;
            int xi = points[i][0];
            int yi = points[i][1];
            for (int j = i + 1; j < n; ++ j) {
                int dx = points[j][0] - xi;
                int dy = points[j][1] - yi;
                if (dx == 0) {
                    dy = 1;
                } else if (dy == 0) {
                    dx = 1; 
                } else {
                    if (dy < 0) {
                        dx = -dx;
                        dy = -dy;
                    }
                    int g = __gcd(abs(dy), abs(dx));
                    dx /= g;
                    dy /= g;
                }
                string key = to_string(dy)+"/"+to_string(dx);
                cnt[key] += 1;
                ans = max(ans, cnt[key] + 1);
            }
        }
        return ans;
    }
};
