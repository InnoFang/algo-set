/**
 * 17 / 17 test cases passed.
 * Runtime: 120 ms
 * Memory Usage: 53.9 MB 
 */
class AllOne {
public:
    /** Initialize your data structure here. */
    AllOne() = default;
    
    /** Inserts a new key <Key> with value 1. Or increments an existing key by 1. */
    void inc(string key) {
        if (nodes_.count(key)) {
            auto cur = nodes_[key], nxt = next(cur);
            if (nxt == freq_table_.end() || cur->second + 1 < nxt->second) {
                unordered_set<string> keys({key});
                nodes_[key] = freq_table_.emplace(nxt, keys, cur->second + 1);
            } else {
                nxt->first.emplace(key);
                nodes_[key] = nxt;
            }
            cur->first.erase(key);
            if (cur->first.empty()) {
                freq_table_.erase(cur);
            }
        } else {
            if (freq_table_.empty() || freq_table_.begin()->second > 1) {
                unordered_set<string> keys({key});
                freq_table_.emplace_front(keys, 1);
            } else {
                freq_table_.begin()->first.emplace(key);
            }
            nodes_[key] = freq_table_.begin();
        }
    }
    
    /** Decrements an existing key by 1. If Key's value is 1, remove it from the data structure. */
    void dec(string key) {
        if (!nodes_.count(key)) return;
        auto cur = nodes_[key];
        if (cur->second == 1) {
            nodes_.erase(key);
        } else {
            auto pre = prev(cur);
            if (cur == freq_table_.begin() || pre->second < cur->second - 1) {
                unordered_set<string> keys({key});
                nodes_[key] = freq_table_.emplace(cur, keys, cur->second - 1);
            } else {
                pre->first.emplace(key);
                nodes_[key] = pre;
            }
        }
        cur->first.erase(key);
        if (cur->first.empty()) {
            freq_table_.erase(cur);
        }
    }
    
    /** Returns one of the keys with maximal value. */
    string getMaxKey() {
        return freq_table_.empty() ? "" : *freq_table_.rbegin()->first.begin();
    }
    
    /** Returns one of the keys with Minimal value. */
    string getMinKey() {
        return freq_table_.empty() ? "" : *freq_table_.begin()->first.begin();
    }
private:
    using freq_table_type = list<pair<unordered_set<string>, int>>;
    freq_table_type freq_table_;
    unordered_map<string, freq_table_type::iterator> nodes_;
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */
