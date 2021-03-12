/**
 * 150 / 150 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.7 MB 
 */
class Solution {
public:
    bool isValidSerialization(string preorder) {
        int count = 0;
        int i = 0, n = preorder.size();
        while (i < n) {
            if (preorder[i] == ',') ++ i;
            else if (preorder[i] == '#') ++ i, -- count;
            else { 
                while (isdigit(preorder[i])) ++ i;
                ++ count;
            }
            if (count == -1 && i < n) break;
        }
        return count == -1 && i == n;
    }
}; 
