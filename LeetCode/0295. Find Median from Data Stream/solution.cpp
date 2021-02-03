/**
 * 18 / 18 test cases passed.
 * Status: Accepted
 * Runtime: 144 ms
 */
class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if (lo.size() >= hi.size()) {
            lo.push(num);
            hi.push(lo.top());
            lo.pop();
        } else {
            hi.push(num);
            lo.push(hi.top());
            hi.pop();
        }
    }
    
    double findMedian() {
       if (lo.size() > hi.size()) return lo.top();
       if (lo.size() < hi.size()) return hi.top();
       return (lo.top() + hi.top()) * 0.5;
    }
private:
    priority_queue<int> lo;
    priority_queue<int, vector<int>, greater<int>> hi;
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

