#include <iostream>
#include <stack>

using namespace std;


/**
 * 17 / 17 test case passed
 * Status: Accepted
 * Runtime: 0 ms
 */
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        input.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (output.empty()) {
            transfer(input, output);
        }
        int x = output.top();
        output.pop();
        return x;
    }
    
    /** Get the front element. */
    int peek() {
       if (output.empty()) {
            transfer(input, output);
        }
        return output.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return input.empty() && output.empty();
    }
private:
    stack<int> input, output;
    void transfer(stack<int>& input, stack<int>& output) {
        while (!input.empty()) {
            output.push(input.top());
            input.pop();
        }
    }
};

int main () {
    MyQueue que;
    que.push(1);
    que.push(2);
    cout << que.peek() << endl;
    que.push(3);
    cout << que.peek() << endl;
    return 0;
}
