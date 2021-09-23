/**
 * 20 / 20 test cases passed.
 * Runtime: 60 ms
 * Memory Usage: 33.2 MB 
 */
class Skiplist {
public:
    Skiplist(): head(INT_MIN, MAX_LEVEL) {}
    
    bool search(int target) {
        Node *prev = previousLevel(target)[0];
        return prev->level[0] && prev->level[0]->val == target;
    }

    void add(int num) {
        auto prevs = previousLevel(num);
        int level = randomLevel();
        if (level > curr_max_level) {
            for (int i = curr_max_level; i < level; i++) {
                prevs[i] = &head;
            }
            curr_max_level = level;
        }
        Node *curr = new Node(num, level);
        for (int i = level - 1; i >= 0; i--) {
            curr->level[i] = prevs[i]->level[i];
            prevs[i]->level[i] = curr;
        }
    }
    
    bool erase(int num) {
        auto prevs = previousLevel(num);
        if (!prevs[0]->level[0] || prevs[0]->level[0]->val != num) {
            return false;
        }
        Node *del = prevs[0]->level[0];
        for (int i = 0; i < curr_max_level; i++) {
            if (prevs[i]->level[i] == del) {
                prevs[i]->level[i] = del->level[i];
            }
        }
        delete del;
        while (curr_max_level > 1 && !head.level[curr_max_level - 1]) {
            curr_max_level--;
        }
        return true;
    }

private:
    struct Node {
        int val;
        vector<Node*> level;
        Node(int _val, int size) : val(_val), level(size) {}
    };
    Node head;
    int curr_max_level = 1;

    const double SKIPLIST_P = 0.25;
    static const int MAX_LEVEL = 8;   

    vector<Node*> previousLevel(int key) {
        Node *curr = &head;
        vector<Node*> prevs(MAX_LEVEL);
        for (int i = curr_max_level - 1; i >= 0; i--) {
            while (curr->level[i] && curr->level[i]->val < key) {
                curr = curr->level[i];
            }
            prevs[i] = curr;
        }
        return prevs;
    } 

    int randomLevel() {
        int level = 1;
        while ((rand() & 0xFFFF) < (SKIPLIST_P * 0xFFFF) && (level < MAX_LEVEL)) level += 1;
        return level;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */