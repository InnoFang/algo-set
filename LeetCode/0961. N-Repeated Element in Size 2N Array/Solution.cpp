#include <unordered_map>
using namespace std;

/**
 * Status: Accepted
 * Runtime: 32ms
 */
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> dict;
        int ret = -1;
        for (int a : A) {
            if (dict.find(a) != dict.end()) {   
                ret = a;
                break;
            }
            else dict[a] = 1;
        }
        return ret;
    }
};  

/**
 * 102 / 102 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 24.2 MB 
 */
class Solution2 {
public:
    int arr[10010] = { 0 };
    int repeatedNTimes(vector<int>& nums) {
        for (auto &num : nums) {
            if (++ arr[num] > 1) {
                return num;
            }
        }
        return -1;
    }
};
