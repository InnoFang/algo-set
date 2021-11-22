/**
 * 10 / 10 test cases passed.
 * Runtime: 92 ms
 * Memory Usage: 87.9 MB 
 */
class Solution {
public:
    Solution(vector<int>& nums)
        : nums_(nums), origin_(nums) {}
    
    vector<int> reset() {
        return origin_;
    }
    
    vector<int> shuffle() {
        int sz = nums_.size();
        for (int i = 0; i < nums_.size(); ++i) {
            int j = i + (rand()) % (sz - i);
            swap(nums_[i], nums_[j]);
        }
        return nums_;
    }
private:
    vector<int> nums_;
    vector<int> origin_;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
