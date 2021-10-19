/**
 * 13 / 13 test cases passed.
 * Runtime: 116 ms
 * Memory Usage: 55 MB 
 */
class WordDictionary {
private:
    struct TrieNode;

public:
    WordDictionary() : root_(make_shared<TrieNode>()) {}
    
    void addWord(string word) {
        auto node = root_; 
        for (const char &c: word) {
            int idx = c - 'a';
            if (!node->next_[idx]) {
                node->next_[idx] = make_shared<TrieNode>();
            }
            node = node->next_[idx];
        }
        node->end_ = true;
    }
    
    bool search(string word) {
        return find_(word, root_, 0);
    }

private:
    bool find_(const string &word, shared_ptr<TrieNode> node, int idx) {
        if (!node) return false;
        if (idx == word.size()) return node->end_;
        if (word[idx] == '.') {
            for (const auto &next : node->next_) {
                if (find_(word, next, idx + 1)) {
                    return true;
                }
            }
        } else {
            return find_(word, node->next_[word[idx] - 'a'], idx + 1);
        }
        return false;
    }

private:
    struct TrieNode {
        TrieNode() : end_(false), next_(26, nullptr) {}
        bool end_;
        vector<shared_ptr<TrieNode>> next_;
    };
    shared_ptr<TrieNode> root_;
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
