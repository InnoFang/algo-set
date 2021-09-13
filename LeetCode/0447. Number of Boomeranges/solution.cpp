/**
 * 32 / 32 test cases passed.
 * Runtime: 476 ms
 * Memory Usage: 121.2 MB 
 */
class Solution {
public:
    int distance(const vector<int>& p1, const vector<int>& p2) {
        return pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2);
    }
    int numberOfBoomerangs(vector<vector<int>>& points) { 
        int ans = 0;
        for (const vector<int>& p: points) {
            unordered_map<int, int> countit;
            for (const vector<int>& q: points) { 
                int dist = distance(p, q);
                countit[dist]++;
            }
            for (auto& [_, val]: countit) {
                ans += val * (val - 1);
            }
        }
        return ans;
    }
};
