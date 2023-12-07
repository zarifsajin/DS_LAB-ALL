#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function for post-order traversal
void postOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        // Traverse the left subtree
        postOrderTraversal(root->left);

        // Traverse the right subtree
        postOrderTraversal(root->right);

        // Process the current node (e.g., print its value)
        std::cout << root->val << " ";
    }
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Perform post-order traversal
    std::cout << "Post-order traversal: ";
    postOrderTraversal(root);
    std::cout << std::endl;

    // Cleanup: free allocated memory (not necessary in many cases, just for demonstration)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
