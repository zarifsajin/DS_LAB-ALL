#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val){
           data=val;
           left=NULL;
           right=NULL;
     }
};

Node* insertBST(Node*root,int val) {
    if (root ==NULL) {
       return new Node(val);
      }
       if inOrderTraversal(root->left);

        std::cout << root->val << " ";

        inOrderTraversal(root->right);
    }
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Perform in-order traversal
    std::cout << "In-order traversal: ";
    inOrderTraversal(root);

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
