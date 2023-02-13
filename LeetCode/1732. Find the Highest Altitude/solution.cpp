/**
 * Runtime: 4 ms
 * Memory Usage: 7.7 MB 
 */
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0, pre = 0;
        for (int i = 0; i < gain.size(); ++ i) {
            ans = max(ans, pre + gain[i]);
            pre += gain[i];
        }
        return ans;
    }
};
