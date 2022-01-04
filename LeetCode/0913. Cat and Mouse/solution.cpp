/**
 * 52 / 52 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 9.3 MB 
 */
class Solution {
private:
    static const int __draw = 0;
    static const int __mouse_win = 1;
    static const int __cat_win = 2;
    static const int __maxn = 51;

private:
    vector<vector<int>> graph_;
    int dp_[__maxn][__maxn][__maxn * 2];
    int size_;

public:
    int catMouseGame(vector<vector<int>>& graph) {
        graph_ = graph;
        size_ = graph.size();
        memset(dp_, -1, sizeof(dp_));
        // init state: mouse at 1, cat at 2, hole locate at 0
        return play(1, 2, 0); 
    }

    int play(int mouse, int cat, int turns) {
        if (turns >= size_ * 2) return __draw;

        // the where haven't been reached
        if (dp_[mouse][cat][turns] < 0) {
            if (mouse == 0) { // the mouse reach the hole, mouse win
                dp_[mouse][cat][turns] = __mouse_win;
            } else if (mouse == cat) { // the cat catched the mouse, cat win
                dp_[mouse][cat][turns] = __cat_win;
            } else { // continue to next round
                nextRound(mouse, cat, turns);
            }
        }
        return dp_[mouse][cat][turns];
    }

    int nextRound(int mouse, int cat, int turns) { 
        // for even round, it's mouse turn, get mouse's location, otherwise get cat's location
        int curr_location = turns & 1 ? cat : mouse;

        int defalut_result = curr_location == mouse ? __cat_win : __mouse_win;
        int result = defalut_result;
        for (auto &next : graph_[curr_location]) {
            // cat cannot reach the hole
            if (curr_location == cat && next == 0) continue;

            int next_mouse_locate = curr_location == mouse ? next : mouse;
            int next_cat_locate = curr_location == cat ? next : cat;
            int next_result = play(next_mouse_locate, next_cat_locate, turns + 1);
            if (next_result != defalut_result) {
                result = next_result;
                // for this round, if judge mouse must win or lose, there is no need to continue, so break this round
                if (result != __draw) {
                    break;
                }
            }
        }
        return dp_[mouse][cat][turns] = result;
    }
};
