/**
 * 43 / 43 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 16.8 MB 
 */
class Solution {
public:
    string pushDominoes(string dominoes) {
        dominoes = "L" + dominoes + "R";
        int l = 0;
        string ans = "";
        for (int r = 1; r < dominoes.size(); ++ r) {
            if (dominoes[r] == '.') continue;
            if (l != 0) ans += dominoes[l];
            int mid = r - l - 1;
            if (dominoes[l] == dominoes[r]) ans += string(mid, dominoes[l]);
            else if (dominoes[l] == 'L' && dominoes[r] == 'R') ans += string(mid, '.');
            else ans += string(mid / 2, 'R') + (mid % 2 ? "." : "") + string(mid / 2, 'L');
            l = r;
        }
        return ans;
    }
};
