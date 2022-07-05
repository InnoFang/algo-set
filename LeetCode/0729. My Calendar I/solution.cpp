/**
 * 107 / 107 test cases passed.
 * Runtime: 72 ms
 * Memory Usage: 37.7 MB 
 */
class MyCalendar {
public:
    MyCalendar() = default;
    
    bool book(int start, int end) {
        auto it = _booked.lower_bound({end, 0});
        if (it == _booked.begin() || (--it)->second <= start) {
            _booked.emplace(start, end);
            return true;
        }
        return false;
    }
    
private:
    set<pair<int, int>> _booked;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
