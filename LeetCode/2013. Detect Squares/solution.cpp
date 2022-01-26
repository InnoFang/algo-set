/**
 * 54 / 54 test cases passed.
 * Runtime: 264 ms
 * Memory Usage: 91.7 MB 
 */
class DetectSquares {
private:
    unordered_map<int, unordered_map<int, int>> point_count_;
public:
    DetectSquares() { }
    
    void add(vector<int> point) {
        int x = point[0], y = point[1];
        ++ point_count_[x][y];
    }
    
    int count(vector<int> point) {
        int x0 = point[0], y0 = point[1];
        if (!point_count_.count(x0)) return 0;

        int cnt = 0;
        for (auto &[y1, y_cnt]: point_count_[x0]) {
            if (y1 != y0) {
                int x1 = x0;
                int len = abs(y0 - y1);
                cnt +=  y_cnt * (point_count_[x0 + len][y1] * point_count_[x0 + len][y0]
                              +  point_count_[x0 - len][y1] * point_count_[x0 - len][y0]);
            }
        }
        return cnt;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */