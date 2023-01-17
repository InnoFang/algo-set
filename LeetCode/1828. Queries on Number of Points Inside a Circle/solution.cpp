/**
 * Runtime: 84 ms
 * Memory Usage: 15.8 MB 
 */
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for (auto &query: queries) {
            int x = query[0], y = query[1], r = query[2];
            int cnt = 0;
            for (auto &point: points) {  
                int i = point[0], j = point[1];
                if ((x - i) * (x - i) + (y - j) * (y - j) <= r * r) {
                    ++ cnt;
                }
            }
            ans.push_back(cnt);
        }
        return ans;        
    }
};
