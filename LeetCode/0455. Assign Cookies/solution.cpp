/**
 * 21 / 21 test cases passed.
 * Status: Accepted
 * Runtime: 80 ms
 */
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0;
        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j]) i++;
            j++;
        }
        return i;
    }
};
