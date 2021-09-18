/**
 * 507 / 507 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 17.6 MB 
 */
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[10][10] = { false };
        bool col[10][10] = { false };
        bool blk[10][10] = { false };
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if ('.' == c) continue;
                int num = c - '0';
                int blk_idx = i / 3 * 3 + j / 3;
                if (row[i][num] || col[j][num] || blk[blk_idx][num]) return false;
                row[i][num] = col[j][num] = blk[blk_idx][num] = true;
            }
        }
        return true;
    }
};
