#include <iostream>
#include <vector>

using namespace std;

/**
 * 17 / 17 test cases passed.
 * Status: Accepted
 * Runtime: 20 ms
 */
class Solution1 {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int i = 0; i < nums1.size(); ++ i) {
            for (int j = 0; j < nums2.size(); ++ j) {
                if (nums1[i] == nums2[j]) {
                    int k = j + 1;
                    for (; k < nums2.size(); ++ k) {
                        if (nums2[k] > nums1[i]) {
                            res.push_back(nums2[k]);
                            break;
                        }
                    }
                    if (k == nums2.size()) res.push_back(-1);
                    break;
                }
            }
        }
        return res;
    }
};

int main() {
    int n1[] = {4, 1, 2};
    int n2[] = {1, 3, 4, 2};
    vector<int> nums1(n1, n1 + 3);
    vector<int> nums2(n2, n2 + 4);
    vector<int> res = Solution1().nextGreaterElement(nums1, nums2);
    for (auto num: res) cout << num << " ";
    cout << endl;
    return 0;
}