/**
 * 277 / 277 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 13.6 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void dfs(vector<vector<int>> &image, int x, int y, int oldColor, int newColor) {
        image[x][y] = newColor;
        for (auto &d : direct) {
            int xx = x + d[0];
            int yy = y + d[1];
            if (xx < 0 || xx >= image.size() || yy < 0 || yy >= image[0].size()) continue;
            if (image[xx][yy] != oldColor) continue;
            dfs(image, xx, yy, oldColor, newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        if (oldColor != newColor) {
            dfs(image, sr, sc, oldColor, newColor);
        }
        return image;
    }
};
