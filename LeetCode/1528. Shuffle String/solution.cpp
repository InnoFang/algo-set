/**
 * Runtime: 8 ms
 * Memory Usage: 14.7 MB 
 */
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        for (int i = 0; i < s.size(); ++ i) {
            while (i != indices[i]) {
                swap(s[i], s[indices[i]]);
                swap(indices[i], indices[indices[i]]);
            }
        }
        return s;
    }
};
