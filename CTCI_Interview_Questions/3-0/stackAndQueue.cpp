/**
 * CTCI 3 - implementing a stack and a queue
 */
#include <iostream>
#include <vector>
using namespace std;

class GenericNode {
      public:
      int val;
      GenericNode* next;
      GenericNode(int _val) {
         val = _val;
         next = nullptr;
      }
      GenericNode(int _val, GenericNode* _next) {
         val = _val;
         next = _next;
      }
   };

class LinkedStack {
private:
   GenericNode* top;
   int size;

public:
   LinkedStack() {
      top = nullptr;
      size = 0;
   }

   ~LinkedStack() {
      while (size >= 0) {
         pop();
      }
   }

   void pop() {
      if (size > 0) {
         GenericNode* temp = top;
         top = top->next;
         delete temp;
         size--;
      }
   }

   void push(int val) {
      GenericNode* node = new GenericNode(val);
      node->next = top;
      top = node;
      size++;
   }

   int peek() {
      if (size <= 0) {
         return -1;
      }
      return top->val;
   }

   bool isEmpty() {
      return size == 0;
   }

   int getSize() {
      return size;
   }
};

class LinkedQueue {
private:
   GenericNode* front;
   int size;

public:
   LinkedQueue() {
      front = nullptr;
      size = 0;
   }

   void add(int val) {
      GenericNode* node = new GenericNode(val);
      if (size == 0) {
         front = node;
      } else {
         GenericNode* curr = front;
         while (curr->next != nullptr) {
            curr = curr->next;
         }
         curr->next = node;
      }
      size++;
   }

   void remove() {
      if (size > 0) {
         GenericNode* temp = front;
         front = front->next;
         delete temp;
         size--;
      }
   }

   int peek() {
      if (size <= 0) {
         return -1;
      }
      return front->val;
   }

   int getSize() {
      return size;
   }
};

int main() {
   LinkedStack* stack = new LinkedStack();
   cout << "size: " << stack->getSize() << endl;
   stack->push(5);
   stack->push(10);
   stack->push(15);
   cout << "size: " << stack->getSize() << endl;
   cout << "peek: " << stack->peek() << endl;
   stack->pop();
   cout << "peek: " << stack->peek() << endl;
   stack->pop();
   stack->pop();
   cout << "size: " << stack->getSize() << endl << endl;

   LinkedQueue* queue = new LinkedQueue();
   cout << "size: " << queue->getSize() << endl;
   queue->add(5);
   queue->add(10);
   queue->add(15);
   cout << "size: " << queue->getSize() << endl;
   cout << "peek: " << queue->peek() << endl;
   queue->remove();
   cout << "peek: " << queue->peek() << endl;
   queue->remove();
   queue->remove();
   cout << "size: " << queue->getSize() << endl;
}