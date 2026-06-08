#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to calculate height
int height(Node* root) {
    if (root == NULL)
        return 0;

    return 1 + max(height(root->left), height(root->right));
}

// Function to check balanced tree
bool isBalanced(Node* root) {
    if (root == NULL)
        return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if (abs(leftHeight - rightHeight) <= 1 &&
        isBalanced(root->left) &&
        isBalanced(root->right))
        return true;

    return false;
}

// Main
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    if (isBalanced(root))
        cout << "Tree is Balanced";
    else
        cout << "Tree is NOT Balanced";

    return 0;
}