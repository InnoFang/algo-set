/**
 * 289 / 289 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
public:
    string removeDuplicateLetters(string s) {
        int occured[26] = { 0 };
        int visited[26] = { 0 };

        for ( auto& c : s ) occured[c - 'a'] ++ ;

        string ans;
        for ( auto& c : s ) {
            occured[c - 'a'] --;
            if ( !visited[c - 'a'] ) {
                while ( ans.size() != 0 && ans.back() > c && occured[ans.back() - 'a'] > 0 ) {
                    visited[ans.back() - 'a'] = 0;
                    ans.pop_back();
                } 
                visited[c - 'a'] = 1;
                ans.push_back( c );
            }
        }
        return ans;
    }
};

