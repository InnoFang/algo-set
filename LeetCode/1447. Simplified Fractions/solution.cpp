/**
 * 100 / 100 test cases passed.
 * Runtime: 88 ms
 * Memory Usage: 28.9 MB 
 */
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        unordered_set<double> record;
        vector<string> ans;
        for (int i = 1; i <= n - 1; ++ i) {
            for (int j = i + 1; j <= n; ++ j) { 
                double val = (i * 1.0 / j);
                if (record.count(val)) continue; 
                ans.push_back(to_string(i) + "/" + to_string(j)); 
                record.insert(val);
            }
        }
        return ans;
    }
};
