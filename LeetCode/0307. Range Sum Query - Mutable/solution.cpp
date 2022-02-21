/**
 * 15 / 15 test cases passed.
 * Runtime: 384 ms
 * Memory Usage: 149.4 MB 
 */
class NumArray {
public:
    NumArray(vector<int>& nums): nums_(nums), size_(nums.size()) {
        tree_.resize(size_ << 2);
        buildTree(0, 0, size_ - 1);
    }
    
    void update(int index, int val) {
        updateTree(0, 0, size_ - 1, index, val);
    }
    
    int sumRange(int left, int right) {
        return queryTree(0, 0, size_ - 1, left, right);
    }

private:
    void buildTree(int node, size_t begin, size_t end) {
        if (begin == end) {
            tree_[node] = nums_[begin];
            return;
        }

        size_t mid = begin + (end - begin) / 2;
        int left_node  = 2  * node + 1;
        int right_node = left_node + 1;
        buildTree(left_node, begin, mid);
        buildTree(right_node, mid + 1, end);
        tree_[node] = tree_[left_node] + tree_[right_node];
    }

    void updateTree(int node, size_t begin, size_t end, size_t index, int value) {
        if (begin > end) return;
        if (begin == end) {
            nums_[index] = value;
            tree_[node] = value;
            return;
        }

        size_t mid = begin + (end - begin) / 2;
        int left_node  = 2  * node + 1;
        int right_node = left_node + 1;

        if (begin <= index && index <= mid) {
            updateTree(left_node, begin, mid, index, value);
        } else {
            updateTree(right_node, mid + 1, end, index, value);
        }
        tree_[node] = tree_[left_node] + tree_[right_node];
    }

    int queryTree(int node, size_t begin, size_t end, size_t left, int right) {
        if (right < begin || left > end) return 0;
        if (begin == end || (left <= begin && end <= right)) return tree_[node];

        size_t mid = begin + (end - begin) / 2;
        int left_node  = 2  * node + 1;
        int right_node = left_node + 1;
        
        int left_sum = queryTree(left_node, begin, mid, left, right);
        int right_sum = queryTree(right_node, mid + 1, end, left, right);
        return left_sum + right_sum;
    }

private:
    size_t size_;
    vector<int> nums_;
    vector<int> tree_;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */