/**
 * 14 / 14 test cases passed.
 * Runtime: 104 ms
 * Memory Usage: 25 MB 
 */
class Solution {
public:
    Solution(vector<int>& nums) : _nums(nums) {} 

    int pick(int target) {
        int ans = 0, cnt = 0;
        for (int i = 0; i < _nums.size(); ++ i) {
            if (_nums[i] == target) {
                ++ cnt;
                if (rand() % cnt == 0) {
                    ans = i;
                }
            }
        }
        return ans;
    }
private:
    vector<int> _nums;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
