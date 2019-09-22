/**
 * CTCI 2-3: Delete Middle Node: Implement an algorithm to delete a node in the middle (i.e., any node but the first and last node, not necessarily the exact middle) of a singly linked list, given only access to that node.
 */
#include <iostream>
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
// space: O(1)
// iterating through rest of list is unnecessary work!
void deleteMiddle(Node* middle) {
   Node* curr = middle;
   Node* next = middle->next;
   while (next != nullptr) {
      curr->val = next->val;
      if (next->next == nullptr) {
         curr->next = nullptr;
         return;
      }
      curr = next;
      next = next->next;
   }
}

// time: O(1)
// space: O(1)
void optimalDeleteMiddle(Node* middle) {
   if (middle != nullptr && middle->next != nullptr) {
      Node* next = middle->next;
      middle->val = next->val;
      middle->next = next->next;
   }
}

int main() {
   SinglyLinkedList* ll = new SinglyLinkedList();
   ll->push_back(new Node(10));
   ll->push_back(new Node(8));
   ll->push_back(new Node(6));
   Node* middle = new Node(4);
   ll->push_back(middle);
   ll->push_back(new Node(2));
   ll->push_back(new Node(0));

   ll->print();
   optimalDeleteMiddle(middle);
   ll->print();
   delete ll;
}