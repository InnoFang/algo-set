/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/


/**
 * 26 / 26 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.3 MB 
 */
class Solution {
public:
    Node* flatten(Node* head, Node*& tail) {
        Node *curr = head;
        tail = curr;
        while (curr) {
            if (curr->child) { 
                Node* child_tail = nullptr; 
                Node *child_head = flatten(curr->child, child_tail); 
                child_tail->next = curr->next;
                if (curr->next) 
                    curr->next->prev = child_tail;
                curr->next = child_head;
                child_head->prev = curr;
                curr->child = nullptr;
            }
            curr = curr->next; 
            if (curr) 
                tail = curr; 
        }
        return head;
    }

    Node* flatten(Node* head) {
        Node *tail = nullptr;
        return flatten(head, tail);
    }
};
