/**
 * 43 / 43 test cases passed.
 * Runtime: 604 ms
 * Memory Usage: 8.8 MB 
 */
class Solution {
public:
    int n, m;
    vector<vector<int>> direct = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    vector<string> ans;
    
    void dfs(vector<vector<char>>& board, vector<vector<bool>>& visited, unordered_set<string>& word_set, string& word, int x, int y) {
        if (word.size() > 10) return; 
        if (word_set.count(word)) {
            ans.push_back(word);
            word_set.erase(word); 
        }

        for (auto& to: direct) {
            int newX = x + to[0], newY = y + to[1];
            if (0 <= newX && newX < n && 0 <= newY && newY < m) {
                if (visited[newX][newY]) continue;
                visited[newX][newY] = true;
                word.push_back(board[newX][newY]);
                dfs(board, visited, word_set, word, newX, newY);
                word.pop_back();
                visited[newX][newY] = false;
            }
        }
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        n = board.size(), m = board[0].size();
        unordered_set<string> word_set(words.begin(), words.end());
        vector<vector<bool>> visited(n, vector<bool>(m));  

        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j ++) {
                visited[i][j] = true;
                string word(1, board[i][j]);
                dfs(board, visited, word_set, word, i, j);
                visited[i][j] = false;
            }
        }
        
        return ans;
    }
};
