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
 * 9 / 9 test cases passed.
 * Runtime: 44 ms
 * Memory Usage: 32.7 MB 
 */
class SummaryRanges2 {
public:
    SummaryRanges() { }
    void addNum(int val) {
        auto up = interval.upper_bound(val);
        auto down = (up == interval.begin() ? interval.end() : prev(up));

        if (down != interval.end() && (down->first <= val && val <= down->second)) {

        } else if (down != interval.end() && down->second + 1 == val && val + 1 == up->first) {
            int l = down->first, r = up->second;
            interval.erase(down->first);
            interval.erase(up->first);
            interval.emplace(l, r);
        } else if (down != interval.end() && down->second + 1 == val) {
            int l = down->first, r = val;
            interval.erase(down->first);
            interval.emplace(l, r);
        } else if (up != interval.end() && val + 1 == up->first) {
            int l = val, r = up->second;
            interval.erase(up->first);
            interval.emplace(l, r);
        } else {
            interval.emplace(val, val);
        }
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> ret;
        for (auto &[l, r]: interval) {
            ret.push_back({l, r});
        }
        return ret;
    }

private:
    map<int, int> interval;
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(val);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */
