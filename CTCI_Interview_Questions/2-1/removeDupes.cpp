/**
 * CTCI 2-1: Remove Dups! Write code to remove duplicates from an unsorted linked list. How would you solve this problem if a temporary buffer is not allowed?
 */
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int _val) {
        val = _val;
        next = nullptr;
        prev = nullptr;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }

    Node(int _val, Node* _next, Node* _prev) {
        val = _val;
        next = _next;
        prev = _prev;
    }
};

class SinglyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    SinglyLinkedList() {
        head = nullptr;
        tail = head;
    }

    Node* getHead() { return head; }
    Node* getTail() { return tail; }

    bool empty() {
        if (head == nullptr)
            return true;
        return false;
    }

    bool push_back(Node* node) {
        if (node == nullptr)
            return false;

        if (tail == nullptr) {
            head = node;
            tail = node;
            return true;
        }

        tail->next = node;
        tail = node;
        return true;
    }

    bool remove(Node* node) {
        Node* curr = head;
        Node* prev = nullptr;
        while (curr != nullptr) {
            if (curr == node) {
                if (curr == head) {
                    head = curr->next;
                } else if (curr == tail) {
                    prev->next = nullptr;
                    tail = prev;
                } else {
                    prev->next = curr->next;
                }
                delete node;
                return true;
            }
            prev = curr;
            curr = curr->next;
        }
        return false;
    }

    void print() {
        cout << "head->{ ";
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << "}" << endl;
    }
};

// time: O(N)
// space: O(N)
void removeDups(SinglyLinkedList* ll) {
   unordered_set<int> hash_table;
   
   Node* curr = ll->getHead();
   while (curr != nullptr) {
        int val = curr->val;
        if (hash_table.find(val) != hash_table.end()) {
            Node* temp = curr;
            curr = curr->next;
            ll->remove(temp);
        } else {
            hash_table.insert(val);
            curr = curr->next;
        }
   }
}

// no secondary buffer
// time: O(N^2)
// space: O(1)
void noBufferRemoveDups(SinglyLinkedList* ll) {
    Node* curr = ll->getHead();
    while (curr != nullptr) {
        int val = curr->val;
        Node* runner = curr->next;

        while (runner != nullptr) {
            if (runner->val == val) {
                Node* temp = runner;
                runner = runner->next;
                ll->remove(temp);
            } else {
                runner = runner->next;
            }
        }

        curr = curr->next;
    }
}

int main() {
    SinglyLinkedList* ll = new SinglyLinkedList();
    ll->push_back(new Node(5));
    ll->push_back(new Node(10));
    ll->push_back(new Node(5));
    ll->push_back(new Node(10));
    ll->push_back(new Node(3));
    ll->push_back(new Node(5));

    ll->print();
    removeDups(ll);
    ll->print();
    delete ll;
}
