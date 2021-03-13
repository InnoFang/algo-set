/**
 * 32 / 32 test cases passed.
 * Runtime: 116 ms
 * Memory Usage: 41 MB 
 */
class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        data.assign(base, list<int>());
    }
    
    void add(int key) {
        int h = hash(key);
        auto it = find(data[h].begin(), data[h].end(), key);
        if (it == data[h].end()) {
            data[h].push_back(key);
        }
    }
    
    void remove(int key) {
        int h = hash(key);
        auto it = find(data[h].begin(), data[h].end(), key);
        if (it != data[h].end()) {
            data[h].erase(it);
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int h = hash(key);
        auto it = find(data[h].begin(), data[h].end(), key);
        return it != data[h].end();
    }
private:
    int base = 997;
    vector<list<int>> data;
    int hash(int key) {
        return key % base;
    }
};

/**
 * 32 / 32 test cases passed.
 * Runtime: 112 ms
 * Memory Usage: 175.7 MB 
 */
class MyHashSet2 {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        data.resize(1000005);
    }
    
    void add(int key) {
        data[key] = 1;
    }
    
    void remove(int key) {
        data[key] = 0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return data[key] == 1;
    }
private:
    vector<int> data;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
