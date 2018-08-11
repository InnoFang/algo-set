// 113 / 113 test cases passed.
// Status: Accepted
// Runtime: 7 ms

class Solution {
public:
    int removeElement(vector<int>& nums, int val) { 
        int indices = nums.size() - 1;
        int len = 0;
        for (int i = 0; i <= indices; i++) {
            if (nums[i] != val) {
                nums[len++] = nums[i];
            }
        }
        return len;
    }
};