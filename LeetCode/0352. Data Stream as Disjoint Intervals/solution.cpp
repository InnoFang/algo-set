/**
 * 9 / 9 test cases passed.
 * Runtime: 64 ms
 * Memory Usage: 32.4 MB 
 */
class SummaryRanges {
private:
    using pii = pair<int, int>;

public:
    SummaryRanges() {

    }
    
    void addNum(int val) {
        min_heap_.emplace(val, val);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> ret;
        pii temp = min_heap_.top(); min_heap_.pop();
        ret.push_back({temp.first, temp.second});
        while (!min_heap_.empty()) {
            temp = min_heap_.top(); min_heap_.pop();
            if (ret.back()[1] + 1 == temp.first || 
                ret.back()[1] >= temp.first && ret.back()[1] <= temp.second) {
                    ret.back()[1] = temp.second;
                } else if (ret.back()[1] + 1 < temp.first){
                    ret.push_back({temp.first, temp.second});
                }
        }
        for (auto& range: ret) {
            min_heap_.emplace(range[0], range[1]);
        }
        return ret;
    }
private:
    priority_queue<pii, vector<pii>, greater<pii>> min_heap_;
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(val);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */
