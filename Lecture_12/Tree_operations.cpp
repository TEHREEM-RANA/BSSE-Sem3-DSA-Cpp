#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// 🌟 Create & Insert (BST Insert)
Node* insert(Node* root, int value) {
    // If tree is empty
    if (root == NULL) {
        return new Node(value);
    }

    // Insert in left subtree
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    // Insert in right subtree
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

// 🌟 Search Operation
bool search(Node* root, int key) {
    if (root == NULL) {
        return false;
    }

    if (root->data == key) {
        return true;
    }
    else if (key < root->data) {
        return search(root->left, key);
    }
    else {
        return search(root->right, key);
    }
}

// 🌟 Traversals

// Inorder (Left → Root → Right)
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder (Root → Left → Right)
void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder (Left → Right → Root)
void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// 🌟 Main Function
int main() {
    Node* root = NULL;

    // Create + Insert elements
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << "\nPostorder Traversal: ";
    postorder(root);

    // Search element
    int key = 40;
    if (search(root, key)) {
        cout << "\nElement " << key << " found in tree.";
    } else {
        cout << "\nElement " << key << " NOT found.";
    }

    return 0;
}