#include <iostream>
#include <queue>

using namespace std;

/**
 * 16 / 16 test case passed
 * Status: Accepted
 * Runtime: 0 ms
 */
class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        input.push(x);
        while (!output.empty()) {
            input.push(output.front());
            output.pop();
        }
        input.swap(output);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x = output.front();
        output.pop();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        return output.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return output.empty();
    }
private:
    queue<int> input, output;
};

int main () {
    MyStack stack;
    stack.push(1);
    stack.push(2);
    cout << stack.top() << endl;
    cout << stack.pop() << endl;
    cout << stack.empty() << endl;
    return 0;
}