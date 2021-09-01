/**
 * 81 / 81 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.2 MB 
 */
class Solution {
public:
    int compareVersion(string version1, string version2) {
        auto convert = [](string& version) {
            istringstream iss(version);
            vector<int> sub_verions;
            string v;
            while (getline(iss, v, '.')) {
                sub_verions.push_back(stoi(v));
            }
            return sub_verions;
        };
        auto verNum1 = convert(version1);
        auto verNum2 = convert(version2);
        int n = max(verNum1.size(), verNum2.size());
        for (int i = 0; i < n; ++ i) {
            int v1 = (i >= verNum1.size()) ? 0 : verNum1[i];
            int v2 = (i >= verNum2.size()) ? 0 : verNum2[i];
            if (v1 > v2) return 1;
            else if (v1 < v2) return -1;
        }        
        return 0;
    }
};
