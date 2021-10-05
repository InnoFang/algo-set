
/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

/**
 * 14 / 14 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.3 MB 
 */
class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	   	has_next_ = Iterator::hasNext();
		if (has_next_) {
			next_num_ = Iterator::next();
		} 
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
       return next_num_; 
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	   int ret = next_num_;
	   has_next_ = Iterator::hasNext();
	   if (has_next_) {
		   next_num_ = Iterator::next();
	   } 
	   return ret;
	}
	
	bool hasNext() const {
	   return has_next_;
	}

private:
	int next_num_;	
	bool has_next_;
};
