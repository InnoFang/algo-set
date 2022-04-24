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

/**
 * 260 / 260 test cases passed
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution2 {
public:
    int binaryGap(int n) {
        int pre = -1, dist = 0;
        for ( int i = 0  ; n ; n >>= 1, ++ i ) {
            int bit = n & 1;
            if ( bit == 1 ) {
                if ( pre != -1 ) 
                    dist = max( dist, i - pre );
                pre = i;
            }
        }
        return dist;
    }
};


/**
 * 261 / 261 test cases passed
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB
 */
class Solution3 {
public:
    int binaryGap(int n) {
        int l = -1;
        int ans = 0;
        for (int r = 0, i = 1; r <= 30 && i <= n; ++ r, i <<= 1) {
            if ((n & i) == i) {
                if (l != -1) {
                    ans = max(ans, r - l);
                }
                l = r;
            }
        }
        return ans;
    }
};
