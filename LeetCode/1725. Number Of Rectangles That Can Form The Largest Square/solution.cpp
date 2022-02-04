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

/**
 * 68 / 68 test cases passed.
 * Runtime: 44 ms
 * Memory Usage: 17.9 MB 
 */
class Solution2 {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) { 
        int maxLen = 0, ans = 0;
        for (auto &rect: rectangles) {
            int len = min(rect[0], rect[1]);
            if (len > maxLen) {
                maxLen = len;
                ans = 1;
            } else if (len == maxLen) {
                ++ ans;
            }
        }
        return ans;
    }
};
