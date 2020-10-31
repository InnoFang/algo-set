/**
 * 53 / 53 test cases passed
 * Status: Accepted
 * Runtime: 8ms
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

