/**
 * 82 / 82 test cases passed.
 * Runtime: 132 ms
 * Memory Usage: 38.3 MB 
 */
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        unordered_map<int, unordered_set<int>> rec;

        for(auto& r : roads){
            rec[r[0]].insert(r[1]);
            rec[r[1]].insert(r[0]);
        }

        int ans = 0;
        for(int i = 0; i < n; ++i){
            for(int j = i+1; j < n; ++j){
                int sum = rec[i].size() + rec[j].size();
                if(rec[i].count(j))
                    sum -= 1;
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};
