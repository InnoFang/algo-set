/**
 * 63 / 63 test cases passed.
 * Runtime: 180 ms
 * Memory Usage: 99.9 MB 
 */
class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int first = 0;
        for (int i = 0; i <= encoded.size(); ++ i) {
            first ^= i + 1;
            if (i & 1) first ^= encoded[i];
        }
        vector<int> ans = { first };
        for (auto& num: encoded) {
            ans.push_back( ans.back() ^ num );
        }
        return ans;
    }
};
