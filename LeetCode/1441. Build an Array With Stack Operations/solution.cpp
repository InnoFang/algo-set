/**
 * Runtime: 4 ms
 * Memory Usage: 7.6 MB 
 */
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        ans.reserve(n << 1);
        int prv = 0;
        for (auto &num : target) {
            for (int i = 0; i < num - prv - 1; ++ i) {
                ans.emplace_back("Push");
                ans.emplace_back("Pop");
            }
            ans.emplace_back("Push");
            prv = num;
        }
        return ans;
    }
};
