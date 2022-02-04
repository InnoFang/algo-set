/**
 * 68 / 68 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 17.9 MB 
 */
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int, int> cnt;
        int maxLen = 0;
        for (auto &rect: rectangles) {
            int len = min(rect[0], rect[1]);
            cnt[len] += 1;
            maxLen = max(maxLen, len);
        }
        return cnt[maxLen];
    }
};
