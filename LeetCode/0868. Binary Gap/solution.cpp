/**
 * 260 / 260 test cases passed
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
public:
    int binaryGap(int n) {
        vector<int> bits;
        for (  ; n ; n >>= 1 )
            bits.push_back( n & 1 );
        
        int pre = -1;
        int dist = 0;
        for ( int i = i; i < bits.size(); ++ i ) {
            if ( bits[i] == 1 && pre == -1 ) {
                pre = i;
            } else if ( bits[i] == 1 && bits[pre] == 1 ) {
                dist = max( dist, i - pre );
                pre = i;
            }
        }
        
        return dist;
    }
};

