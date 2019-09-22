/**
 * Simple Implementation of Trees
 */ 
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class TreeNode {
public:
   int value;
   vector<TreeNode*> children;
};

class BinaryTreeNode {
public:
   int value;
   bool marked;
   BinaryTreeNode* left;
   BinaryTreeNode* right;

   BinaryTreeNode(int _value) {
      value = _value;
      marked = false;
      right = nullptr;
      left = nullptr;
   }
};

void visit(BinaryTreeNode* node) {
   cout << node->value << " ";
}

void inOrderTraversal(BinaryTreeNode* root) {
   if (root != nullptr) {
      inOrderTraversal(root->left);
      visit(root);
      inOrderTraversal(root->right);
   }
}

void preOrderTraversal(BinaryTreeNode* root) {
   if (root != nullptr) {
      visit(root);
      preOrderTraversal(root->left);
      preOrderTraversal(root->right);
   }
}

void postOrderTraversal(BinaryTreeNode* root) {
   if (root != nullptr) {
      postOrderTraversal(root->left);
      postOrderTraversal(root->right);
      visit(root);
   }
}

void depthFirstSearch(BinaryTreeNode* root) {
   BinaryTreeNode* first = root;
   stack<BinaryTreeNode*> s;
   first->marked = true;
   s.push(first);

   while (!s.empty()) {
      BinaryTreeNode* n = s.top();
      s.pop();
      visit(n);

      // for each child of n:
      // mark as true and push onto stack
      if (n->left != nullptr) {
         if (n->left->marked == false) {
            n->left->marked = true;
            s.push(n->left);
         }
      }
      if (n->right != nullptr) {
         if (n->right->marked == false) {
            n->right->marked = true;
            s.push(n->right);
         }
      }
   }
}

void breadthFirstSearch(BinaryTreeNode* root) {
   BinaryTreeNode* first = root;
   queue<BinaryTreeNode*> q;
   first->marked = true;
   q.push(first);

   while (!q.empty()) {
      BinaryTreeNode* n = q.front();
      q.pop();
      visit(n);

      // for each child of n:
      // mark as true and push onto queue
      if (n->left != nullptr) {
         if (n->left->marked == false) {
            n->left->marked = true;
            q.push(n->left);
         }
      }
      if (n->right != nullptr) {
         if (n->right->marked == false) {
            n->right->marked = true;
            q.push(n->right);
         }
      }
   }
}

int main() {
   BinaryTreeNode* root = new BinaryTreeNode(10);
   root->left = new BinaryTreeNode(5);
   root->right = new BinaryTreeNode(8);
   root->left->left = new BinaryTreeNode(1);
   root->left->right = new BinaryTreeNode(2);
   root->left->right->left = new BinaryTreeNode(4);
   root->right->left = new BinaryTreeNode(3);

   inOrderTraversal(root);
   cout << endl;
   preOrderTraversal(root);
   cout << endl;
   postOrderTraversal(root);
   cout << endl << endl;

   /*cout << "DFS: ";
   depthFirstSearch(root);
   cout << endl;*/
   cout << "BFS: ";
   breadthFirstSearch(root);
   cout << endl;
}