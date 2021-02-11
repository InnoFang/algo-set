#include <queue>
/**
 * 10 / 10 test cases passed.
 * Status: Accepted
 * Runtime: 44 ms
 */
class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < k - 1; ++ i) {
            minHeap.push(nums[i]); 
        } 
        for (int i = k - 1; i < nums.size(); ++ i) {
            maxHeap.push(nums[i]); 
        } 
    }
    
    int add(int val) {
        /*
            两个堆/优先队列
            一个是k - 1个数的小顶堆，一个是大顶堆
            每次添加先进大顶堆，然后从大顶堆中取一个数，放到小顶堆，再从小顶堆取一个数放到大顶堆
            第k大的数是大顶堆的top
        */ 
        maxHeap.push(val);
        minHeap.push(this->maxHeap.top());  maxHeap.pop();
        maxHeap.push(this->minHeap.top());  minHeap.pop();
        return maxHeap.top();
    }
private:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int, vector<int>, less<int>> maxHeap;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
