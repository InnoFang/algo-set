/**
 * 76 / 76 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 64.7 MB 
 */
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> min_arr(n);
        min_arr[0] = nums[0];
        for (int i = 1; i < n; ++ i) {
           min_arr[i] = min(min_arr[i - 1], nums[i]);
        }

        vector<int> max_arr(n);
        max_arr[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; -- i) {
            max_arr[i] = max(max_arr[i + 1], nums[i]);
        }

        for (int i = 0; i < n; ++ i) {
            if (nums[i] > min_arr[i] && nums[i] < max_arr[i]) {
                return true;
            }
        }
        return false;
    }
};

/**
 * 76 / 76 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 60.1 MB 
 */
class Solution2 {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int first = nums[0], second = INT_MAX;
        for (int i = 1; i < n; ++ i) {
            int num = nums[i];
            if (num > second) return true;
            if (num > first) second = num;
            else first = num;
        }
        return false;
    }
};
