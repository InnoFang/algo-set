/**
 * 167 / 167 test cases passed.
 * Runtime: 44 ms
 * Memory Usage: 15.2 MB 
 */
class Solution {
public:
    int maxProduct(vector<string>& words) {
        size_t n = words.size();
        vector<uint32_t> mask(n);
        for (size_t i = 0; i < n; i++) {
            for (auto &c : words[i]) {
                mask[i] |= (1 << (c - 'a'));
            }
        }
        size_t ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (!(mask[i] & mask[j])) {
                    ans = max(ans, words[i].size() * words[j].size());
                }
            }
        }
        return ans;
    }
};
