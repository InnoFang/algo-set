/**
 * 32 / 32 test cases passed.
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for ( int i = 0; i < s.size(); ++ i ) 
            if ( s.find( s[i] ) != t.find( t[i] ) ) 
                return false;
        return true;
    }
};

