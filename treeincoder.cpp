// Binary search tree-Incoder preorder postorder
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int n) : data(n), left(nullptr), right(nullptr) {}
};

void insert(Node *&node, int n) {
    if (node == nullptr) {
        node = new Node(n);
        return; // Return after creating a new node
    }
    if (n < node->data)
        insert(node->left, n);
    else if (n > node->data)
        insert(node->right, n);
    // If n is equal to node->data, do nothing (assuming duplicates are not allowed)
}

void inorder(Node *root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root) {
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root) {
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    int n, x;
    Node *root = nullptr;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        insert(root, x);
    }
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;
    return 0;
}
