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
void preorder (struct Node* root){
    if (root==NULL){
            return;
}
cout<<root->data<<"  ";
preorder(root->left);
preorder(root->right);
}
int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Perform pre-order traversal
    std::cout << "Pre-order traversal: ";
    preorder(root);
    std::cout << std::endl;

    // Cleanup: free allocated memory (not necessary in many cases, just for demonstration)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
