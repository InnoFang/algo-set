/**
 * 42 / 42 test cases passed.
 * Runtime: 416 ms
 * Memory Usage: 29.2 MB 
 */
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {    
        vector<int> xors(arr.size() + 1);
        for (int i = 0; i < arr.size(); ++ i) {
            xors[i + 1] = xors[i] ^ arr[i]; 
        }
        vector<int> ans;
        for (auto& query: queries) {
            ans.push_back(xors[query[0]] ^ xors[query[1] + 1]);
        }
        return ans;
    }
};
