/**
 * 15 / 15 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 47 MB 
 */
class Trie {
public:
    /** Initialize your data structure here. */
    Trie(): next(26), isEnd(false) {}
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* node = this;
        for (auto& ch: word) {
            int index = ch - 'a';
            if (nullptr == node->next[index]) {
                node->next[index] = new Trie();
            }
            node = node->next[index];
        }
        node->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* node = this;
        for (auto& ch: word) {
            int index = ch - 'a';
            if (nullptr == node->next[index]) {
                return false;
            }
            node = node->next[index];
        }
        return node->isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* node = this;
        for (auto& ch: prefix) {
            int index = ch - 'a';
            if (nullptr == node->next[index]) {
                return false;
            }
            node = node->next[index];
        }
        return true;
    }
private:
    vector<Trie*> next;
    bool isEnd;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
