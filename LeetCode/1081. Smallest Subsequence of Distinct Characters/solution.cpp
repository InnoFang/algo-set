/**
 * 67 / 67 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
#define i(c) ( c - 'a' )

class Solution {
public:
    string smallestSubsequence(string s) {
        int occured[26] = { 0 };
        int visited[26] = { 0 };
        
        for ( auto& c : s ) occured[ i(c) ] ++ ;

        string ans;
        for ( auto& c : s ) {
            occured[ i(c) ] -- ;
            if ( !visited[ i(c) ] ) {
                while ( !ans.empty() && ans.back() > c && occured[ i(ans.back()) ] > 0 ) {
                    visited[ i(ans.back()) ] = 0;
                    ans.pop_back();
                }
                visited[ i(c) ] = 1;
                ans.push_back( c );
            }
        }
        return ans;
    }
};

