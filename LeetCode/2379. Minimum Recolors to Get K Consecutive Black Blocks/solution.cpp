/** 
 * Runtime: 4 ms
 * Memory Usage: 6.1 MB 
 */
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0, tmp = 0;
        while (i < k) {
            tmp += blocks[i++] == 'W';
        }
        int ans = tmp;
        for (; i < blocks.size() ; ++ i) {
            tmp += blocks[i] == 'W';
            tmp -= blocks[i - k] == 'W';
            ans = min(ans, tmp);
        }
        return ans;
    }
};
