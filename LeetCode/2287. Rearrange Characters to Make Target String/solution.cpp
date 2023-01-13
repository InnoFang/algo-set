/**
 * Runtime: 0 ms
 * Memory Usage: 6.2 MB 
 */
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> s_cnt, t_cnt;
        for (auto &c: s) s_cnt[c]++;
        for (auto &c: target) t_cnt[c]++;
        int ans = s.size();
        for (auto &[c, cnt]: t_cnt) {
            ans = min(ans, s_cnt[c] / cnt);
        }
        return ans;
    }
};
