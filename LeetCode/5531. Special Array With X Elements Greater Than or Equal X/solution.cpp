class Solution {
public:
    int specialArray(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        sort(nums.begin(), nums.end(), greater<int>());
        int cnt = 0, i = 0;
        for (; i < nums.size(); ++i) {
            if (nums[i] >= i + 1) {
                ++cnt;
            } else if (nums[i] >= cnt) {
                return -1;
            } else {
                break;
            }
        }
        if (cnt == i) return cnt;
        return -1;
    }
};

