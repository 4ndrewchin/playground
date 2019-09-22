/**
 * CTCI 2-2: Return Kth to Last: Implement an algorithm to find the kth to last element of a singly linked list.
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
Node* kToLast(SinglyLinkedList* ll, int k) {
   if (k <= 0)
      return nullptr;
   
   Node* curr = ll->getHead();
   int size = 0;
   while (curr != nullptr) {
      size++;
      curr = curr->next;
   }

   if (k > size)
      return nullptr;
   
   int index = size - k;
   curr = ll->getHead();
   int i = 0;
   while (i < index) {
      i++;
      curr = curr->next;
   }
   return curr;
}

int main() {
   SinglyLinkedList* ll = new SinglyLinkedList();
   ll->push_back(new Node(10));
   ll->push_back(new Node(8));
   ll->push_back(new Node(6));
   ll->push_back(new Node(4));
   ll->push_back(new Node(2));
   ll->push_back(new Node(0));

   int k = 7;
   ll->print();
   Node* result = kToLast(ll, k);
   if (result == nullptr)
      cout << "size of list is < k" << endl;
   else
      cout << result->val << endl;
   delete ll;
}
