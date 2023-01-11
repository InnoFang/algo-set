/**
 * Runtime: 4 ms
 * Memory Usage: 6.1 MB 
 */
class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> cnt;
        for (auto &n: num) cnt[n - '0']++;
        for (int i = 0; i < num.size(); ++ i) {
            if (cnt[i] != num[i] - '0') 
                return  false;
        }
        return true;
    }
};
