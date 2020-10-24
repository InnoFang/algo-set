/**
 * 46 / 46 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
public:
    
    bool check(string word, string pattern) {
        for ( int i = 0; i < word.size(); ++ i ) 
            if ( word.find( word[i] ) != pattern.find( pattern[i] ) ) 
                return false;
    
        return true;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector< string > ans;
        for ( auto&  word : words ) 
            if ( check( word, pattern ) ) 
                ans.push_back( word );
        
        return ans;
    }
};

