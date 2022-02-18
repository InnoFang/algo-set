/**
 * 60 / 60 test cases passed.
 * Runtime: 164 ms
 * Memory Usage: 65.6 MB 
 */
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int u = edges[0][0], v = edges[0][1];
        if (u == edges[1][0] || u == edges[1][1]) return u;
        return v;
    }
};
