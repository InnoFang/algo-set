/**
 * 60 / 60 test cases passed.
 * Runtime: 92 ms
 * Memory Usage: 57.6 MB 
 */
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int ans = 0;
        while (i < j) {
            int h = min(height[i], height[j]);
            int w = j - i;
            ans = max(ans, h * w);
            if (height[i] < height[j]) ++ i;
            else -- j;
        }
        return ans;
    }
};
