/**
 * 320 / 320 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 14.1 MB 
 */
class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        if (len <= 2) return 0;
        
        vector<int> leftHeight(len, *height.begin());
        vector<int> rightHeight(len, height.back());
        for (int i = 1; i < len; ++ i) {
            leftHeight[i] = max(leftHeight[i - 1], height[i]);
            rightHeight[len - i - 1] = max(rightHeight[len - i], height[len - i - 1]);
        }
        int ans = 0;
        for (int i = 1; i < len - 1; ++ i) {
            ans += min(leftHeight[i], rightHeight[i]) - height[i];
        }
        return ans;
    }
};

/**
 * 320 / 320 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 13.7 MB 
 */
class Solution2 {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        if (len <= 2) return 0;
        
        int ans = 0;
        int black = accumulate(height.begin(), height.end(), 0);
        int area = 0;
        for (int l = 0, r = len - 1, hi = 1; l <= r;) {
            while (l <= r && height[l] < hi) ++ l;
            while (l <= r && height[r] < hi) -- r;
            ++ hi;
            area += r - l + 1;
        }
        return area - black;
    }
};
