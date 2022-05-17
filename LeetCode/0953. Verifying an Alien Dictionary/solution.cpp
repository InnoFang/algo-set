/**
 * 120 / 120 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 9.5 MB 
 */
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> index;
        for (int i = 0; i < order.size(); ++ i) {
            index[order[i]] = i;
        }
        for (int i = 1; i < words.size(); ++ i) {
            bool valid = false;
            for (int j = 0; j < words[i - 1].size() && j < words[i].size(); ++ j) {
                int prev = index[words[i - 1][j]];
                int curr = index[words[i][j]];
                if (prev > curr) return false;
                if (prev < curr) {
                    valid = true;
                    break;
                }
            }
            if (!valid && words[i - 1].size() > words[i].size()) return false;
        }
        return true;
    }
};
