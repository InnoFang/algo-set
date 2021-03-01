/**
 * 16 / 16 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 16.8 MB 
 */
class NumArray {
public:
    NumArray(vector<int>& nums) {
        prefixSum.push_back(0);
        for (int i = 0; i < nums.size(); ++ i) {
            prefixSum.push_back(prefixSum[i] + nums[i]);
        }

    }
    
    int sumRange(int i, int j) {
        return prefixSum[j + 1] - prefixSum[i];
    }
private:
    vector<int> prefixSum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
