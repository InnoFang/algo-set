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