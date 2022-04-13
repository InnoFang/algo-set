/**
 * 19 / 19 test cases passed.
 * Runtime: 172 ms
 * Memory Usage: 94.8 MB 
 */
class RandomizedSet {
public:
    RandomizedSet() {
        srand((unsigned)time(0));
    }
    
    bool insert(int val) {
        if (_indecies.count(val)) {
            return false;
        }
        _indecies[val] = _nums.size(); 
        _nums.emplace_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (!_indecies.count(val)) {
            return false;
        }
        int index = _indecies[val];
        int last = _nums.back();
        _nums[index] = last;
        _indecies[last] = index;
        _nums.pop_back();
        _indecies.erase(val);
        return true;
    }
    
    int getRandom() {
        size_t index = rand() % _nums.size();
        return _nums[index];
    }
    
private:
    vector<int> _nums;
    unordered_map<int, int> _indecies;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
