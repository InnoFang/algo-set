/**
 * 1157 / 1157 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 49.3 MB 
 */
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size(), r = numRows;
        if (r == 1 || r >= n) return s;

        vector<string> mat(r);
        for (int i = 0, x = 0, period = r * 2 - 2; i < n; ++ i) {
            mat[x] += s[i];
            i % period < r - 1 ? ++ x : -- x;
        }
        return accumulate(mat.begin(), mat.end(), string(""));
    }
};
