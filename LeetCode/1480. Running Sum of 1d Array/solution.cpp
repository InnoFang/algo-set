/**
 * 53 / 53 test cases passed
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans( nums.size() );
        for ( int i = 0, acc = 0; i < nums.size(); ++ i ) {
            acc += nums[i];
            ans[ i ] = acc;
        }
        return ans;
    }
};

/**
 * 53 / 53 test cases passed
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution2 {
public:
    vector<int> runningSum(vector<int>& nums) {
        int tmp = 0;
        for ( auto& num : nums ) {
            num += tmp;
            tmp = num;
        }
        return nums;
    }
};

