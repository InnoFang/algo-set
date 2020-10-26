/**
 * 36 / 36 test cases passed
 * Status: Accepted
 * Runtime: 0ms
 */
class Solution {
public:
    vector<string> splitBySpace( const string& str ) {
        vector<string> ret;
        stringstream input( str );
        string tmp;
        while ( input >> tmp ) 
            ret.push_back( tmp );
        return ret;
    }

    bool wordPattern(string pattern, string s) {
        vector<string> words = splitBySpace( s );
        if ( pattern.size() != words.size() ) return false;

        unordered_map<string, char> word2alpha;
        unordered_set<char> alpha;
        for ( int i = 0 ; i < pattern.size(); ++ i ) {
            if ( word2alpha.find( words[i] ) == word2alpha.end() ) {
                if ( alpha.find( pattern[i] ) != alpha.end() )
                    return false;
                word2alpha[ words[i] ] = pattern[i];
                alpha.insert( pattern[i] );
            } else if ( word2alpha[ words[i] ] != pattern[i] ) {
                return false;
            }
        }
        return true;
    }
};

