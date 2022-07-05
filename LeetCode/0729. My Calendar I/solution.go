/**
 * 107 / 107 test cases passed.
 * Runtime: 72 ms
 * Memory Usage: 7.1 MB 
 */
 type MyCalendar struct {
    *redblacktree.Tree
}


func Constructor() MyCalendar {
    t := redblacktree.NewWithIntComparator()
    t.Put(math.MaxInt32, nil)
    return MyCalendar{ t }
}


func (this *MyCalendar) Book(start int, end int) bool {
    node, _ := this.Ceiling(end)
    it := this.IteratorAt(node)
    if !it.Prev() || it.Value().(int) <= start {
        this.Put(start, end)
        return true
    }
    return false
}


/**
 * Your MyCalendar object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Book(start,end);
 */
